#pragma once

template <typename T>
class Graph {
private:
    std::vector<GraphNode<T>*> nodes;

public:
    Graph() {}

    GraphNode<T>* getNode(T value) {
       
    }

    std::vector<GraphNode<T>*> getAdjacentNodes(GraphNode<T>* node) {
        
    }

    int getVertexCount() {
        return nodes.size();
    }

    int getEdgeCount() {
       
    }

    bool isEmpty() {
        return nodes.empty();
    }

    void insertNode(T value) {
       
    }

    void deleteNode(GraphNode<T>* node) {
        
    }

    void insertEdge(GraphNode<T>* node1, GraphNode<T>* node2) {
       
    }

    void deleteEdge(GraphNode<T>* node1, GraphNode<T>* node2) {
        
    }

    void depthFirstTraversal(GraphNode<T>* startNode) {
       
    }

    void breadthFirstTraversal() {
        
    }
};