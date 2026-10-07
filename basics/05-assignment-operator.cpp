#include <iostream>
using namespace std;

class Student
{
public:
  Student()
  {
    cout << "Default\n";
  }

  Student(const Student &other)
  {
    cout << "Copy\n";
  }

  Student &operator=(const Student &other)
  {
    cout << "Assignment\n";
    return *this;
  }
};

int main()
{
  Student a;
  //* A new object is being created, so the default constructor runs: Default

  Student b = a;
  //* A new object is being created, so the copy constructor runs: Copy

  Student c;
  //* A new object is being created, so the default constructor runs: Default

  c = a;
  //* The assignment operator runs: Assignment

  /*
    Default
    Copy
    Default
    Assignment
  */
}