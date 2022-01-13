#include <iostream>
using namespace std;

class Animal
{
public:
    void speed()
    {
        cout << "Who is more Faster:" << endl;
    }
};

class Dolphin : public Animal
{
public:
    void speed()
    {
        cout << "im faster in water :" << endl;
    }
};

class Cheetah : public Animal
{
public:
    void speed()
    {
        cout << "Im faster on ground " << endl;
    }
};
int main()
{
    Animal a;
    Cheetah c;
    Dolphin d;

    a.speed();
    c.speed();
    d.speed();

    return 0;
}