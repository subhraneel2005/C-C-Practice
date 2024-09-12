#include<iostream>
using namespace std;

class Factorial{
    public:
        int n, fact=1, n0;
        
        void inputNumber(){
            cout << "Enter a number: ";
            cin >> n;
            n0 = n;
        }
        
        void calculateFactorial(){
            for(int i = 1; i<=n; i++){
                fact *= i;
            }
        }
        
        void displayResult(){
            cout << "Factorial of " << n0 << " is = " << fact;
        }
};

int main(){
    Factorial fact;
    fact.inputNumber();
    fact.calculateFactorial();
    fact.displayResult();
    return 0;
}