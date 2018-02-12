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

//    cout << "Accessing out of bounds section" << endl;
//    cout << vector[vector.size() + 1];

    // Reserve test
    cout << "Testing reserve" << endl;
    cout << "Before" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "Reserving room..." << endl;
    vector.reserve(200);
    cout << "After: " << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    // Insert test
    cout << "Testing Insert" << endl;
    cout << "Before" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "Inserting..." << endl;
    vector.insert(50, 200);
    cout << "After: " << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    // Resize test
    cout << "Testing Resize (smaller)" << endl;
    cout << "Before" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "Resizing (smaller)..." << endl;
    vector.resize(20);
    cout << "After: " << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    cout << "Testing Resize (larger)" << endl;
    cout << "Before" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "Resizing (larger)..." << endl;
    vector.resize(55);
    cout << "After: " << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    // Pop back test
    cout << "Testing pop_back" << endl;
    cout << "Before" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "Popping back..." << endl;
    vector.pop_back();
    cout << "After: " << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    // Push back test
    cout << "Testing push_back" << endl;
    cout << "Before" << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }
    cout << "Pushing back..." << endl;
    vector.push_back(25);
    cout << "After: " << endl;
    cout << "Capacity: " << vector.capacity() << endl;
    cout << "Size: " << vector.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        cout << "[" << i << "] " << vector[i] << endl;
    }

    // Swap test
    vectorInt vector2 = vectorInt(5, 200);
    cout << "Testing swap" << endl;
    cout << "Before" << endl;
    cout << "Capacity: " << vector.capacity() << "\t\tCapacity (2): " << vector2.capacity() << endl;
    cout << "Size: " << vector.size()  << "\t\tSize (2): " << vector2.size() << endl;
    for(int i = 0; i < vector.size(); i++) {
        if(i >= vector2.size())
            cout << "[" << i << "] " << vector[i] << endl;
        else
            cout << "[" << i << "] " << vector[i] << "\t\t" << vector2[i] << endl;
    }
    cout << "Swapping..." << endl;
    vector.swap(vector2);
    cout << "After: " << endl;
    cout << "Capacity: " << vector.capacity() << "\t\tCapacity (2): " << vector2.capacity() << endl;
    cout << "Size: " << vector.size()  << "\t\tSize (2): " << vector2.size() << endl;
    int max = std::max(vector.size(), vector2.size());
    for(int i = 0; i < max; i++) {
        if(i >= vector.size())
            cout << "[" << i << "]\t\t" << vector2[i] << endl;
        else
            cout << "[" << i << "] " << vector[i] << "\t\t" << vector2[i] << endl;
    }

    return 0;
}