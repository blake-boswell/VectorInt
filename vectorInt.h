//
// Created by Blake Boswell on 2/2/2018.
//

#ifndef DATASTRUCTURES_VECTORINT_H
#define DATASTRUCTURES_VECTORINT_H
#include <cstdlib>
#include <cstddef>

class vectorInt {
private:
    int* buffer;
    int _vectorSize;
    int _vectorCapacity;
public:
    explicit vectorInt();
    explicit vectorInt(int size, int value);
    vectorInt(const vectorInt& x);
    ~vectorInt();
    void assign (int size, const int val);      // Assigns new values and size to the vector
    int& at(int position) const;                       // Returns a reference to position n
    int& back();                                 // Returns the last element in the vector
    // int begin() noexcept;                       // Returns the position of the first element (for iterators)
    int capacity() const;                       // Returns the capacity of the vector
    void clear();                               // Destroys all elements of the vector, leaving it with size 0
    bool empty() const;                         // Returns if the size is 0 (empty)
    // int end();                                  // Returns the "would be next index"
    void erase(int position);                  // Removes the element at the position and re-positions the elements
    void erase(int first, int last);           // Removes the elements in the range
    int& front();                               // Returns a reference to the front of the vector
    void insert(int position, int val);
    void insert(int position, int num, int val);     // Insert multiple val?
    int max_size() const;                       // Returns the max number that can be stored (capacity)
    vectorInt& operator=(const vectorInt& x);
    int& operator[](int position) const;             // Returns the reference to the int at the position
    void pop_back();                            // Remove last item in vector
    void push_back(const int& val);            // Insert to the end of the vector
    void reserve(int capacity);                 // Make the vector atleast n large
    void resize(int capacity);
    int size() const;                           // Returns the number of elements in the vector
    void swap(vectorInt& x);

    void push_backAdd(const int &val);

    void push_backMult(const int &val);

    void print();
};


#endif //DATASTRUCTURES_VECTORINT_H
