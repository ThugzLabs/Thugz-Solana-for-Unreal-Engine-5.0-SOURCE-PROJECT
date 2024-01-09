// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include "Wallet.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <curl/curl.h>
#include <json/json.h>

using namespace std;

// Définition de la teille du writecallback
size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append(static_cast<char*>(contents), total_size);
    return total_size;
}

// fonction qui parcourt le JSON pour chercher si un thugz est présent 
/*bool  parcourirJson(const Json::Value& valeur, const std::string& chemin) {

    if (valeur.isObject()) {
        //std::cout << "Objet JSON {" << chemin << "}\n";
        for (const auto& it : valeur.getMemberNames()) {
            parcourirJson(valeur[it], chemin + "." + it);
        }
    }
    else if (valeur.isArray()) {
        //std::cout << "Tableau JSON [" << chemin << "]\n";
        for (int i = 0; i < valeur.size(); ++i) {
            parcourirJson(valeur[i], chemin + "[" + std::to_string(i) + "]");
        }
    }
    else {
        std::cout << chemin << " : " << valeur.asString() << "\n";
        
    }
    return false;
}*/


// fonction qui parse le JSON en entrée pour récupérer la "value" qui stocke le dolde solana du Wallet
double DecodeBalance(string response)
{
    double Value=0;
    string text = response;
    //Initialisation du JSON
    Json::Value root;
    Json::Reader reader;
    //Lecture du JSON
    bool parsingSuccessful = reader.parse(text, root);
    if (!parsingSuccessful)
    {
        std::cout << "Error parsing the string" << endl;
    }

    //Boucle pour récupérer et lire chaque valeur. SI un clé=value, alors on stocke la vleur dans la variable VALUE
    for (Json::Value::const_iterator outer = root.begin(); outer != root.end(); outer++)
    {
        for (Json::Value::const_iterator inner = (*outer).begin(); inner != (*outer).end(); inner++)
        {
            //std::cout << inner.key() << ": " << *inner << endl;
            if(inner.key() == "value") {
                Value = inner -> asDouble();
            }
        }
    }
    return Value;
}

// fonction qui parse le JSON en entrée pour l'afficher par cout
string DecodeTokenAffichage(string response)
{
    string Value;
    string text = response;
    //Initialisation du JSON
    Json::Value root;
    Json::Reader reader;
    //Lecture du JSON
    bool parsingSuccessful = reader.parse(text, root);
    if (!parsingSuccessful)
    {
        std::cout << "Error parsing the string" << endl;
    }

    //Boucle pour récupérer et lire chaque valeur. SI un clé=value, alors on stocke la vleur dans la variable VALUE
    for (Json::Value::const_iterator outer = root.begin(); outer != root.end(); outer++)
    {
        for (Json::Value::const_iterator inner = (*outer).begin(); inner != (*outer).end(); inner++)
        {
            std::cout << inner.key() << ": " << *inner << endl;

        }
    }
    return Value;
}
 //Fonction qui parse le JSON Hellomoon de la requete Mint_by_owner (NFT ownership) pour stocker les valeurs dans des variables
