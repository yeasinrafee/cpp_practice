#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int i;
    for(i = 2; i < num; i++){
        if(num % i == 0){
            cout<<"Not a prime number.";
            break;
        }
    }
    if(num==i){
            cout<<"Prime number";
        }
    return 0;
}