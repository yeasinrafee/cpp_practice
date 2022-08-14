#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cout<<"Enter your number :\n";
    cin>>num;
    while(num>=0){
        sum+=num;
        cout<<"Enter your number : \n";
        cin>>num;
    }
    cout<<"Sum of your number is "<<sum<<endl;
    return 0;
}