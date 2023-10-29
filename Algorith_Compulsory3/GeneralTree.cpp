#include "GeneralTree.h"
#include "TreeNode.h"

template <typename T>
GeneralTree<T>::GeneralTree(T rootData) {
    root = new TreeNode<T>(rootData);
}

template <typename T>
TreeNode<T>* GeneralTree<T>::getRoot() {
    return root;
}

template <typename T>
TreeNode<T>* GeneralTree<T>::getParent(TreeNode<T>* node) {
     for (auto& child : root->children) {
            if (child == node) {
                return root;
            }
            TreeNode<T>* parent = getParentRecursive(child, node);
            if (parent != nullptr) {
                return parent;
            }
        }
        return nullptr;
}

template <typename T>
std::vector<TreeNode<T>*> GeneralTree<T>::getChildren(TreeNode<T>* node) {
    return node->children;
}

template <typename T>
int GeneralTree<T>::size() {
    return sizeRecursive(root);
}

template <typename T>
int GeneralTree<T>::depth(TreeNode<T>* node) {
    return depthRecursive(root, node, 0);
}

template <typename T>
bool GeneralTree<T>::isEmpty() {
    return (root == nullptr);
}

template <typename T>
bool GeneralTree<T>::isRoot(TreeNode<T>* node) {
    return (node == root);
}

template <typename T>
bool GeneralTree<T>::isLeaf(TreeNode<T>* node) {
    return (node->children.empty());
}

template <typename T>
void GeneralTree<T>::insertNode(TreeNode<T>* parent, T value) {
    parent->children.push_back(new TreeNode<T>(value));
}

template <typename T>
void GeneralTree<T>::deleteNode(TreeNode<T>* node) {
    TreeNode<T>* parent = getParent(node);
        if (parent) {
            for (size_t i = 0; i < parent->children.size(); ++i) {
                if (parent->children[i] == node) {
                    deleteSubtree(node);
                    parent->children.erase(parent->children.begin() + i);
                    break;
                }
            }
        }
}

template <typename T>
void GeneralTree<T>::depthFirstTraversal(TreeNode<T>* node) {
    std::cout << node->data << " ";
        for (auto child : node->children) {
            depthFirstTraversal(child);
        }
}

template <typename T>
void GeneralTree<T>::breadthFirstTraversal() {
    if (root == nullptr) {
            return;
        }

        std::queue<TreeNode<T>*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode<T>* node = q.front();
            q.pop();
            std::cout << node->data << " ";

            for (auto child : node->children) {
                q.push(child);
            }
        }
}