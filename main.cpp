// Created by Blake Boswell on 2/2/2018

#include <iostream>
#include <ctime>
#include "vectorInt.h"

using namespace std;

void runTests(int iterations) {
    vectorInt adder = vectorInt();
    vectorInt multiplier = vectorInt();

    clock_t start;
    double duration;
    cout << "Starting tests for " << iterations << " iterations. This may take a while." << endl;

    start = clock();

    // Test adding 10
    for(int i = 0; i < iterations; i++) {
        adder.push_backAdd(i);
    }


    duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;

    std::cout<<"[Adding 10] Duration: "<< duration << endl;
    cout << "Capacity: " << adder.capacity() << endl;
    cout << "Size: " << adder.size() << endl;
    double adderDuration = duration;


    start = clock();

    // Test multiplying by 2
    for(int i = 0; i < iterations; i++) {
        multiplier.push_backMult(i);
    }


    duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
    cout << "Multiply 2 duration: "<< duration << endl;
    cout << "Capacity: " << multiplier.capacity() << endl;
    cout << "Size: " << multiplier.size() << endl;

    cout << "Final Report:\nAdding 10\tSize: " << adder.size() << "\tCapacity: " << adder.capacity() << "\tRuntime: " <<
         adderDuration << endl;
    cout << "Multiply 2\tSize: " << multiplier.size() << "\tCapacity: " << multiplier.capacity() << "\tRuntime: " <<
         duration << endl;
    cout << "First and last 100 elements:\n\nAdding 10 (First):\n";
    for(int i = 0; i < 100; i++) {
        cout << "[" << i << "] " << adder[i] << ", ";
    }
    cout << "\n\nAdding 10 (Last):\n";
    for(int i = adder.size() - 100; i < adder.size(); i++) {
        cout << "[" << i << "] " << adder[i] << ", ";
    }
    cout << "\n\nMultiply 2 (First):\n";
    for(int i = 0; i < 100; i++) {
        cout << "[" << i << "] " << multiplier[i] << ", ";
    }
    cout << "\n\nMultiply 2 (Last):\n";
    for(int i = multiplier.size() - 100; i < multiplier.size(); i++) {
        cout << "[" << i << "] " << multiplier[i] << ", ";
    }
}

