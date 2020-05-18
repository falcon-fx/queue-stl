#pragma once
#include <vector>
#include <iostream>
#include <fstream>

template <typename T>
class Stack {
    private:
        unsigned int n;
        std::vector<T> A;
    public:
        Stack<T>(unsigned int m) : n(m) {}
        bool isEmpty() {
            return (A.size() == 0);
        }
        void setEmpty() {
            A.clear();
        }
        bool isFull() {
            return (A.size() == n);
        }
        void push(T x) {
            if (!isFull()) {
                A.push_back(x);
            } else {
                std::cout << "Full stack!" << std::endl;
            }
        }
        T pop() {
            if (!isEmpty()) {
                T x = A[A.size()-1];
                A.erase(A.end()-1);
                return x;
            } else {
                std::cout << "Empty stack!" << std::endl;
            }
        }
        T top() {
            if (!isEmpty()) {
                return A[A.size()-1];
            } else {
                std::cout << "Empty stack!" << std::endl;
            }
        }
        void print() {
            if (!isEmpty()) {
                for(int i = A.size()-1; i >= 0 ; i--) {
                    std::cout << "|" << A[i] << "\t|\n";
                }
            } else {
                std::cout << "Empty stack!" << std::endl;
            }
        }
        void readFile(std::string fileName) {
			std::ifstream file(fileName);
			T item;
			while(file >> item) {
                push(item);
            } 
			file.close();
		}
};