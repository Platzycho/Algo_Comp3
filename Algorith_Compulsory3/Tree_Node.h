#pragma once
#ifndef TREENODE_H
#define TREENODE_H

#include <vector>

template <typename T>
class TreeNode {
public:
    T data;
    std::vector<TreeNode*> children;

    TreeNode(T value);

};

#endif