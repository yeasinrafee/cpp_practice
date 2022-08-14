#include<iostream>
#include<Math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int orgN=n;

    while(n>0){
        int rev = n%10;
        sum += pow(rev, 3);
        n /= 10;
    }
    if(sum==orgN){
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}