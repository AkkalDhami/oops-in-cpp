//* A friend function is a non-member function that is given permission to access a class's private and protected members.

#include <iostream>
using namespace std;

class Student
{
private:
  int marks = 90;

public:
  friend void showMarks(Student s);
};

class Number
{
private:
  int value;

public:
  Number(int value) : value(value) {}

  friend int findMax(Number a, Number b);
};

void showMarks(Student s)
{
  cout << "Marks: " << s.marks << endl;
}

int findMax(Number a, Number b)
{
  if (a.value > b.value)
  {
    return a.value;
  }

  return b.value;
}

int main()
{
  Student s;
  showMarks(s);

  Number n1(10);
  Number n2(25);

  cout << "Max num: " << findMax(n1, n2);

  return 0;
}