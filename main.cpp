#include <stdio.h>
#include <fstream>
#include "Trie.h"

using namespace std;

int main() {

    /*
        process idea
        1. create new Trie
        2. read phrases.txt into Trie
            a. read words by spaces
            b. put them into a vector
            c end vector at new line
            d. feed vector into Trie
        3. use Trie to generate a random phrase
            a. Trie will select a random child and then append that child to the sentence
            b. sentence ends when the trie ends

    */


    Trie tree = new Trie();

    cout << "It's working!\n";
    return 0;
}