#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(const string& n, int id, double initialSalary) : name(n), employeeID(id), salary(initialSalary) {}
    void calculateSalary(double performanceScore) {
        if (performanceScore > 0.8) {
            salary *= 1.1;  
        }
    }
    void setSalary(double newSalary) {
        salary = newSalary;
    }
    const string& getName() const {
        return name;
    }
    int getEmployeeID() const {
        return employeeID;
    }
    double getSalary() const {
        return salary;
    }
};
int main() {
    Employee emp("John Doe", 1001, 50000.0);
    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Initial Salary: $" << emp.getSalary() << endl;
    emp.calculateSalary(0.85);  
    cout << "\nAfter Performance Review:" << endl;
    cout << "Updated Salary: $" << emp.getSalary() << endl;
    emp.setSalary(52000.0);
    cout << "\nFinal Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Final Salary: $" << emp.getSalary() << endl;

    return 0;
}
