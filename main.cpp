#include "word.h"
#include "file.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Word> wordsListCE;
vector<Word> wordsListEC;

int main() {
    wordsListCE = readIn("dict_chi_eng.txt");
    wordsListEC = readIn("dict_eng_chi.txt");
    printWordsList(wordsListCE);
    printWordsList(wordsListEC);
    return 0;
}
