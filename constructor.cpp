#include <iostream>
using namespace std;

class Gambit
{
public:
    Gambit()
    {
        cout << "Hello there im constructor " << endl;
    }
    ~Gambit()
    {
        cout << "Hello there im a destructor " << endl;
    }

    void display()
    {
        cout << "Hello!" << endl;
    }
};
int main()
{
    Gambit gam;
    gam.display();

    return 0;
}