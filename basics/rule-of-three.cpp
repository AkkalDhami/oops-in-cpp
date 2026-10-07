//? Rule of 3

//* If a class has a pointer member, it must have a copy constructor, a destructor, and an assignment operator.

//* The Rule of 3 is one of the most important concepts in traditional C++ object management.

//* It becomes relevant when a class manually owns a resource, especially dynamically allocated memory.

//* The three functions are:
//* 1. Destructor
//* 2. Copy constructor
//* 3. Copy assignment operator

#include <iostream>
using namespace std;

class Array
{
private:
  int *data;
  int size;

public:
  //* Constructor
  Array(int size)
      : size(size)
  {
    data = new int[size];
  }

  //* Copy constructor
  Array(const Array &other)
      : size(other.size)
  {
    data = new int[size];
    for (int i = 0; i < size; i++)
    {
      data[i] = other.data[i];
    }
  }

  //* Copy assignment operator
  Array &operator=(const Array &other)
  {

    if (this == &other)
    {
      return *this;
    }

    delete[] data;

    size = other.size;

    data = new int[size];

    for (int i = 0; i < size; i++)
    {
      data[i] = other.data[i];
    }

    return *this;
  }

  //* Destructor
  ~Array()
  {
    delete[] data;
  }
};

int main()
{
  Array a(5);
  // Array b = a; //* This is copy construction.
  Array b(12);
  b = a; //* This is copy assignment, not copy construction.

  /*
   ? BEFORE:
   * We haven't written a copy constructor.
   * C++ therefore generates one automatically.
   * Both objects now point to the same memory.
   * We're trying to free the same memory again.
   * This is called a `double free`.
   *
   ? AFTER COPY CONSTRUCTOR:
   * We're now using a different memory location for `b`.
   * This prevents the `double free` error.
   * Our class currently has no custom copy assignment operator.
   * Before:
    a.data ───→ Memory A
    b.data ───→ Memory B

    * After b = a:
    a.data ───→ Memory A
    b.data ───→ Memory A
   */

  return 0;
}