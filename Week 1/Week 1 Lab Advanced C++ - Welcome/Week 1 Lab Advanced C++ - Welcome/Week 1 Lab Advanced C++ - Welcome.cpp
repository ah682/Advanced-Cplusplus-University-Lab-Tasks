// Week 1 Lab Advanced C++ - Welcome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


const double CONVERSION_RATE_MONEY = 1.5; //Excercise 3

const double CONVERSION_RATE_TEMPERATURE = 9; // Excercise 4

//For Excercise 3
double convertCurrency(double pounds) {
    double dollars = pounds * CONVERSION_RATE_MONEY;
    return dollars;
}

//For Excercise 4
double convertTemperature(double celsius) {
    double fahrenheight = (celsius * CONVERSION_RATE_TEMPERATURE / 5 + 32);
    return fahrenheight;
}

//For Excercise 6
struct studentMarks
{
    string name;
    float mark;
};

//For Excercise 8 and 112
struct car
{
    string colour;
    string make;
    float mileage;
    int doors;
};

void displayCar(car model)
{
    cout << model.colour << endl;
    cout << model.make << endl;
    cout << model.mileage << endl;
    cout << model.doors << endl;
}

//For Excericse 114
struct book
{
    int id;
    double price;
};

int main()
{
    //Excercise 1
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    //Excercise 2
    int num1, num2, sum = 0;
    while (sum <= 100)
    {
        cout << "Enter first number" << endl;
        cin >> num1;
        cout << "Enter second number" << endl;
        cin >> num2;

        sum = num1 + num2;

        cout << "Total number is " << sum << endl;

    }

    cout << "Number exceeded 100." << endl;

    //Excercise 3
    double pounds, dollars;
    cout << "Enter amount of pounds you want to exchange" << endl;
    cin >> pounds;

    dollars = convertCurrency(pounds);

    cout << "Converted to dollars amount is : " << dollars << endl;

    //Excercise 4
    double celsius, fahrenheight;
    cout << "Enter the temperature in celsius in which you wish to convert to fahrenheight" << endl;
    cin >> celsius;

    fahrenheight = convertTemperature(celsius);

    cout << "Converted to fahrenheight temperature is: " << fahrenheight << endl;

    //Excercise 5
    double num90 = 0, cubed;
    cout << "Enter a value for it to be cubed" << endl;
    cin >> num90;
    cubed = num90 * num90 * num90;
    cout << "Cubing the number num1 is " << cubed << endl;

    //Excercise 6
    studentMarks edward = { "edward", 95.2 };
    studentMarks michael;
    cout << "Enter michael's name" << endl;
    cin >> michael.name;
    cout << "Enter michael's mark" << endl;
    cin >> michael.mark;

    cout << "Edwards Mark and Name" << endl;
    cout << "Name:" << edward.name << " Mark: " << edward.mark << endl;
    cout << "Michaels Mark and Name" << endl;
    cout << "Name" << michael.name << " Mark: " << michael.mark << endl;

    //Excercise 7
    int exsevenarr1[3] = { 1, 3, 9 };
    int exsevenarr2[3] = { 2, 8, 10 };
    int exsevenarrsum[3];

    for (int i = 0; i < 3; i++)
    {
        exsevenarrsum[i] = exsevenarr1[i] + exsevenarr2[i];
        cout << exsevenarrsum[i] << endl;
    }

    cout << "Excercise 7 Complete" << endl;

    //Excercise 8 and 112
    car Ferrari = { "red", "Ferrari", 1000.09, 2};

    displayCar(Ferrari);

    //Excercise 9 and 10
    ofstream outfile("excercise9.txt");
    char ch;

    while (true) {
        cin >> ch;
        if (ch == '=') {
            break;
        }
        outfile << ch;
    }

    outfile.close();

   //Excercise 111
    const int FOUR = 4;

    int threes[FOUR];
    int counter = 3;

    for (int i = 0; i < FOUR; i++)
    {
        threes[i] = counter;
        counter = counter + 3;
    }

    cout << threes[0] << endl;
    cout << threes[1] << endl;
    cout << threes[2] << endl;
    cout << threes[3] << endl;

    //Excercise 113
    ifstream infile("excercise113.txt");
    ofstream copiedfile("excercise113 - Copy.txt");

    if (infile.is_open() && copiedfile.is_open()) { // make sure both files are open
        string line;
        while (getline(infile, line)) { // read a line from myfile.txt
            copiedfile << line << endl; // write the line to copy.txt
        }
        std::cout << "Contents copied successfully" << std::endl;
    }
    else {
        std::cout << "Error opening files" << std::endl;
    }

    infile.close();
    copiedfile.close();

    //Excercise 114
    book enterBooks[FOUR];

    for (int i = 0; i < 4; i++)
    {
        cin >> enterBooks[i].id;
        cin >> enterBooks[i].price;
    }

    cout << enterBooks[0].id;
    cout << enterBooks[0].price;
    cout << enterBooks[1].id;
    cout << enterBooks[1].price;
    cout << enterBooks[2].id;
    cout << enterBooks[2].price;
    cout << enterBooks[3].id;
    cout << enterBooks[3].price;
    
    //Exercise 115 and 116
    int array1[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    int array2[3][2] = { {2, 4}, {6, 8}, {10, 12} };
    int result[3][2];

    // Add the corresponding elements of the two arrays
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Output the results to the screen
    std::cout << "The result of adding the corresponding elements of the two arrays is:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
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
