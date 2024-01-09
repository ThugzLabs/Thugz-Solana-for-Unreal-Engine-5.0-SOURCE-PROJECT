#pragma once


#ifndef WALLET_H_INCLUDED
#define WALLET_H_INCLUDED

#include <string>
#include <json/json.h>

double WAlletGetBalance(const char* Pkey);
double DecodeBalance(std::string response);
size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output);
//bool parcourirJson(const Json::Value& valeur, const std::string& chemin);
std::string WalletGetToken(const char* Pkey);
std::string  TokenGetMeta(const char* Pkey);
std::string DecodeTokenAffichage(std::string response);
void RecupMetaData(std::string response);


#endif // MATH_HPP_INCLUDED