#ifndef HEADER_H
#define HEADER_H

#include <memory>

struct Node {
    int data;
    std::shared_ptr<Node> next;
    Node(int value) : data(value), next(nullptr) {}
};

inline bool isLessThanFive(int value) {
    return value < 5;
}

#endif