void RecupMetaData(string jsonString) 
{
    Json::CharReaderBuilder builder;
    Json::CharReader* reader = builder.newCharReader();
    Json::Value root;
    std::string errors;

    bool parsingSuccessful = reader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.size(), &root, &errors);
    delete reader;

    if (!parsingSuccessful) {
        std::cerr << "Failed to parse JSON: " << errors << std::endl;
    }
    // Issu de chat GPT
    // Extraction des valeurs
    /*const Json::Value& data = root["data"][0];
    std::string nftMint = data["nftMint"].asString();
    std::string ownerAccount = data["ownerAccount"].asString();
    std::string metadataAddress = data["metadataAddress"].asString();

    const Json::Value& metadataJson = data["metadataJson"];
    std::string name = metadataJson["name"].asString();
    std::string symbol = metadataJson["symbol"].asString();
    std::string uri = metadataJson["uri"].asString();
    int sellerFeeBasisPoints = metadataJson["sellerFeeBasisPoints"].asInt();
    
     // Extraction des créateurs
    const Json::Value& creators = metadataJson["creators"];
    std::vector<std::string> creatorAddresses;
    std::vector<bool> creatorVerified;
    std::vector<int> creatorShares;

    for (const auto& creator : creators) {
        creatorAddresses.push_back(creator["address"].asString());
        creatorVerified.push_back(creator["verified"].asBool());
        creatorShares.push_back(creator["share"].asInt());
    }

    std::string nftCollectionMint = data["nftCollectionMint"].asString();

    // Extraction des créateurs vérifiés
    const Json::Value& verifiedCreators = data["verifiedCreators"];
    std::vector<std::string> verifiedCreatorAddresses;
    for (const auto& vc : verifiedCreators) {
        verifiedCreatorAddresses.push_back(vc.asString());
    }

    std::string helloMoonCollectionId = data["helloMoonCollectionId"].asString();

    // Affichage des valeurs extraites (à titre d'exemple)
    std::cout << "NFT Mint: " << nftMint << "\n"
        << "Owner Account: " << ownerAccount << "\n"
        << "Metadata Address: " << metadataAddress << "\n";
        
    std::cout<<  "Name: " << name << "\n"
        << "Symbol: " << symbol << "\n"
        << "URI: " << uri << "\n"
        << "Seller Fee Basis Points: " << sellerFeeBasisPoints << "\n";

    for (size_t i = 0; i < creatorAddresses.size(); ++i) {
        std::cout << "Creator " << i + 1 << ": " << creatorAddresses[i]
            << ", Verified: " << (creatorVerified[i] ? "Yes" : "No")
            << ", Share: " << creatorShares[i] << "\n";
    }

    std::cout << "NFT Collection Mint: " << nftCollectionMint << "\n"
        << "Hello Moon Collection ID: " << helloMoonCollectionId << "\n";*/
    
    ///////////////////////////////////////////////////////////////////////////////////
    const Json::Value& data = root["data"];
    std::vector<std::string> nftMint;
    std::vector<std::string> ownerAccount;
    std::vector<std::string> metadataAddress;
    std::vector<std::string> name;
    std::vector<std::string> symbol;
    std::vector<std::string> uri;
    for (const auto& data : data) {
        nftMint.push_back(data["nftMint"].asString());
        ownerAccount.push_back(data["ownerAccount"].asString());
        metadataAddress.push_back(data["metadataAddress"].asString());
        name.push_back(data["metadataJson"]["name"].asString());
        symbol.push_back(data["metadataJson"]["symbol"].asString());
        uri.push_back(data["metadataJson"]["uri"].asString());
    }


    for (size_t i = 0; i < nftMint.size(); ++i) {
        std::cout << "NFT "<< i+1 << "\n"
            << "NFT Mint: " << nftMint[i] << "\n"
            << "Owner Account: " << ownerAccount[i] << "\n"
            << "Metadata Address: " << metadataAddress[i] << "\n"
            << "Name: " << name[i] << "\n"
            << "Symbol: " << symbol[i] << "\n"
            << "URI: " << uri[i] << "\n";
    }

    //////////////////////////////////////////////////////////////////////////////////

   
}

//////////////////////////////////////////////////////////VERIFICATION SI UN NFT EST THUGZ////////////////////////////////////////////////////////////////////////////
/*bool DecodeNFT(string response)
{
    // Initialiser le parseur JsonCpp
    Json::CharReaderBuilder reader;
    Json::Value jsonData;

    // Effectuer le parsing
    std::istringstream jsonStream(response);
    Json::parseFromStream(reader, jsonStream, &jsonData, nullptr);

    // Parcourir et afficher la hiérarchie JSON
    return parcourirJson(jsonData, "");
}*/
//////////////////////////////////////////////////////////VERIFICATION SI UN NFT EST THUGZ////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////RECUPERATION DE LA BALANCE DU WALLET PAR RPC////////////////////////////////////////////////////////////////
// fonction qui utilise la librairie CURL pour appeler la methode SOLANA via des requête HTTP. CF: https://docs.solana.com/api/http
double WAlletGetBalance(const char* Pkey) {

    //Préparation des paramètres de la requêtes GetBalance qui seront stocké dans parameters

    const char* parameters1 = "{\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"getBalance\", \"params\": [\"";
    const char* parameters2 = Pkey;
    const char* parameters3 = "\"]}";

    size_t longueurParameters = strlen(parameters1) + strlen(parameters2) + strlen(parameters3) + 1;

    char* parameters = new char[longueurParameters];

    strcpy_s(parameters, longueurParameters, parameters1);
    strcat_s(parameters, longueurParameters, parameters2);
    strcat_s(parameters, longueurParameters, parameters3);


    //initialisation du CURL
    CURL* hnd = curl_easy_init();
    if (!hnd) {
        std::cerr << "Erreur lors de l'initialisation de CURL." << std::endl;

    }
    //Initialisation de la requête. la réponse (le JSON) sera stpocké dans response
    string response;
    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
    curl_easy_setopt(hnd, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(hnd, CURLOPT_WRITEDATA, &response);
    //Déinition de l'API à utiliser. Ici c'est hellomoon avec ma clé API
    curl_easy_setopt(hnd, CURLOPT_URL, "https://rpc.hellomoon.io/84fc727a-66fd-4f4c-a723-17adb50ce7ca");

    struct curl_slist* headers = NULL;
    headers = curl_slist_append(headers, "accept: application/json");
    headers = curl_slist_append(headers, "content-type: application/json");
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

    // Requête finale définissant la méthode et les paramètres en entré. La réponse est affichée dans al console
    curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, parameters);

    CURLcode ret = curl_easy_perform(hnd);
    delete[] parameters;
    return DecodeBalance(response);

 }
