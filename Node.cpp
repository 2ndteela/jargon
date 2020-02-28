#include "Node.h"

Node::Node() {
    children = new map<string, Node>();
}

Node::Node(string word) {
    children = new map<string, Node>();
    this.word = word;
}

Node::~Node(){ }

void Node::addChild(vector<string> sentence, int idx) {
    if(idx == sentence.size()) return;
    
    map<string,int>::iterator it;
    it = children.find(sentence[idx]);
    if(it == children.end()) {
        // add new word
    }
    else {
        it.addChild(sentence, idx++);
    }

}

bool Node::checkChild(string word) {

}