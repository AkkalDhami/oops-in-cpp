//? A destructor looks like a constructor, but it has a `~` before the class name
//? The destructor is called when the object goes out of scope.

#include <iostream>
using namespace std;

class Student
{
public:
  Student()
  {
    cout << "Constructor called\n";
  }

  ~Student()
  {
    cout << "Destructor called\n";
  }
};

class Array
{
private:
  int *data;

public:
  Array()
  {
    data = new int[100];
  }

  ~Array()
  {
    delete[] data;
  }
};

int main()
{
  Student s;
  // Array a;

  {
    Student s2;
    Student s3;
  }

  Student s4;
  cout << "Inside main\n";
  return 0;
}