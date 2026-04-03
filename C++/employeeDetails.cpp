#include<iostream>
using namespace std;

string companyName ="Tech mahindra";
class Employee
{
    int empID;
    string name;
    double salary;

    static int totalEmployees;

    public:
        Employee(int id, string n,double sal)
        {
            empID=id;
            name=n;
            salary=sal;

            totalEmployees++;
        }
        void display()
        {
            cout<<"Company Name  :"<<companyName<<endl;
            cout<<"Employee ID   :"<<empID<<endl;
            cout<<"Name          :"<<name<<endl;
            cout<<"Salary        :"<<salary<<endl;

        }

        static void showTotalEmployees()
        {
            cout<<"Total Employees created :"<<totalEmployees<<endl;

        }
};
 int Employee::totalEmployees =0;

 int main()
 {
    Employee e1(101, "Vishu", 10000);
    Employee e2(102, "Turu", 20000);
    Employee e3(103, "Yash", 30000);
    Employee e4(104, "Nagu", 40000);
    Employee e5(105, "Viju", 50000);

    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();

    Employee::showTotalEmployees();

    return 0;

 }




 