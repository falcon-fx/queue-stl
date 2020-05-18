#pragma once
#include <vector>
#include <iostream>
#include <fstream>


template <typename T>

class Queue {
    private:
        std::vector<T> vec;
    public:
        Queue<T>() {}
        void enqueue(T item) {
            vec.push_back(item);
        }
        void dequeue() {
            if (!isEmpty()) {
                vec.erase(vec.begin());
            } else {
                std::cout << "Empty queue!" << std::endl;
            }
        }
        bool isEmpty() {
            return (vec.size() == 0);
        }
        void setEmpty() {
            vec.clear();
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
        void readFile(std::string fileName) {
			std::ifstream file(fileName);
			T item;
			while(file >> item) {
                enqueue(item);
            } 
			file.close();
		}
};

