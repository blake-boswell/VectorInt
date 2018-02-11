#include <iostream>
#include "vectorInt.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    vectorInt vector = vectorInt(10, 5);
    std::cout << "Vector values" << std::endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "clearing vector..." << endl;
    vector.clear();
    std::cout << "Vector values" << std::endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    cout << "Assigning new values to the vector..." << endl;
    vector.assign(51, 13);

    std::cout << "Vector values" << std::endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "Erasing value..." << endl;
    vector.erase(42);
    std::cout << "Vector values" << std::endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    cout << "Setting values to their index" << endl;
    for(int i = 0; i < vector.size(); i++) {
        vector[i] = i;
    }
    cout << "Vector values" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    int first = 5;
    int last = 9;
    cout << "Erasing range " << first << " to " << last << endl;
    vector.erase(first, last);
    cout << "Vector values" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    cout << "Accessing out of bounds section" << endl;
    cout << vector[vector.size() + 1];


    return 0;
}