//////////////////////////////////////////////////////////RECUPERATION DE LA BALANCE DU WALLET PAR RPC///////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////RECUPERATION DES SPL TOKENS DU WALLET PAR RPC///////////////////////////////////////////////////////////////
string WalletGetToken(const char* Pkey) {

    //Préparation des paramètres de la requêtes GetBalance qui seront stocké dans parameters
    const char* parameters1 = "{\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"getTokenAccountsByOwner\",\"params\": [\"";
    const char* parameters2 = Pkey;
    // le programme ID est trop large et regroupe plusieurs SPL-token
    const char* parameters3 = "\",{\"programId\": \"TokenkegQfeZyiNwAJbNbGKPFXCWuBvf9Ss623VQ5DA\"},{\"encoding\": \"jsonParsed\"}]}";

    size_t longueurParameters = strlen(parameters1) + strlen(parameters2) + strlen(parameters3) + 1;

    char* parameters = new char[longueurParameters];

    strcpy_s(parameters, longueurParameters, parameters1);
    strcat_s(parameters, longueurParameters, parameters2);
    strcat_s(parameters, longueurParameters, parameters3);


    //initialisation du CURL
    CURL* hnd = curl_easy_init();
    if (!hnd) {
        std::cerr << "Erreur lors de l'initialisation de CURL." << std::endl;
    }
    //Initialisation de la requête. la réponse (le JSON) sera stpocké dans response
    string response;
    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
    curl_easy_setopt(hnd, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(hnd, CURLOPT_WRITEDATA, &response);
    //Déinition de l'API à utiliser. Ici c'est hellomoon avec ma clé API
    curl_easy_setopt(hnd, CURLOPT_URL, "https://rpc.hellomoon.io/84fc727a-66fd-4f4c-a723-17adb50ce7ca");

    struct curl_slist* headers = NULL;
    headers = curl_slist_append(headers, "accept: application/json");
    headers = curl_slist_append(headers, "content-type: application/json");
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

    // Requête finale définissant la méthode et les paramètres en entré. La réponse est affichée dans al console
    curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, parameters);

    CURLcode ret = curl_easy_perform(hnd);
    delete[] parameters;
    DecodeTokenAffichage(response);
    
    //curl_easy_cleanup(hnd);

    return response;
}
//////////////////////////////////////////////////////////RECUPERATION DES SPL TOKENS DU WALLET PAR RPC///////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////RECUPERATION DES META DATA DUN SPL TOKEN PAR API////////////////////////////////////////////////////////////
//Fonction de récuperation des metata data d'un SPL Token
string TokenGetMeta(const char* Pkey) {
    
    //Préparation des paramètres de la requêtes GetBalance qui seront stocké dans parameters
    const char* parameters1 = "{\"ownerAccount\":\"";
    const char* parameters2 = Pkey;
    const char* parameters3 = "\"}";

    size_t longueurParameters = strlen(parameters1) + strlen(parameters2) + strlen(parameters3) + 1;

    char* parameters = new char[longueurParameters];

    strcpy_s(parameters, longueurParameters, parameters1);
    strcat_s(parameters, longueurParameters, parameters2);
    strcat_s(parameters, longueurParameters, parameters3);
        
    CURL* hnd = curl_easy_init();
    string response;
    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
    curl_easy_setopt(hnd, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(hnd, CURLOPT_WRITEDATA, &response);
    curl_easy_setopt(hnd, CURLOPT_URL, "https://rest-api.hellomoon.io/v0/nft/mints-by-owner");

    struct curl_slist* headers = NULL;
    headers = curl_slist_append(headers, "accept: application/json");
    headers = curl_slist_append(headers, "content-type: application/json");
    headers = curl_slist_append(headers, "authorization: Bearer 84fc727a-66fd-4f4c-a723-17adb50ce7ca");
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

    curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, parameters);
     
    CURLcode ret = curl_easy_perform(hnd);
    delete[] parameters;
    RecupMetaData(response);
    return "1";  
}
//////////////////////////////////////////////////////////RECUPERATION DES META DATA DUN SPL TOKEN PAR API////////////////////////////////////////////////////////////