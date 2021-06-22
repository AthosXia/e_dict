//
// Created by andrew on 2021/6/21.
//
#include "string_utils.h"
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

vector<string> tokenize(string s) {
    vector<string> tokens;
    const char *const_string_array = s.c_str();
    char *string_array = (char *) malloc(s.length() * sizeof(char));
    memcpy(string_array,const_string_array,s.length());
    char *token = strtok(string_array, ",");
    while (token != NULL) {
        tokens.push_back(string(token));
        token = strtok(NULL, ",");
    }
    tokens.pop_back();
    free(string_array);
    return tokens;
}