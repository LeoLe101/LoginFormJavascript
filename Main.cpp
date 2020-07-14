#include <iostream>
#include <stdio.h>
using std::cin;
using std::cout;
using std::endl;

class Main
{
public:
    void Create();
    void Update()
    {
        cout << "This is the Update function!" << endl;
        for (int i = 0; i < 10; i += 2)
        {
            cout << "Current Number is: " << i << endl;
        }
    };

    int GetNumber()
    {
        return 90;
    }
};

int main()
{
    Main mainTest;
    mainTest.Update();
}