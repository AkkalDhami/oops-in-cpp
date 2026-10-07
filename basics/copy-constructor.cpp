//? A copy constructor creates a new object by copying an existing object.
//* ClassName(const ClassName &other)

//* The default copy constructor performs a shallow copy.

//? Why reference?
//* Because passing by value itself requires copying the object, potentially causing another copy constructor call.

//? Why const?
//* The copy constructor shouldn't modify the object being copied.

//? Rule of Three
//* If a class has a pointer member, it must have a copy constructor, a destructor, and an assignment operator.

#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  int age;

  Student(string name, int age)
      : name(name), age(age) {}

  // Copy constructor
  Student(const Student &other)
      : name(other.name), age(other.age)
  {
    cout << "Copy constructor called\n";
  }

public:
  void printInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

int main()
{
  Student s1("Akkal", 20);

  Student s2 = s1; //* Create a new `Student` object using `s1` as the source.

  s2.name = "Akkal 2"; //* Modify the name of `s2` without affecting `s1`.

  s1.printInfo();
  cout << endl;
  s2.printInfo();
}