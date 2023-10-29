#include "Tree_Node.h"

template class TreeNode<int>;

template <typename T>
TreeNode<T>::TreeNode(T value) : data(value) {
    
}