//* A delegating constructor is a constructor that calls another constructor of the same class to reuse its initialization logic.

#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  int age;

  Student(string n, int a)
  {
    name = n;
    age = a;
  }

  Student(string n) : Student(n, 18)
  {
  }
};

int main()
{
  Student s1("Ram", 20);
  Student s2("Hari");

  cout << s1.name << " " << s1.age << endl;
  cout << s2.name << " " << s2.age << endl;

  return 0;
}