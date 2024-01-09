#include <iostream>
#include "Wallet.h"
#include <string>
#include <curl/curl.h>
#include <json/json.h>
#include <vector>

using namespace std;





int main() {

    // conversion du string entrer par l'utilisateur en const char* qui est le type utilisé par la librairie CURL
   string TEMPPkey;
    cout << "Entrez l'adresse publique du wallet que vous souhaitez consulter " << endl;
    cin >> TEMPPkey;
    const char* Pkey = TEMPPkey.c_str();
    
    cout << "Vos NFTs: " <<TokenGetMeta(Pkey) << endl;
    cout << "SOL balance:  " << WAlletGetBalance(Pkey) << endl;
    //cout << WalletGetToken(Pkey) <<endl;

    return 0;
}