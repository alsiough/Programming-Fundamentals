#include "header.h"
#include <iostream>

void addAfterFirst(std::shared_ptr<Node>& head, int value) {
    if (!head) {
        head = std::make_shared<Node>(value);
    } else {
        auto newNode = std::make_shared<Node>(value);
        newNode->next = head->next;
        head->next = newNode;
    }
}

void addToStart(std::shared_ptr<Node>& head, int value) {
    auto newNode = std::make_shared<Node>(value);
    newNode->next = head;
    head = newNode;
}

void formSecondList(const std::shared_ptr<Node>& firstList, std::shared_ptr<Node>& secondList) {
    auto current = firstList;
    while (current) {
        if (current->data > 0 && isLessThanFive(current->data)) {
            addToStart(secondList, current->data);
        }
        current = current->next;
    }
}

void printList(const std::shared_ptr<Node>& head) {
    auto current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    std::shared_ptr<Node> firstList = nullptr;

    for (int i = 1; i <= 10; ++i) {
        addAfterFirst(firstList, i);
    }

    std::cout << "Перший список: ";
    printList(firstList);

    std::shared_ptr<Node> secondList = nullptr;
    formSecondList(firstList, secondList);

    std::cout << "Другий список: ";
    printList(secondList);

    return 0;
}