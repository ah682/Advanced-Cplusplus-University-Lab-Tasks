#include <iostream>
#include <string>

using namespace std;

//Excericse 1: Implement a hash function
struct sMarks {
    string mName;
    float mMark;
};

sMarks* studentGrades[100];

int HashFunction(string key) {
    int hash = 0;
    for (int i = 0; i < key.length(); i++) {
        hash += key[i];
    }
    return hash % 100;
}


void main() {
    //Excericse 1: Implement a hash function
    // Initialize the array to nullptr
    for (int i = 0; i < 100; i++) {
        studentGrades[i] = nullptr;
    }

    // Insert the data
    int hash;
    hash = HashFunction("fred");
    studentGrades[hash] = new sMarks{ "fred", 34 };
    hash = HashFunction("john");
    studentGrades[hash] = new sMarks{ "john", 83 };
    hash = HashFunction("paul");
    studentGrades[hash] = new sMarks{ "paul", 98 };
    hash = HashFunction("susan");
    studentGrades[hash] = new sMarks{ "susan", 19 };
    hash = HashFunction("jane");
    studentGrades[hash] = new sMarks{ "jane", 94 };
    hash = HashFunction("lucy");
    studentGrades[hash] = new sMarks{ "lucy", 74 };

    // Retrieve and print the data
    sMarks* result = studentGrades[HashFunction("fred")];
    if (result != nullptr) {
        cout << result->mName << " " << result->mMark << endl;
    }

    result = studentGrades[HashFunction("jane")];
    if (result != nullptr) {
        cout << result->mName << " " << result->mMark << endl;
    }

    result = studentGrades[HashFunction("lucy")];
    if (result != nullptr) {
        cout << result->mName << " " << result->mMark << endl;
    }

    //Excericse 2 Simple Collision Resolution
}