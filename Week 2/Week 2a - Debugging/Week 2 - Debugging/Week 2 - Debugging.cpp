// week 2a: debug 
// Step Over lets the application execute the next action. If the action involves a call to an operation, it does not step into its implementation (it steps over it instead)
// Step Into lets the application execute the next action. If the action involves a call to an operation, it steps into its implementation and breaks the execution of the first action of that inplemenetion
// Step Out lets the application execute until the currently executed operation implementation is returned
// https://www.ibm.com/support/pages/differences-between-step-over-step-and-step-out-commands\
// Quickwatch allows accruate analysis of errors when the IDE reaches a breakpoint or the 'Run to Cursor' statement. Comes across an unhandled exception. Or is paused with a click on the 'Break All' button from the 'Debug' toolbar (Dorman, 2010).
// https://kodify.net/csharp/visual-studio/debug-quickwatch/

#include <iostream>
using namespace std;

const int TOP = 6;

class CPattern
{
private:
	int mSequence[TOP];
public:
	void Initialise(int sequence[TOP]);
	void Display();
	int FindMax();
	void DisplayReversed();
	int FindLocation(int value);
};

// Initialise the array.
// Better to do this as a constructor - if you are confident about constructors then
// convert this method into one
void CPattern::Initialise(int sequence[TOP])
{
	for (int i = 0; i < TOP; ++i)
	{
		mSequence[i] = sequence[i];
	}
}

// Display the array
void CPattern::Display()
{
	for (int i = TOP; i < TOP; ++i)
	{
		cout << mSequence[i] << " ";
	}
	cout << endl;
}

// Display the array in reverse order
void CPattern::DisplayReversed()
{
	for (int i = TOP; i > 0; --i)
	{
		cout << mSequence[i] << " ";
	}
	cout << endl;
}

// Find maximum value in the array
int CPattern::FindMax()
{
	int max = -100;

	for (int i = 0; i < TOP; ++i)
	{
		if (i > max)
		{
			max = i;
		}
	}
	return max;
}

// Find the location of the first occurence of a value, i.e. it's index
// Return -1 if not found
int CPattern::FindLocation(int value)
{
	int found = -1;
	for (int i = 0; i < TOP; ++i)
	{
		if (found == mSequence[i])
		{
			return found;
		}
	}
	return -1;
}

int main()
{
	CPattern* myPattern = new CPattern;
	int testArray[TOP] = { 2, 4, 5, 7, 1, 3 };
	myPattern->Initialise(testArray);

	cout << "Display the array:" << endl;
	myPattern->Display();

	cout << endl << "Display the array in reverse order:" << endl;
	myPattern->DisplayReversed();

	cout << endl << "max element of the array: " << myPattern->FindMax();

	cout << endl << endl;
	cout << "location of the number 7: " << myPattern->FindLocation(7);
	cout << endl;

	system("pause");
}