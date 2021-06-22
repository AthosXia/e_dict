//
// Created by andrew on 2021/6/22.
//

#ifndef E_DICT_WORD_H
#define E_DICT_WORD_H

#include <string>
#include <vector>

using namespace std;

typedef struct {
    string word;
    vector<string> translationsList;
} Word;

void printWordsList(vector<Word>& wordsList);

#endif //E_DICT_WORD_H
