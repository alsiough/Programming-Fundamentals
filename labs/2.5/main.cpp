#include <iostream>

struct Node {
    int data;
    Node* next;
};

// prototypes
void addToEnd(Node** head, int value);
void removeFromEnd(Node** head);
Node* searchElement(Node* head, int value);
void reverseList(Node** head);
void sortList(Node** head);
void toTwoWayList(Node** head);
void clearList(Node** head);

inline void addToFront(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Inline function to remove an element from the front of the list
inline void removeFromFront(Node** head) {
    if (*head != nullptr) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

// Inline function to print all elements of the list
inline void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "null" << std::endl;
}

int main() {
    Node* head = nullptr;

    // Adding elements to the list
    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);

    // Printing the list
    std::cout << "List after adding elements: ";
    printList(head);

    // Removing an element from the front
    removeFromFront(&head);
    std::cout << "List after removing an element: ";
    printList(head);

    // Clearing the list
    while (head != nullptr) {
        removeFromFront(&head);
    }

    return 0;
}