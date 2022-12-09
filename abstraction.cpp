#include <iostream>
using namespace std;

class AbstractEmployee
{
  virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee
{
  // all class members are private by default

private:
  // all the variables and methods are private here
  string Name;
  string Company;
  int Age;

public:
  // all the variables and methods are public here
  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }

  void setName(string name)
  {
    Name = name;
  }
  string getName()
  {
    return Name;
  }

  void setCompany(string company)
  {
    Company = company;
  }
  string getCompany()
  {
    return Company;
  }

  void setAge(int age)
  {
    Age = age;
  }
  int getAge()
  {
    return Age;
  }

  void IntroduceYourself()
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  void askForPromotion()
  {
    if (Age > 26)
    {
      cout << Name << " got promoted." << endl;
    }
    else
    {
      cout << Name << " sorry no promotion for you." << endl;
    }
  }
};

int main()
{
  Employee employee1 = Employee("Shouvik", "Airbus", 25);
  employee1.IntroduceYourself();
  employee1.setName("Shouvik Bajpayee");
  employee1.setCompany("Airbus India");
  employee1.setAge(24);
  employee1.IntroduceYourself();
  cout << employee1.getName() << ", who works in " << employee1.getCompany() << ", is " << employee1.getAge() << " years old." << endl;
  employee1.askForPromotion();

  Employee employee2 = Employee("Soumen", "IIIT Kalyani", 28);
  employee2.IntroduceYourself();
  employee2.setName("Soumen Bajpayee");
  employee2.IntroduceYourself();
  cout << employee2.getName() << ", who works in " << employee2.getCompany() << ", is " << employee2.getAge() << " years old." << endl;
  employee2.askForPromotion();

  return 0;
}