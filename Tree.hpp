#include <iostream>

class Tree
{
    char data;
    Tree *left, *right;
public:
    Tree(char ch);
    ~Tree();
    char getData();
    void setData(char ch);
    void put(char ch);
    int getLevel(char ch);
    void printTree();
    bool haveElem(char ch);
    bool isLeaf();
};

    
    

    