int main() {

    /*
     * ===============================================================================
     * === Only run one of the tests bellow at a time to test the member functions ===
     * ===============================================================================
     */


//    // Constructor tests
//    cout << "Running the constructor tests" << endl;
//    cout << "Default constructor" << endl;
//    vectorInt vector = vectorInt();
//    vector.print();
//
//    cout << "Constructor with params (size 5, values of 10)" << endl;
//    vectorInt vector2 = vectorInt(5, 10);
//    vector2.print();
//
//    cout << "Copy constructor" << endl;
//    vectorInt vector3 = vectorInt(vector2);
//    vector3.print();
//    cout << "Proof they are different references:" << endl;
//    vector2.pop_back();
//    vector3.push_back(-1);
//    cout << "Added a -1 to the end of vector3 (the copy)\nRemoved the last element of vector2 (original)" << endl;
//    cout << "Vector2:" << endl;
//    vector2.print();
//    cout << "Vector3:" << endl;
//    vector3.print();

//    // Assign test
//    cout << "Running the assign test" << endl;
//    vectorInt vector = vectorInt(2, -1);
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Assigning size 10, values of 5" << endl;
//    vector.assign(10, 5);
//    cout << "After assign function" << endl;
//    vector.print();

//    // At test
//    cout << "Running the at test" << endl;
//    vectorInt vector = vectorInt(2, -1);
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Checking the value at position 1" << endl;
//    cout << vector.at(1) << endl;

//    // Back test
//    cout << "Running the back test" << endl;
//    vectorInt vector = vectorInt(2, -1);
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Checking the back of the vector" << endl;
//    cout << vector.back() << endl;
//    cout << "Adding value to the end of the vector" << endl;
//    vector.push_back(100);
//    vector.print();
//    cout << "Checking the back of the vector" << endl;
//    cout << vector.back() << endl;

//    // Clear test
//    cout << "Running the clear test" << endl;
//    vectorInt vector = vectorInt(15, -1);
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Clearing the vector" << endl;
//    vector.clear();
//    vector.print();

//    // Empty test
//    cout << "Running the empty test" << endl;
//    vectorInt vector = vectorInt(2, -1);
//    cout << "Init" << endl;
//    vector.print();
//    if(vector.empty())
//        cout << "The vector is empty" << endl;
//    else
//        cout << "The vector is not empty" << endl;
//    cout << "Clearing the vector..." << endl;
//    vector.clear();
//    vector.print();
//    if(vector.empty())
//        cout << "The vector is empty" << endl;
//    else
//        cout << "The vector is not empty" << endl;

//    // Erase test
//    cout << "Running the erase test" << endl;
//    vectorInt vector = vectorInt();
//    for(int i = 0; i < 10; i++) {
//        vector.push_back(i);
//    }
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Erasing the element at index 5" << endl;
//    vector.erase(5);
//    vector.print();
//
//    cout << "Erasing elements from index 3-6" << endl;
//    vector.erase(3, 7);
//    vector.print();

//    // Front test
//    cout << "Running the front test" << endl;
//    vectorInt vector = vectorInt();
//    for(int i = 0; i < 10; i++) {
//        vector.push_back(i);
//    }
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "The front int is: " << vector.front() << endl;
//    cout << "Inserting a 10 into the 0th index" << endl;
//    vector.insert(0, 10);
//    vector.print();
//    cout << "The front int is: " << vector.front() << endl;

//    // Insert test
//    vectorInt vector = vectorInt();
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Inserting values into the vector..." << endl;
//    vector.insert(0, 10, -1);
//    cout << "After insert: " << endl;
//    vector.print();
//
//    cout << "Inserting values into the vector..." << endl;
//    vector.insert(2, 5, 10);
//    cout << "After the second insert: " << endl;
//    vector.print();
//
//    cout << "Single insert..." << endl;
//    vector.insert(3, 100);
//    cout << "After the single insert: " << endl;
//    vector.print();


//    // = operator test
//    cout << "Running the =operator test" << endl;
//    vectorInt vector = vectorInt();
//    for(int i = 0; i < 10; i++) {
//        vector.push_back(i);
//    }
//    cout << "Init vector" << endl;
//    vector.print();
//
//    vectorInt vector2 = vectorInt();
//    cout << "Init vector2" << endl;
//    vector2.print();
//
//    cout << "Assigning vector to vector2" << endl;
//    vector2 = vector;
//    vector2.print();
//
//    cout << "Altering vector2" << endl;
//    vector2.pop_back();
//    cout << "Vector: " << endl;
//    vector.print();
//    cout << "Altered vector2: " << endl;
//    vector2.print();
//
//    cout << "Altering vector" << endl;
//    vector.push_back(5);
//    cout << "Altered vector: " << endl;
//    vector.print();
//    cout << "vector2: " << endl;
//    vector2.print();


//    // Reserve test
//    cout << "Running the reserve test" << endl;
//    vectorInt vector = vectorInt(5, 5);
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Reserving room..." << endl;
//    vector.reserve(200);
//    cout << "After: " << endl;
//    vector.print();


//    // Resize test
//    cout << "Running the resize test" << endl;
//    vectorInt vector = vectorInt(40, 13);
//    cout << "Testing Resize (smaller)" << endl;
//    cout << "Init" << endl;
//    vector.print();
//
//    cout << "Resizing (smaller)..." << endl;
//    vector.resize(20);
//    cout << "After: " << endl;
//    vector.print();
//
//    cout << "Testing Resize (larger)" << endl;
//    cout << "Before" << endl;
//    vector.print();
//
//    cout << "Resizing (larger)..." << endl;
//    vector.resize(55);
//    cout << "After: " << endl;
//    vector.print();


//    // Swap test
//    vectorInt vector = vectorInt(50, -1);
//    vectorInt vector2 = vectorInt(5, 200);
//    cout << "Testing swap" << endl;
//    cout << "Before" << endl;
//    cout << "Capacity: " << vector.capacity() << "\t\tCapacity (2): " << vector2.capacity() << endl;
//    cout << "Size: " << vector.size()  << "\t\tSize (2): " << vector2.size() << endl;
//    for(int i = 0; i < vector.size(); i++) {
//        if(i >= vector2.size())
//            cout << "[" << i << "] " << vector[i] << endl;
//        else
//            cout << "[" << i << "] " << vector[i] << "\t\t" << vector2[i] << endl;
//    }
//    cout << "Swapping..." << endl;
//    vector.swap(vector2);
//    cout << "After: " << endl;
//    cout << "Capacity: " << vector.capacity() << "\t\tCapacity (2): " << vector2.capacity() << endl;
//    cout << "Size: " << vector.size()  << "\t\tSize (2): " << vector2.size() << endl;
//    int max = std::max(vector.size(), vector2.size());
//    for(int i = 0; i < max; i++) {
//        if(i >= vector.size())
//            cout << "[" << i << "]\t\t" << vector2[i] << endl;
//        else
//            cout << "[" << i << "] " << vector[i] << "\t\t" << vector2[i] << endl;
//    }



    // Run the two implementations
    // Input the number of push_back calls as the param
    runTests(2000000);

    return 0;
}