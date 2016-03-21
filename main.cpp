#include "Tree.cpp"
#include <iostream>

int main()
{
    Tree t = '1';
    t.put('2');
    t.put('3');
    t.printTree();
    cout << t.getLevel('g') << '\n';
}
