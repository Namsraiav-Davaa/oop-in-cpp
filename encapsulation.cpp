#include <iostream>
using namespace std;

class Employee
{
    // encapsulated variables
private:
    string Name;
    string Company;
    int Age;

public:
    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
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
        if (age >= 18)
        {
            Age = age;
        }
    }

    int getAge()
    {
        return Age;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Namsraijav", "Happy", 25);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amazon", 27);
    employee2.IntroduceYourself();

    employee1.setAge(26);

    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;

    return 0;
}