#ifndef TRIE_H
#define TRIE_H
#include "Node.h"

using namespace std;

class Trie {
    private:
        Node root;
        
    public:
        Trie();
        ~Trie();
        void addSentence(string sentence);
        string makeSentence();
};

#endif