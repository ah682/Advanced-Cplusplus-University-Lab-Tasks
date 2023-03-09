// Week 4 - Pointers and Memeory Part Two.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Excercise 4 Memory Leak Detection 
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <iostream>
using namespace std;

// Excercise 3
struct cat
{
    string cat;
    int age;
};
int main()
{
    // Excercise 1
    int myArray[50];

    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof array with 50 elements " << sizeof(myArray) << endl;

    // Excerise 2
    int *dereferenceExample = new int;
    *dereferenceExample = 4;
    cout << "Dereferenced Pointers:  " << *dereferenceExample << endl;
    delete dereferenceExample;

    // Excercise 3
    cat *BlackCat = new cat;
    BlackCat->cat = "Black";
    BlackCat->age = 10;

    cout << "Cat Type: " << BlackCat->cat << endl << "Cat Age: " << BlackCat->age << endl;
    

    //Excercise 4 purposely cause a memory leak
    while (true) new int;
    
    delete BlackCat;

    // Excercise 4
    _CrtDumpMemoryLeaks();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
