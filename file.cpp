//
// Created by andrew on 2021/6/22.
//

#include "file.h"
#include "word.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

vector<Word> readIn(const char *fileName) {
    ifstream fin(fileName);
    vector<Word> wordsList;
    string t_word, t_translation;
    while (getline(fin, t_word)) {
        getline(fin, t_translation);
        t_word = t_word.substr(1);
        t_translation = t_translation.substr(6);
        Word word;
        word.word = t_word;
        vector<string> translationsList;
        char *translation_string_array = new char[t_translation.length()+1];
        strcpy(translation_string_array,t_translation.c_str());
        char *translation = strtok(translation_string_array, "@");
        while (translation != NULL) {
            translationsList.push_back(string(translation));
            translation= strtok(NULL,"@");
        }
        delete[] translation_string_array;
        word.translationsList = translationsList;
        wordsList.push_back(word);
    }
    return wordsList;
}

void writeOut(vector<Word> &wordsList, const char *fileName) {
    ofstream fout(fileName);
    for (int i = 0; i < wordsList.size(); ++i) {
        fout << "#" << wordsList[i].word << "\n"
             << "Trans:";
        for (int j = 0; j < wordsList[i].translationsList.size(); ++i) {
            fout << wordsList[i].translationsList[j];
            if (j < wordsList[i].translationsList.size() - 1) {
                fout << "@";
            }
        }
    }
}
