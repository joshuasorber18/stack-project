#include <iostream>
using namespace std;

class Stack {
private:
    int stack[10] {0,0,0,0,0,0,0,0,0,0};
    int stackSize = sizeof(stack) / sizeof(stack[0]);
    int length = 0;
public:

    void reset() {
        for (int i = 0; i < stackSize; ++i) {
            stack[i] = 0;
        }
        length = 0;
    }
    bool push(int x) {
        if (length == stackSize)
            return false;
        stack[length] = x;
        ++length;
        return true;
    }

    void pop() {
        if(length > 0) {

            cout << stack[length-1] << endl;
            stack[length-1] = 0;
            --length;
        }
    }
    void print() {
        cout << "( ";
        for (const int &s : stack) {
            if(s != 0) {
                cout << s << " ";
            }
        }
        cout << ") " << endl;
    }

};

int main() {
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}