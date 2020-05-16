#include <string>
#include "Queue.hpp"

int main() {
    int cap1;
    std::cout << "Please input the capacity of the first queue of words: ";
    std::cin >> cap1;
    std::string tmp;
    Queue<std::string> q1(cap1);
    while (q1.isFull() == false) {
        std::cout << "Please type in a word: ";
        std::cin >> tmp;
        q1.enqueue(tmp);
    }
    q1.print();
    std::cout << "How many items do you want to dequeue? ";
    std::cin >> cap1;
    if (cap1 <= q1.getCap()) {
        for (int i = 0; i < cap1; i++) {
            q1.dequeue();
        }
    } else {
        std::cout << "You wanted to dequeue too many items." << std::endl;
    }
    
    
    q1.print();
}