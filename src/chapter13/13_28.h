#ifndef _13_28_H
#define _13_28_H

#include <string>

class TreeNode {
public:
    TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) { }
    TreeNode(const TreeNode &rhs) : value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) { ++*count; }

    TreeNode& operator=(const TreeNode &rhs);
    ~TreeNode();

private:
    std::string value;
    int         *count;
    TreeNode    *left;
    TreeNode    *right;
};

TreeNode& TreeNode::operator=(const TreeNode &rhs)
{
    ++*rhs.count;
    if (--*count == 0) {
        delete left;
        delete right;
        delete count;
    }
    value = rhs.value;
    left = rhs.left;
    right = rhs.right;
    count = rhs.count;
    return *this;
}

TreeNode::~TreeNode()
{
    if (--*count == 0) {
        delete left;
        delete right;
        delete count;
    }
}

class BinStrTree {
    BinStrTree() : root(new TreeNode()) {}
    BinStrTree(const BinStrTree &rhs) : root(new TreeNode(*rhs.root)) {}
    BinStrTree& operator=(const BinStrTree&);
    ~BinStrTree() { delete root; }

private:
    TreeNode *root;
};

BinStrTree& BinStrTree::operator=(const BinStrTree &rhs)
{
    auto *temp = new TreeNode(*rhs.root);
    delete root;
    root = temp;
    return *this;
}

#endif //_13_28_H
