// 23k-0077
// Sajid Ali
#include<iostream>
#include<string>
using namespace std;
struct Register
{
    int courseID;
    string courseName;
};
struct student
{
    Register detail;
    int studentID;
    string firstName;
    string lastName;
    long int cellNo;
    string email;
};
int main()
{
    int i,j;
    struct student s[5];
    for(i=0;i<5;i++)
    {
        cout<<"Enter the detail of student: "<<i+1<<endl;
        for(j=0;j<1;j++)
        {
            cout<<"Enter course ID: ";
            cin>>s[i].detail.courseID;
            cin.ignore();
            cout<<"Enter course name: ";
            getline(cin , s[i].detail.courseName);
            cout<<"Enter student ID: ";
            cin>>s[i].studentID;
            cout<<"Enter student's first name: ";
            cin.ignore();
            getline(cin , s[i].firstName);
            cout<<"Enter student's last name: ";
            cin.ignore();
            getline(cin , s[i].lastName);
            cout<<"Enter Cell number: ";
            cin>>s[i].cellNo;
            cin.ignore();
            cout<<"Enter email ID of student: ";
            getline(cin , s[i].email);
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<"BELOW is the detail of student: "<<i+1<<endl;
        for(j=0;j<1;j++)
        {
            cout<<"Course ID: "<<s[i].detail.courseID<<endl;
            cout<<"Course name: "<<s[i].detail.courseName<<endl;
            cout<<"Student ID: "<<s[i].studentID<<endl;
            cout<<"Student's first name: "<<s[i].firstName<<endl;
            cout<<"Student's last name: "<<s[i].lastName<<endl;
            cout<<"Cell number: "<<s[i].cellNo<<endl;
            cout<<"Email ID of student: "<<s[i].email<<endl;
        }
    }
    return 0;
}
