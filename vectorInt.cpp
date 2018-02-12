//
// Created by Blake on 2/2/2018.
//

#include <iostream>
#include <algorithm>
#include "vectorInt.h"

vectorInt::vectorInt() {
    // Make an empty container
    buffer = new int[0];
    _vectorSize = 0;
    _vectorCapacity = 1;
}

vectorInt::vectorInt(int size, int value) {
    // Make a container of specified size and values
    buffer = new int[size];
    for(int i = 0; i < size; i++) {
        buffer[i] = value;
    }
    _vectorSize = size;
    _vectorCapacity = size;
}

vectorInt::vectorInt(const vectorInt &x) {
    _vectorCapacity = x.capacity();
    _vectorSize = x.size();
    buffer = new int[_vectorCapacity];
    for(int i = 0; i < x.size(); i++) {
        buffer[i] = x[i];
    }
}

vectorInt::~vectorInt() {
    delete[] buffer;
}

void vectorInt::assign(int size, const int val) {
    if(size > _vectorCapacity) {
        // allocate more memory
        delete[] buffer;
        _vectorSize = size;
        _vectorCapacity = size;
        buffer = new int[size];
    } else {
        _vectorSize = size;
    }
    for(int i = 0; i < _vectorSize; i++) {
        buffer[i] = val;
    }
}

int& vectorInt::at(int position) const {
    // Return the reference to the value at the given position
    if(position < _vectorSize)
        return buffer[position];
    else
        throw std::out_of_range("Out of range");
}

int& vectorInt::back() {
    // Return the reference to the last value in the vector
    return buffer[_vectorSize - 1];
}

//int vectorInt::begin() noexcept {
//    return 0;
//}

int vectorInt::capacity() const {
    return _vectorCapacity;
}

void vectorInt::clear() {
    // destroy all elements and leave with size 0 ( left the first one ;) )
//    for(int i = 1; i < _vectorSize; i++) {
//        delete (buffer + i);
//    }
    _vectorSize = 0;
}

bool vectorInt::empty() const {
    if(_vectorSize == 0)
        return true;
    return false;
}

//int vectorInt::end() {
//    return 0;
//}

void vectorInt::erase(int position) {
    // Remove item at position
    // Make underlying array compact
    // IDEA: swap the value to the end of the array
    int temp;
    for(int i = position; i < _vectorSize - 1; i++) {
        temp = buffer[i];
        buffer[i] = buffer[i+1];
        buffer[i+1] = temp;
    }
//    delete (buffer + (_vectorSize - 1));
    _vectorSize -= 1;
}

void vectorInt::erase(int first, int last) {
    // Remove a range of items between first and last (first included)
    // IDEA: shift all values from last and on, down last-first elements
    // Problem, very very expensive...
    // Check if we have that much space
    if((last <= _vectorSize) && (last > first)) {
        int newIndex;
        int numErased = last - first;
        for(int i = first; i < (_vectorSize - numErased); i++) {
            newIndex = i + numErased;
            buffer[i] = buffer[newIndex];
        }
        // delete the extra space
//        for(int i = last; i < _vectorSize; i++) {
//            delete (buffer+i);
//        }
        _vectorSize -= numErased;
    }
}

int& vectorInt::front() {
    return *buffer;
}

void vectorInt::insert(int position, int val) {
    // Insert value to position
    // Caveats: check to make sure that extending the size by one does not go over the capacity
    // So let's use the reserve function to ensure this.
    if(position <= _vectorSize && position >= 0) {
        _vectorSize += 1;
        reserve(_vectorSize);
        // _vectorSize will be
        // Shift array values down to the right
        int temp;
        for(int i = position; i < _vectorSize; i++) {
            val = temp;
        }
    } else
        std::cout << "Failure inserting" << std::endl;
}

void vectorInt::insert(int position, int num, int val) {
    if(position <= _vectorSize && position >= 0) {
        _vectorSize += num;
        reserve(_vectorSize);
        // _vectorSize will be
        // Shift array values down to the right num spaces
        int temp;
        for(int i = position; i < _vectorSize; i++) {
            temp = buffer[i];
            buffer[i] = val;
            val = temp;
        }
    } else
        std::cout << "Failure inserting" << std::endl;
}

int vectorInt::max_size() const {
    return 10000000;
}

vectorInt &vectorInt::operator=(const vectorInt &x) {
    // Check if its the same thing (physically the same thing)
    // Use the reserve function to free up the space
    if(this != &x) {
        _vectorCapacity = x.capacity();
        _vectorSize = x.size();
        for(int i = 0; i < _vectorSize; i++) {
            buffer[i] = x[i];
        }
    }
    return *this;

//    if(&x == this)
//        return *this;
//    _vectorSize = 0;
//    reserve(x.size());
    // Need to free the space and copy things over
//    for(; _vectorSize < x.size(); _vectorSize++)
//        buffer[_vectorSize] = x[_vectorSize];
//
//    return *this;
}

int &vectorInt::operator[](int position) const {
    if(position < _vectorSize)
        return buffer[position];
    throw std::out_of_range("Vector Index Out of bounds error");
}

void vectorInt::pop_back() {
    // Remove last element in vector
    _vectorSize -= 1;
}

void vectorInt::push_back(const int &val) {
    _vectorSize += 1;
    reserve(_vectorSize);
    buffer[_vectorSize - 1] = val;
}

void vectorInt::reserve(int capacity) {
    // Requests that the vector has at least the size of the capacity param
    if(capacity > _vectorCapacity && capacity <= this->max_size()) {
        // Allocate the extra memory
        _vectorCapacity = capacity;
        int* tempBuffer = new int[capacity];
        // Copy values over to the new array
        for(int i = 0; i < _vectorSize; i++) {
            tempBuffer[i] = buffer[i];
        }
        delete[] buffer;
        buffer = tempBuffer;
    }
}

void vectorInt::resize(int capacity) {
    reserve(capacity);
    if(_vectorSize < capacity) {
        // Fill in "empty" values to extra space
        for(int i = _vectorSize; i < capacity; i++) {
            buffer[i] = 0;
        }
    }
    _vectorSize = capacity;

}

int vectorInt::size() const {
    return _vectorSize;
}

void vectorInt::swap(vectorInt &x) {
    // Reserve room
    x.reserve(_vectorSize);
    this->reserve(x.size());

    // swap sizes
    int temp = x.size();
    x.resize(_vectorSize);
    _vectorSize = temp;

    // Store the size of the bigger vector
    int largestSize = std::max(_vectorSize, x.size());

    // Swap buffer contents
    for(int i = 0; i < largestSize; i++) {
        temp = x[i];
        x[i] = buffer[i];
        buffer[i] = temp;
    }

}
