#include<iostream>
#include<string>
using namespace std;

class Book{

    public:
        string name;
        string author;
        int year;
    
        void addBook(){
            cout<<"Enter the name of the book: ";
            getline(cin,name);

            cout<<"Enter author name: ";
            getline(cin, author);

            cout<<"Enter published year: ";
            cin >> year;
            cin.ignore();
        };

        void displayDetails(){
            cout<<"Book Name: "<<name<<endl;
            cout<<"Author Name: "<<author<<endl;
            cout<<"Published Year: "<<year<<endl<<endl;
        }
};


int main(){
    
    Book library[3];
    for(int i = 0; i < 3; i++){
        library[i].addBook();
    }
    cout << endl << "***********LIBRARY************" << endl;
    for(int i=0; i<3; i++){
        library[i].displayDetails();
    }
    return 0;
}