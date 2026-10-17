#include <iostream>
#include <string>
#include <vector>

using namespace std;

//* base class
class Tea
{
protected:
  string teaName;
  int servings;

public:
  Tea(int servings, string name) : teaName(name), servings(servings)
  {
    cout << "Tea constructor called: " << name << endl;
  }

  virtual void brew() const
  {
    cout << "Brewing: " << teaName << " with a generic method" << endl;
  }

  virtual void serve() const
  {
    cout << "Serving: " << servings << " cup of tea with a generic method" << endl;
  }

  virtual ~Tea()
  {
    cout << "Tea destructor called!" << endl;
  }
};

class GreenTea : public Tea
{

public:
  GreenTea(int servings) : Tea(servings, "Green Tea")
  {
    cout << "Green Tea constructor called" << endl;
  }

  void brew() const override
  {
    cout << "Brewing: " << teaName << endl;
  }

  void serve() const override
  {
    cout << "Serving: " << servings << " cup of " << teaName << endl;
  }

  ~GreenTea()
  {
    cout << "Green Tea destructor called!" << endl;
  }
};

class MasalaTea : public Tea
{
public:
  MasalaTea(int servings) : Tea(servings, "Masala Tea")
  {
    cout << "Masala Tea constructor called" << endl;
  }
  void brew() const override final
  {
    cout << "Brewing: " << teaName << endl;
  }

  void serve() const override
  {
    cout << "Serving: " << servings << " cup of " << teaName << endl;
  }

  ~MasalaTea()
  {
    cout << "Masala Tea destructor called!" << endl;
  }
};

// class SpicyMasalaTea : public MasalaTea
// {
// public:
//   SpicyMasalaTea(int servings) : MasalaTea(servings, "Spicy Masala Tea")
//   {
//     cout << "Spicy Masala Tea constructor called" << endl;
//   }
//   void brew() const override final
//   {
//     cout << "Brewing: " << teaName << endl;
//   }
// };

int main()
{
  Tea *t1 = new GreenTea(2);
  Tea *t2 = new MasalaTea(2);

  t1->serve();
  t1->brew();

  t2->serve();
  t2->brew();

  delete t1;
  delete t2;

  return 0;
}