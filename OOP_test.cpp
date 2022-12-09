// This is a OOP based simple Employee Management System

#include <iostream>

using namespace std;

class Employee
{
public:
  // all the variables and methods are public here
  string Name;
  string Company;
  int Age;

  Employee() {}

  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }

  void IntroduceYourself()
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }
};

int main()
{
  int n;
  cout << "How many employees do you want to create? : ";
  cin >> n;

  Employee emp_list[n];

  for (int i = 0; i < n; ++i)
  {
    cout << "For employee" << i + 1 << " enter below details.." << endl;
    string name, company;
    int age;
    cout << "Name : ";
    cin >> name;
    cout << "Company : ";
    cin >> company;
    cout << "Age : ";
    cin >> age;
    Employee e = Employee(name, company, age);
    emp_list[i] = e;
  }

  for (int j = 0; j < n; ++j)
  {
    cout << "Employee " << j + 1 << "..." << endl;
    emp_list[j].IntroduceYourself();
  }

  return 0;
}