// Week 3 - Pointers and Memory (Part 1).cpp : This file contains the 'main' function. Program execution begins and ends there.
// Pointers allow you to create programs that can use as much memory as they need. Good information is here especially from User named Chinna - https://stackoverflow.com/questions/20563706/do-every-variable-declared-as-pointer-have-to-allocate-memory
// Pointers can have static memory allocation or dynamic  - 
// Dyanmic memory allocation is when the memory is allocated on run time - https://www3.nd.edu/~zxu2/acms60212-40212/Lec-dynamic-memory.pdf
// Static memory allocation is when the memory is allocated at the compile time - https://byjus.com/gate/difference-between-static-and-dynamic-memory-allocation-in-c/#:~:text=1-,When%20the%20allocation%20of%20memory%20performs%20at%20the%20compile%20time,is%20allocated%20at%20the%20runtime.
// Dyanmic memory tends to be more efficiennt than static memory allocation - https://byjus.com/gate/difference-between-static-and-dynamic-memory-allocation-in-c/#:~:text=Dynamic%20memory%20allocation%20is%20more,to%20the%20Static%20memory%20allocation.&text=This%20memory%20allocation%20is%20simple.
// It is rare where you need to actually allocate memory manually in c++  - https://stackoverflow.com/questions/15467709/c-is-it-ever-absolutely-necessary-to-allocate-memory-manually#:~:text=You're%20right%20that%20in,will%20take%20care%20of%20that.

#include <iostream>

using namespace std;

void changeInt(int* ptr);

// Excercise 2
void cancelPointer(int* firstpointer, int* secondpointer);

// Excercise 3
struct BankAccount
{
    string accountHolder;
    float currentBalance;
};

// Excercise 4
void flattenArray(int* arrayPtr, int size);
void displayArray(int* arrayPtr, int size);

//  Excercise 5
//  A sprase array is an array which many elements have a value of zero.
class ModuleMarks
{
    private:
        string name[4];
        int mark[4];

    public:
        void setModule();
        void displayModule();
};

void ModuleMarks::setModule()
{
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter Name: ";
        cin >> name[i];
        cout << "Enter Mark: ";
        cin >> mark[i];
    }
}

void ModuleMarks::displayModule()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Name: ";
        cout << name[i];
        cout << "Mark: ";
        cout << mark[i];
    }
}

class StudentMarks
{
private:
    ModuleMarks* modules;
public: 
    void enterModuleData();
    void displayModuleData();
};

void StudentMarks::enterModuleData()
{
    
    
        modules = new ModuleMarks;
        modules->setModule();
    
}

void StudentMarks::displayModuleData()
{
    
    
        modules->displayModule();
    
}



void main()
{
    // Excercise 1
    int* ptr = new int; // 'int* ptr' Declares a pointer variable named 'ptr' that can store the memory address of an integer value. 'New int' dynamically allocates memory on the heap for a single integer value. '=' assigns the memory address of the newly allocated integer to 'ptr'.
    *ptr = 4; //This line assigns the value 4 to the memory location 'ptr' points to, which was dynamically allocated in the previous line. The *ptr is a derefernece operator used to access the value stored at the memory location pointed to by 'ptr'.

    cout << "Value of integer before changeInt: " << *ptr << endl;

    changeInt(ptr); // call the function to change the value of the integer

    cout << "Value of integer after changeInt: " << *ptr << endl;

    delete ptr; // deallocate the memory for the integer

    // Excericse 2
    int* ptr2 = new int;
    int* ptr3 = new int;

    *ptr2 = 4;
    *ptr3 = 12;

    // Excercise 2
    cancelPointer(ptr2, ptr3);

    // Excercise 3
    BankAccount* Kyle = new BankAccount;

    Kyle->accountHolder = "Kyle Yep";
    Kyle->currentBalance = 10000.87;

    cout << "Account Holder Name: " << Kyle->accountHolder << endl;
    cout << "Current Balance of Account Holder " << Kyle->currentBalance << endl;
    delete(Kyle);

    // Exercise 4 do not need to dereference with array for some reason
    int* arrayTask4 = new int[4];
    cin >> arrayTask4[0];
    cin >> arrayTask4[1];
    cin >> arrayTask4[2];
    cin >> arrayTask4[3];

    flattenArray(arrayTask4, 4);
    displayArray(arrayTask4, 4);

    delete[] arrayTask4;

    // Excercise 5
    ModuleMarks* coolModules = new ModuleMarks;
    coolModules->setModule();
    coolModules->displayModule();


    // Excercise 6
    StudentMarks* coolStudentMarks = new StudentMarks;
    coolStudentMarks->enterModuleData();
    coolStudentMarks->displayModuleData();

    delete[] coolStudentMarks;

}

void changeInt(int* ptr) {
    *ptr = 10; // dereference the pointer to assign a value of 10 to the integer
}

void cancelPointer(int* firstpointer, int* secondpointer)
{
    cout << "First Pointer Variable is equal to: " << *firstpointer << endl;
    cout << "Second Pointer Variable is equal to " <<  *secondpointer << endl;

    if (*firstpointer > *secondpointer)
    {
        cout << "First Pointer" << *firstpointer << " dereferenced is a larger number than second pointer " << *secondpointer << " when dereferenced" << endl;
    }
    else
    {
        cout << "Second Pointer " << *secondpointer << " dereferenced is a largest number than the first pointer " << *firstpointer << " when dereferenced" << endl;
    }

    delete firstpointer;
    delete secondpointer;
}

// Exercise 4
void flattenArray(int* arrayPtr, int size)
{

    for (int i = 0; i < size; i++)
    {
        arrayPtr[i] = 0;
    }
}
void displayArray(int* arrayPtr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Display Array Number: " << i << " " << arrayPtr[i] << endl;
    }
}