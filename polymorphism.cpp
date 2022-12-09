// The most common use of polymorphism is when a
// parent class reference is used to refer to a child class

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
  // string Name;
  string Company;
  int Age;

protected:
  string Name;

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

  virtual void Work()
  {
    cout << Name << " is checking email, task backlog, performing tasks..." << endl;
  }
};

class Developer : public Employee
{
public:
  string FavProgrammingLanguage;

  Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
  {
    FavProgrammingLanguage = favProgrammingLanguage;
  }

  void FixBug()
  {
    // cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
    cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
  }

  void Work()
  {
    cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
  }
};

class Teacher : public Employee
{
public:
  string Subject;

  Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
  {
    Subject = subject;
  }

  void PrepareLesson()
  {
    cout << Name << " is preparing " << Subject << " lesson" << endl;
  }

  void Work()
  {
    cout << Name << " is teaching " << Subject << endl;
  }
};

int main()
{
  Developer d = Developer("Shouvik", "Airbus", 25, "Python");
  Teacher t = Teacher("Jack", "Cool School", 35, "History");
  Employee e = Employee("Soumen", "IIIT Kalyani", 28);
  // d.Work();
  // t.Work();
  // e.Work();

  Employee *e1 = &d;
  Employee *e2 = &t;
  e1->Work();
  e2->Work();

  return 0;
}