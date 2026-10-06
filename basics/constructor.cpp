//* A constructor is a special member function that is automatically called when an object is created.

//* Its main job is to initialize the object into a valid state.

#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  int age;

  Student()
  {
    name = "Unknown";
    age = 0;
  }

public:
  Student(string n)
  {
    name = n;
    age = 0;
  }

  void display()
  {
    cout << name << " " << age << endl;
  }

public:
  //* the members are initialized directly.
  // Student(string name, int age): name(name), age(age) {}

  //* the members are first initialized and then assigned new values.
  Student(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};

int main()
{
  Student s;

  cout << s.name << endl;
  cout << s.age << endl;

  Student s1("Akkal");
  s1.display();

  Student s2("Akkal", 20);
  s2.display();
}