#include<iostream>
using namespace std;

void swap(int*a, int*b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    cout<<"Enter your first number : "<<endl;
    cin>>a;
    cout<<"Enter your second number : "<<endl;
    cin>>b;
    swap(&a, &b);
    cout<<"Your first and second number is : "<<a<<"  "<<b<<endl;

    return 0;
}