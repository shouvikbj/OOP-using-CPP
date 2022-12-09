#include <iostream>
using namespace std;

class Employee
{
  // all class members are private by default

public:
  // all the variables and methods are public here
  string Name;
  string Company;
  int Age;

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
  Employee employee1 = Employee("Shouvik", "Airbus", 25);
  employee1.IntroduceYourself();

  Employee employee2 = Employee("Soumen", "IIIT Kalyani", 28);
  employee2.IntroduceYourself();

  return 0;
}