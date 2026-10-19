#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product
{
  int id;
  string name;
  double price;
  string category;
};

struct Order
{
  int id;
  int quantity;
  string customerId;
  int productId;
  double total;
  time_t date;
};

int main()
{

  vector<Product> products = {
      {1, "Laptop", 1000.0, "Electronics"},
      {2, "Phone", 500.0, "Electronics"},
      {3, "Tablet", 800.0, "Electronics"},

      {4, "T-shirt", 20.0, "Clothing"},
      {5, "Jeans", 50.0, "Clothing"},
      {6, "Shoes", 80.0, "Clothing"},

      {7, "Book", 10.0, "Books"},
      {8, "Magazine", 5.0, "Books"},
      {9, "Journal", 15.0, "Books"},

      {10, "Pen", 2.0, "Stationery"},
      {11, "Pencil", 1.0, "Stationery"},
      {12, "Notebook", 5.0, "Stationery"},
  };

  deque<string> customers = {
      "C001", "C002", "C003", "C004"};

  customers.push_back("C005");
  customers.push_front("C006");

  list<Order> orders = {
      {1, 2, "C001", 1, 2000.0, time(0)},
      {2, 1, "C002", 2, 500.0, time(0)},
      {3, 3, "C003", 3, 1500.0, time(0)},
  };

  orders.push_back({4, 1, "C004", 4, 20.0, time(nullptr)});
  orders.push_front({5, 2, "C005", 5, 100.0, time(nullptr)});

  set<string> categories;

  for (const auto &product : products)
  {
    categories.insert(product.category);
  }

  // cout << "Categories: " << endl;
  // for(const auto &category: categories){
  //   cout << " - " << category << endl;
  // }

  map<int, int> productStocks = {
      {1, 10},
      {2, 5},
      {3, 8},
      {4, 20},
      {5, 15},
      {6, 12},
      {7, 30},
      {8, 25},
      {9, 18},
      {10, 50},
      {11, 40},
      {12, 35},
  };

  multimap<string, Order> customerOrders;

  for (const auto &order : orders)
  {
    customerOrders.insert({order.customerId, order});
  }

  unordered_map<string, string> customerData = {
      {"C001", "John Doe"},
      {"C002", "Jane Doe"},
      {"C003", "Bob Smith"},
      {"C004", "Alice Johnson"},
      {"C005", "Emily Davis"},
  };

  unordered_set<string> customerIds = {
      "C001",
      "C002",
      "C003",
      "C004",
      "C005",
      "C006",
      "C007",
      "C008",
      "C009",
      "C010",
  };

  return 0;
}