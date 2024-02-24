#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;

public:
   
    Person(string name, int age, char gender)
        : name(name), age(age), gender(gender) {}

 
    string getName() const { return name; }
    void setName(string name) { this->name = name; }

    int getAge() const { return age; }
    void setAge(int age) { this->age = age; }

    char getGender() const { return gender; }
    void setGender(char gender) { this->gender = gender; }
};

class Student : public Person {
private:
    int rollNumber;
    string className;

public:
    
    Student(string name, int age, char gender, int rollNumber, string className)
        : Person(name, age, gender), rollNumber(rollNumber), className(className) {}

   
    int getRollNumber() const { return rollNumber; }
    void setRollNumber(int rollNumber) { this->rollNumber = rollNumber; }

    string getClassName() const { return className; }
    void setClassName(string className) { this->className = className; }
};

class Teacher : public Person {
private:
    string subject;
    double salary;

public:
  
    Teacher(string name, int age, char gender, string subject, double salary)
        : Person(name, age, gender), subject(subject), salary(salary) {}

 
    string getSubject() const { return subject; }
    void setSubject(string subject) { this->subject = subject; }

    double getSalary() const { return salary; }
    void setSalary(double salary) { this->salary = salary; }
};

int main() {
    Student student("John Doe", 18, 'M', 101, "12th Grade");
    cout << "Student Name: " << student.getName() << endl;
    cout << "Student Age: " << student.getAge() << endl;
    cout << "Student Gender: " << student.getGender() << endl;
    cout << "Student Roll Number: " << student.getRollNumber() << endl;
    cout << "Student Class: " << student.getClassName() << endl;

    Teacher teacher("Jane Smith", 35, 'F', "Mathematics", 50000);
    cout << "\nTeacher Name: " << teacher.getName() << endl;
    cout << "Teacher Age: " << teacher.getAge() << endl;
    cout << "Teacher Gender: " << teacher.getGender() << endl;
    cout << "Teacher Subject: " << teacher.getSubject() << endl;
    cout << "Teacher Salary: $" << teacher.getSalary() << endl;

    return 0;
}

