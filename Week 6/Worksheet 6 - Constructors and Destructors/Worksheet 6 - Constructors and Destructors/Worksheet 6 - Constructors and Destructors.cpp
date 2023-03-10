//Memeory leak detection
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <iostream>
using namespace std;

struct SEmployee
{
    string name;
    int id;
};

class CPayRoll
{
private:
    SEmployee* mpEmployeeDetails;
public:
    CPayRoll(string name, int id);
    ~CPayRoll();
    void SetDetails(string name, int id);
    void GetDetails(string& name, int& id);
};

int main()
{
    std::cout << "Hello World!\n";

    // Memory leak detection
    _CrtDumpMemoryLeaks();

    return 0;
}
