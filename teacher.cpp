#include <iostream>

using namespace std;

class Teacher
{
private:
  double salary;

public:
  string name;
  string subject;

  void setSalary(double s)
  {
    salary = s;
  }

  double getSalary()
  {
    return salary;
  }

  void displayInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << salary << endl;
  }
};

int main()
{
  Teacher t1;

  t1.name = "Akkal Dhami";
  t1.setSalary(50000.0);
  t1.subject = "Mathematics";

  t1.displayInfo();

  return 0;
}