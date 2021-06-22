//
// Created by andrew on 2021/6/21.
//

#ifndef E_DICT_LINKED_LIST_H
#define E_DICT_LINKED_LIST_H

#include <string>

class ListNode {
private:
    string word;
    string phonetic;
    string definition;
    string translation;
    string pos;
    string collins;
    string oxford;
    string tag;
    string bnc;
    string frq;
    string exchange;
    string detail;
    string audio;
public:
    ListNode(const string &word, const string &phonetic, const string &definition, const string &translation,
             const string &pos, const string &collins, const string &oxford, const string &tag, const string &bnc,
             const string &frq, const string &exchange, const string &detail, const string &audio) : word(word),
                                                                                                     phonetic(phonetic),
                                                                                                     definition(
                                                                                                             definition),
                                                                                                     translation(
                                                                                                             translation),
                                                                                                     pos(pos),
                                                                                                     collins(collins),
                                                                                                     oxford(oxford),
                                                                                                     tag(tag), bnc(bnc),
                                                                                                     frq(frq),
                                                                                                     exchange(exchange),
                                                                                                     detail(detail),
                                                                                                     audio(audio) {}
};

#endif //E_DICT_LINKED_LIST_H
