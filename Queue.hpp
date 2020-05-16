#pragma once
#include <vector>
#include <iostream>


template <typename T>
class Queue {
    protected:
        unsigned int capacity;
        std::vector<T> vec ;
    public:
        Queue<T>() : capacity(0) {}
        Queue<T>(unsigned int cap) : capacity(cap) {}
        int getCap() {
            return capacity;
        }
        void enqueue(T item) {
            if (!isFull()) {
                vec.push_back(item);
            }
        }
        void dequeue() {
            if (!isEmpty()) {
                vec.erase(vec.begin());
            }
        }
        bool isFull() {
            return (vec.size() == capacity);
        }
        bool isEmpty() {
            return (vec.size() == 0);
        }
        void print() {
            for (int i = 0; i < vec.size(); i++) {
                std::cout << vec[i] << " ";
            }
            std::cout << std::endl;
        }
        T front() {
            return vec[0];
        }
        T rear() {
            return vec[vec.size()-1];
        }
};


