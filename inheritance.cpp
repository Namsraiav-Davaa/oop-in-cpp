#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
    // mainly it can set rule 
    // if any class inherited from abstractEmployee that always use AskForPromotion
};

class Employee: AbstractEmployee {
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
    void AskForPromotion() {
        if (Age > 30) {
            cout << Name << " got promoted!" << endl;
        } else {
            cout << Name << " sorry NO promotion for you!" << endl;
        }
    }
};

class Developer: Employee {
    public: 
    string FavoriteProgrammingLanguage;
    Developer(string name, string company, int age, string Language): Employee(name, company, age) {
        FavoriteProgrammingLanguage = Language;
    }
    void FixBug() {
        cout << getName() << " fixed bug using " << FavoriteProgrammingLanguage << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Namsraijav", "Happy", 25);
    Employee employee2 = Employee("John", "Amazon", 37);
    employee1.IntroduceYourself();

    Developer developer1 = Developer("Boloroo", "ex-Amazon", 27, "C++");
    developer1.FixBug();
    return 0;
}