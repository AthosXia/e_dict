#include "string_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream fin("ecdict.csv");
    string s;
    while (getline(fin,s)) {
        vector<string> words = tokenize(s);
        for (vector<string>::iterator iterator = words.begin(); iterator != words.end(); ++iterator) {
            cout << *iterator;
        }
        cout << endl;
    }
    return 0;
}
