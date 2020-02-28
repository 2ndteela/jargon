#ifndef NODE_H
#define NODE_H
#include <string>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

class Node {
    private:
        string word;
        map<string, Node> children;
        
    public:
        Node();
        Node(string word);
        void addChild(vector<string>sentence, int idx);
        bool checkChild(string word);
        ~Node();
};

#endif