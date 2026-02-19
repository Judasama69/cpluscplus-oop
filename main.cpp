#include <iostream>
#include <string>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if(age >= 18) {
           Age = age;
        }
    }
    int getAge() {
        return Age;
    }

    void Introduce() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
        std::cout << std::endl;
    }

    void AskForPromotion() {
        if(Age >= 20) {
            std::cout << Name << " got promoted " << std::endl;
        } else {
            std::cout << Name << ", sorry NO promotion for you." << std::endl;
        }
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void Working() {
        std::cout << Name << " is checking email, task backlog, performing task..." << std::endl;
    }
};

class Developer : public Employee {
public:
    string FavProgLang;
    Developer(string name, string company, int age, string favProgLang)
        :Employee(name, company, age)
    {
        FavProgLang = favProgLang;
    }
    void FixBug() {
        std::cout << Name << " fixed bug using " << FavProgLang << std::endl;
        std::cout << std::endl;
    }

    void Work() {
        std::cout << Name << " is writing " << FavProgLang << " code" << std::endl;
        std::cout << std::endl;

    }
};

class Teacher : public Employee {
public:
    string Subject;
    void PreparedLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
        {
            Subject = subject;
        }

        void Work() {
        std::cout << Name << " is teaching " << Subject << std::endl;
    }
};

int main() {

    Developer d = Developer("Kenjie", "Microsoft", 20, "C++");
    Teacher t = Teacher("Hani", "EggSchool", 19, "Programming");
    d.Introduce();
    t.Introduce();
    d.Work();
    d.FixBug();
    t.Working();
}





















