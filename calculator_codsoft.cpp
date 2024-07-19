#include<iostream>
using namespace std;

int main()
{
    char operation;
    float num1, num2;

    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter operation to be performed on the munbers(+,-,*,/) : ";
    cin>>operation;

    switch(operation)
    {
        case '+':
                cout<<"Result : "<<num1+num2;
                break;

        case '-':
                cout<<"Result : "<<num1-num2;
                break;

        case '*':
                cout<<"Result : "<<num1*num2;
                break;

        case '/':
                if(num2 != 0)
                 {cout<<"Result : "<<num1/num2;}
                else
                 {cout<<"Error!Division by zero is not possible.";}
                break;

        default :
                cout<<"Error!Invalid operation.";
    }
    return 0;
}