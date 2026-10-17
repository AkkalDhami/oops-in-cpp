//* An abstract class is a class that you cannot use to create objects directly.
//* It is usually designed to act as a base class for other classes.
//* In C++, a class becomes abstract when it has at least one pure virtual function.

//* pure virtual function: does not have an implementation in the base class but must be implemented in the derived classes.

#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void sound() = 0; //* pure virtual function
  
  virtual void sleep() = 0; //* It declares the required behavior but doesn't provide a normal implementation of this function.
};

//* Dog and Cat are derived classes from Animal

class Dog : public Animal
{
public:
  void sound() override
  {
    cout << "Dog is barking\n";
  }
  
  void sleep() override
  {
    cout << "Dog is sleeping\n";
  }
};

class Cat : public Animal
{
public:
  void sound() override
  {
    cout << "Cat is meowing\n";
  }

  void sleep() override
  {
    cout << "Cat is sleeping\n";
  }
};

int main()
{

  Dog d;
  d.sound();
  d.sleep();

  Cat c;
  c.sound();
  c.sleep();

  return 0;
}