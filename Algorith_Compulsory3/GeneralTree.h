#pragma once

#ifndef GENERALTREE_H
#define GENERALTREE_H



template <typename T>
class GeneralTree {
private:
    TreeNode<T>* root;

public:
    GeneralTree(T rootData);

    TreeNode<T>* getRoot();
    TreeNode<T>* getParent(TreeNode<T>* node);
    std::vector<TreeNode<T>*> getChildren(TreeNode<T>* node);
    int size();
    int depth(TreeNode<T>* node);
    bool isEmpty();
    bool isRoot(TreeNode<T>* node);
    bool isLeaf(TreeNode<T>* node);
    void insertNode(TreeNode<T>* parent, T value);
    void deleteNode(TreeNode<T>* node);
    void depthFirstTraversal(TreeNode<T>* node);
    void breadthFirstTraversal();

   
};

#endif