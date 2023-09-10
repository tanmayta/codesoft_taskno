#include <iostream>
#include<stdio.h>
using namespace std;
int main() 
{
    char oper;
    float a, b;
    cout << "Enter two operands: ";
    cin >> a >> b;

       cout << "Enter operator: ";
    cin >> oper;

    
    switch (oper)
     {
        
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;
        
        case '*':
            cout << a * b;
            break;
        
        case '/':
            cout << a / b;
            break;
        
        default:
            cout << "Error! Incorrect operator";
            break;
    }
    return 0;
}