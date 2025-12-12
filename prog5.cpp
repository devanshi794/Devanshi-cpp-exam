#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
    virtual void move() = 0;

    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog: Barks. " << endl;
    }

    void move()
    {
        cout << "Dog: Runs. " << endl;
    }
};

class Bird : public Animal
{
public:
    void sound()
    {
        cout << "Bird: Chirps." << endl;
    }

    void move()
    {
        cout << "Bird: Flies." << endl;
    }
};

int main()
{

    Dog d;
    Bird b;

    Animal *animals[2];
    animals[0] = &d;
    animals[1] = &b;

    for (int i = 0; i < 2; i++)
    {
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    return 0;
}