#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string studentName;
        int rollNo;
        int age;
        float marks;

    public:

        void inputStudentDetails(){
            cout<<"Enter your name: ";
            getline(cin, studentName);

            cout<<"Enter your Roll number: ";
            cin>> rollNo;

            cout<<"Enter your age: ";
            cin>>age;

            cout<<"Enter your marks: ";
            cin>>marks;
            
        };

        void displayStudent(){
            cout << "******STUDENT INFO******" << endl;
            cout << "Name: " << studentName << endl;
            cout << "Roll Number: " << rollNo<<endl;
            cout << "Age: " << age << endl;
            cout << "Marks: " << marks << endl;
        };
};

int main(){

    Student obj; // memory is allocated here
    obj.inputStudentDetails();
    obj.displayStudent();

    return 0;
}