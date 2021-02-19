#import <iostream>

using namespace std;

// Attribute are private by default
class Employee{
public:
    string Name;
    string Company;
    int Age;

    void Introduction() {
        cout << "Employee Info:\n";
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};



int main() {

    // Without constructor
    /*
    Employee employee1;
    employee1.Name = "Jaime";
    employee1.Company = "Army";
    employee1.Age = 34;

    employee1.Introduction();
     */


    Employee employee2 = Employee("Jaime", "Novetta", 34);
    employee2.Introduction();

}
