#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class stack {
private:
    Node *top;

public:
    stack();
    ~stack();
    void push(int d);
    int pop();
    void affichage(); // Changed return type to void for displaying values
};

stack::stack() {
    top = NULL;
}

stack::~stack() {
    if (top == NULL) {
        cout << "nothing to clean " << endl;
    } else {
        cout << "delete should be happening" << endl;
        // Free each node to avoid memory leak
        while (top != NULL) {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }
}

void stack::push(int d) {
    Node *tmp = new Node;
    tmp->data = d;
    tmp->next = top;
    top = tmp;
}

int stack::pop() {
    if (top == NULL) {
        cout << "Stack is empty, cannot pop!" << endl;
        return -1;
    }
    int poppedValue = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return poppedValue;
}

void stack::affichage() { // Changed to void
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
    } else {
        Node *current = top;
        cout << "Stack values: ";
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main() {
    stack *s = new stack();
    s->push(100);
    s->push(200);
    s->push(1000);
    s->affichage(); // Should display values in the stack
    delete s;
    return 0;
}