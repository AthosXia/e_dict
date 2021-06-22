//
// Created by andrew on 2021/6/22.
//

#ifndef E_DICT_FILE_H
#define E_DICT_FILE_H

#include "word.h"
#include <vector>

using namespace std;

vector<Word> readIn(const char* fileName);

void writeOut(vector<Word> &wordsList, const char* fileName);

#endif //E_DICT_FILE_H
