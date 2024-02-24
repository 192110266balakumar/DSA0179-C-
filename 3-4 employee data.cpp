#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string name, int id, double salary)
        : name(name), id(id), salary(salary) {}

    
    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }


    void setName(string name) { this->name = name; }
    void setId(int id) { this->id = id; }
    void setSalary(double salary) { this->salary = salary; }
};

class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(string name, int id, double salary, string department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}


    string getDepartment() const { return department; }
    double getBonus() const { return bonus; }

    
    void setDepartment(string department) { this->department = department; }
    void setBonus(double bonus) { this->bonus = bonus; }
};

class Engineer : public Employee {
private:
    string specialty;
    int hours;

public:
    Engineer(string name, int id, double salary, string specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}

    
    string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }


    void setSpecialty(string specialty) { this->specialty = specialty; }
    void setHours(int hours) { this->hours = hours; }
};

int main() {
    Manager manager("John Doe", 1001, 50000, "Sales", 5000);
    cout << "Manager Name: " << manager.getName() << endl;
    cout << "Manager ID: " << manager.getId() << endl;
    cout << "Manager Salary: $" << manager.getSalary() << endl;
    cout << "Manager Department: " << manager.getDepartment() << endl;
    cout << "Manager Bonus: $" << manager.getBonus() << endl;

    Engineer engineer("Jane Smith", 2001, 60000, "Software Development", 40);
    cout << "\nEngineer Name: " << engineer.getName() << endl;
    cout << "Engineer ID: " << engineer.getId() << endl;
    cout << "Engineer Salary: $" << engineer.getSalary() << endl;
    cout << "Engineer Specialty: " << engineer.getSpecialty() << endl;
    cout << "Engineer Hours: " << engineer.getHours() << " hours per week" << endl;

    return 0;
}

