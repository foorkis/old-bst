#include "Tree.hpp"

using std::cout;

Tree::Tree(char ch)
{
    data=ch;
    left=nullptr;
    right=nullptr;
}

Tree::~Tree()
{
    while ((left!=nullptr) && (right!=nullptr))
	delete left, right;
}

char Tree::getData()
{
    return data;
}

void Tree::setData(char ch)
{
    data=ch;
}

bool Tree::isLeaf()
{
    if ((nullptr==left)&&(nullptr==right))
	return true;
    else
	return false;
}

void Tree::put(char ch)
{
    if (ch < data){
	if (this->left == nullptr){
	    this->left=new Tree(ch);
	    return;
	}
	left->put(ch);				
    }
    else{
	if (this->right == nullptr) {
	    this->right=new Tree(ch);
	    return;
	}
	right->put(ch);				 
    }
}

bool Tree::haveElem(char ch)
{
    if (data==ch)
	return true;
    if (ch < data){
	if (this->left==nullptr)
	    return false;
	return left->haveElem(ch);
    }
    if (ch > data){
	if (this->right==nullptr)
	    return false;
	return right->haveElem(ch);
    }	
}


int Tree::getLevel(char ch)
{
    if (this->haveElem(ch))
	return -1;
    if (this->getData()==ch)
	return 1;
    if ((this->getData()<ch) and
	(this->right!=nullptr))
	return ((this->right->getLevel(ch))+1);
    if ((this->getData()>ch) and
	(this->left!=nullptr))
	return ((this->left->getLevel(ch))+1);
	    
}

void Tree::printTree()
{
    cout << "(" << this->getData() << ")\n";
    if (this->left != nullptr)
	this->left->printTree();
    if (this->right != nullptr) 
	this->right->printTree();
}
