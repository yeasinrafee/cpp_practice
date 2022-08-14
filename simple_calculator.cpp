#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    char optr;
    cout<<"Keep Clculating :) \n";
    cin>>num1>>optr>>num2;
    switch (optr)
    {
    case '+':
        cout<<num1 + num2;
        break;
    case '-':
        cout<<num1 - num2;
        break;
    case '*':
        cout<<num1 * num2;
        break;
    case '/':
        cout<<num1 / num2;
        break;
    
    default:
        break;
    }

    return 0;
}