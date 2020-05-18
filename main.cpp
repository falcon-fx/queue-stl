#include <string>

#include "Queue.hpp"
#include "Stack.hpp"

void runQueue() {
    std::string fn;
    char type;
    std::cout << "\n-- Welcome to the queue, don't cut in line, and enjoy your stay! --\n\nPlease input the type of queue (s: string, c: char, i: int, f: float): ";
    
    int toRem;
    std::cin >> type;
    std::cout << "Please input the filename, that contains data of the given type: ";
    std::cin >> fn;
    switch (type) {
    case 's': {
        Queue<std::string> q1;
        q1.readFile(fn);
        std::cout << "Here is your queue:\n";
        q1.print();
        std::cout << "How many items would you like to dequeue? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            q1.dequeue();
        }
        std::cout << "Here is your final queue:\n";
        q1.print();
        break;
    }
    case 'c': {
        Queue<char> q1;
        q1.readFile(fn);
        std::cout << "Here is your queue:\n";
        q1.print();
        std::cout << "How many items would you like to dequeue? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            q1.dequeue();
        }
        std::cout << "Here is your final queue:\n";
        q1.print();
        break;
    }
    case 'i': {
        Queue<int> q1;
        q1.readFile(fn);
        std::cout << "Here is your queue:\n";
        q1.print();
        std::cout << "How many items would you like to dequeue? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            q1.dequeue();
        }
        std::cout << "Here is your final queue:\n";
        q1.print();
        break;
    }
    case 'f': {
        Queue<float> q1;
        q1.readFile(fn);
        std::cout << "Here is your queue:\n";
        q1.print();
        std::cout << "How many items would you like to dequeue? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            q1.dequeue();
        }
        std::cout << "Here is your final queue:\n";
        q1.print();
        break;
    }
   
    default:
        break;
    }
}

void runStack() {
    std::string fn;
    char type;
    int cap;
    int toRem;
    std::cout << "\n-- Stacking time! --\n\nPlease input the type of stack (s: string, c: char, i: int, f: float): ";
    std::cin >> type;
    std::cout << "Please input the size of the stack: ";
    std::cin >> cap;
    std::cout << "Please input the filename, that contains data of the given type: ";
    std::cin >> fn;
    switch (type) {
    case 's': {
        Stack<std::string> s1(cap);
        s1.readFile(fn);
        std::cout << "Here is your stack:\n";
        s1.print();
        std::cout << "How many items would you like to remove from the stack? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            s1.pop();
        }
        std::cout << "Here is your final stack:\n";
        s1.print();
        std::cout << "Top of the stack: " << s1.top() << std::endl;
        break;
    }
    case 'c': {
        Stack<char> s1(cap);
        s1.readFile(fn);
        std::cout << "Here is your stack:\n";
        s1.print();
        std::cout << "How many items would you like to remove from the stack? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            s1.pop();
        }
        std::cout << "Here is your final stack:\n";
        s1.print();
        std::cout << "Top of the stack: " << s1.top() << std::endl;
        break;
    }
    case 'i': {
        Stack<int> s1(cap);
        s1.readFile(fn);
        std::cout << "Here is your stack:\n";
        s1.print();
        std::cout << "How many items would you like to remove from the stack? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            int x = s1.pop();
        }
        std::cout << "Here is your final stack:\n";
        s1.print();
        std::cout << "Top of the stack: " << s1.top() << std::endl;
        break;
    }
    case 'f': {
        Stack<float> s1(cap);
        s1.readFile(fn);
        std::cout << "Here is your stack:\n";
        s1.print();
        std::cout << "How many items would you like to remove from the stack? ";
        std::cin >> toRem;
        for (int i = 0; i < toRem; i++) {
            s1.pop();
        }
        std::cout << "Here is your final stack:\n";
        s1.print();
        std::cout << "Top of the stack: " << s1.top() << std::endl;
        break;
    }
   
    default:
        break;
    }
    
}

int main() {
    runQueue();
    runStack();
    return 0;
}