//
// Created by andrew on 2021/6/22.
//
#include "word.h"
#include <iostream>

using namespace std;
void printWordsList(vector<Word>& wordsList){
    for (int i=0;i<wordsList.size();++i){
        cout << wordsList[i].word << endl;
        for (int j=0;j<wordsList[i].translationsList.size();++j){
            cout << wordsList[i].translationsList[j];
            if (j<wordsList[i].translationsList[j].size()-1)
                cout << " ";
        }
        cout << endl;
    }
}
