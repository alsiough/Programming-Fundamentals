#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Queue {
    vector<string> vec;  // Use vector to simulate the queue

    // Enqueue: Add an element to the back of the queue
    void enqueue(string value) {
        vec.push_back(value);
    }

    // Dequeue: Remove and return the element from the front of the queue
    string dequeue() {
        if (!isEmpty()) {
            string frontValue = vec.front();  // Get the first element
            vec.erase(vec.begin());        // Remove the first element
            return frontValue;
        } else {
            cout << "Queue is empty" << endl;
            return "";  // Returning -1 to indicate queue is empty
        }
    }

    // Peek: Return the front element without removing it
    string peek() {
        if (!isEmpty()) {
            return vec.front();  // Return the first element
        } else {
            cout << "Queue is empty" << endl;
            return "";
        }
    }

    // IsEmpty: Check if the queue is empty
    bool isEmpty() {
        return vec.empty();
    }

    // Size: Return the size of the queue
    int size() {
        return vec.size();
    }
};

int main() {
    Queue q;

    // Enqueue elements
    q.enqueue("John");
    q.enqueue("Jane");
    q.enqueue("Doe");

    // Peek at the front element
    cout << "Front element: " << q.peek() << endl;  // Output: 10

    // Dequeue elements
    cout << "Dequeued: " << q.dequeue() << endl;    // Output: 10
    cout << "Dequeued: " << q.dequeue() << endl;    // Output: 20

    // Check the size of the queue
    cout << "Queue size: " << q.size() << endl;     // Output: 1

    // Peek at the front element
    cout << "Front element: " << q.peek() << endl;  // Output: 30

    // Dequeue the remaining element
    cout << "Dequeued: " << q.dequeue() << endl;    // Output: 30

    // Try to dequeue from an empty queue
    q.dequeue();  // Output: Queue is empty

    return 0;
}
