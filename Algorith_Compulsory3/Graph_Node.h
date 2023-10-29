#pragma once

template <typename T>
class GraphNode {
public:
    T data;
    std::vector<GraphNode*> adjacentNodes;

    GraphNode(T value) : data(value) {}
};