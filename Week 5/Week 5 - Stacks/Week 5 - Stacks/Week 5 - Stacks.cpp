//& means to pass a reference to a variable / object to a function rather than call by copy
#include <iostream>

using namespace std;

const int SIZE = 100;

// Excercise 2 to convert whole stack to use dynamic memory
class CStack
{
private:
    
    int mTop;
    string* mData;
    int mCapacity;

public:
    CStack(); // Constructor 
    ~CStack(); // Destructor to free dynamically allocated memory
    // Excercise 1
    void Push(string newData);
    void Pop(string& oldData);
    bool IsEmpty();
    bool IsFull();
    void DisplayStack();
    // Excercise 3
    int GetLength(int num);
    // Excercise 4
    int CountData(string searchString);
};

CStack::CStack() {
    mTop = 0;
    mCapacity = SIZE;
    mData = new string[mCapacity];
}

CStack::~CStack()
{
    delete[] mData; // Free dynamically allocated memory
}

// Excercise 1
void CStack::Push(string newData)
{
    if (!IsFull())
    {
        mData[mTop] = newData;
        ++mTop;
        cout << newData << " added to stack " << endl;
    }
    else
    {
        cout << "Stack is full " << endl << newData << " has not been added to the stack" << endl;
    }
}

void CStack::Pop(string& oldData)
{
    if (!IsEmpty())
    {
        --mTop;
        oldData = mData[mTop];
        cout << oldData << " removed from stack " << endl;
        
    }
    else
    {
        cout << "stack is empty" << endl;
        oldData = "";
    }
}

bool CStack::IsFull()
{
    return mTop == mCapacity - 1; // Use mCapacity
}

bool CStack::IsEmpty()
{
    return mTop == -1; // Use mTop
}

void CStack::DisplayStack()
{
    for (int i = 0; i < mTop; ++i)
    {
        cout << mData[i] << endl;
    }
}

// Excercise 3

int CStack::GetLength(int num)
{
    cout << "Length of stack is currently" << num;
    return num;
}

// Excercise 4

int CStack::CountData(string searchString)
{
    int counter = 0;
    for (int i = 0;  i < mTop; i++)
    {
        if (mData[i] == searchString)
        {
            counter++;
            cout << searchString << " " << " found" << endl;
        }
    }
    cout << "search string found " << counter << " times" << endl;

    return counter;
}


int main()
{
    // Excercise 1
    CStack test;
    string hel = "iks";
    test.Push(hel);
    test.Push(hel);
    test.Push(hel);
    test.Push(hel);
    test.Push(hel);
    test.Push(hel);
    test.Pop(hel);

    test.CountData(hel);


}


