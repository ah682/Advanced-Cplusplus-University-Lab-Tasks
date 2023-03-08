// CO2402: Advanced C++
// Week 2: Introduction to classes, the counter class

#include <iostream>
using namespace std;

// Excercise 4
class Student
{
private:
	string name;
	int mark;
public:
	void enterStudentDetails();
	void outputStudentDetails();
};

void Student::enterStudentDetails()
{
	cin >> name;
	cin >> mark;
}

void Student::outputStudentDetails()
{
	cout << "Name: " << name << endl;
	cout << "Mark: " << mark << endl;
}

// Excercise 1-3
// Definition for a simple counter
class CCounter
{
private:
	int mAmount; // stores the current count value
	int top; // Excercise 2 write a new data member of type integer and call it top

public:
	void Set(int number); // set count to the value of number
	int  Get(); 		// get the current value of amount
	void Increment();  	// increment count by 1 (trivial)
	void Decrement();
	void assignValue(); // Excercise 2 Write a new member function that assigns the current value of amount to top then resets the value of amount to 0. Test the new member function.
	void printValues();
	void rainInSpain();
	CCounter()
	{
		mAmount = 0;
		cout << "Constructor mAmount = " << mAmount << endl;
	}
	CCounter(int valuepassed)
	{
		cout << "Constructor value passed amount = " << valuepassed << endl;
	}
};

// Set counter to the value of number
void CCounter::Set(int number)
{
	mAmount = number;
}

// Get the current value of the counter
int CCounter::Get()
{
	return mAmount;
}

// Increment the counter by 1 (trivial)
// Excerrcise 1 use the increment function to change the value of amount to 10. Output the value of amount.
void CCounter::Increment()
{
	mAmount++;
	mAmount++;
	mAmount++;
	mAmount++;
}

// Excercise write a new member function that will decrement amount by 1
void CCounter::Decrement()
{
	mAmount--;
}


// Excercise 2 Write a new member function that assigns the current value of amount to top then resets the value of amount to 0. Test the new member function.
void CCounter::assignValue()
{
	top = mAmount;
	mAmount = 0;
}

// Excercise 2 Write a new member function that assigns the current value of amount to top then resets the value of amount to 0. Test the new member function.
void CCounter::printValues()
{
	cout << "mAmount: " << mAmount << " Top: " << top << endl;
}

// Excericse 3: The purpose of a Counter is to keep track of the number of times an operation has been performed. Create a member function to output the sentence "The rain in Spain".Modify the Counter class so that every time this member function is invoked the amount is incremented by 1.

void CCounter::rainInSpain()
{
	cout << "The Rain in Spain " << endl;
	mAmount++;
}

int main()
{
	CCounter* myCount = new CCounter; // declare object of type CCounter

	// Excercise 1 Set the value of amount to 6 using the set member function. Output the value of amount.
	myCount->Set(6);
	myCount->Increment();
	// Excercise 2 Use your new decrement member function to change the value of amount from 10 to 7. Output the value of amount
	myCount->Decrement();
	myCount->Decrement();
	myCount->Decrement();
	int tmp = myCount->Get();
	cout << tmp << endl;
	// Excercise 2 Write a new member function that assigns the current value of amount to top then resets the value of amount to 0. Test the new member function.
	myCount->assignValue();
	tmp = myCount->Get();
	myCount->printValues();

	// Excericse 3: The purpose of a Counter is to keep track of the number of times an operation has been performed. Create a member function to output the sentence "The rain in Spain".Modify the Counter class so that every time this member function is invoked the amount is incremented by 1.
	myCount->rainInSpain();
	myCount->rainInSpain();
	myCount->rainInSpain();
	myCount->rainInSpain();
	myCount->rainInSpain();
	myCount->rainInSpain();
	myCount->rainInSpain();
	myCount->rainInSpain();

	myCount->printValues();

	delete (myCount);

	//Excercise 4
	Student* Markus = new Student;
	Markus->enterStudentDetails();
	Markus->outputStudentDetails();

	delete (Markus);

	// Excercise 5
	CCounter consTest(4);
	CCounter consTestTwo;

	system("pause");
}