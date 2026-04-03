// Write a student class and use it in your program to store the data
// of 10 students and display the data according to their roll number, 
// dates of birth, and total marks. 
// Implement concepts such as classes and objects,
// constructor, and parameterized constructor.


#include<iostream>
using namespace std;

class Student{
    int rollno;
    string dob;
    int marks1,marks2,marks3;
    int total;

    public:
    Student(){
       rollno = 0;
       dob = "";
       marks1 = marks2 = marks3 = total = 0;
       //total = 0;
    }

    //paramatarised constructor

     Student(int r,string d,int m1,int m2,int m3){
        rollno = r;
        dob = d;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        total = m1 + m2 + m3; 
     }

     void display(){
        cout<<"Rollno : "<<rollno<<endl;
        cout<<"DOB : "<<dob<<endl;
        cout<<"Marks : "<<marks1<<" "<<marks2<<" "<<marks3<<endl;
        cout<<"Total : "<<total<<endl;
        cout<<"====================================================\n";
     }
    
};

int main()
{

    Student s[10];
    int rollno,m1,m2,m3;
    string dob;

    for(int i = 0;i<2;i++)
    {
        cout<<"\nEnter the student details : "<<i+1<<endl;
        cout<<"Roll no : ";
        cin>>rollno;

        cout<<"Date Of Birth : ";
        cin>>dob;

        cout<<"Marks : ";
        cin>>m1>>m2>>m3;

        s[i] = Student(rollno,dob,m1,m2,m3);  // paramaterised constructor

    }

    cout<<"\n=============== Student data : ==================\n";

    for(int i = 0;i<2;i++)
    {
        s[i].display();
    }

}


