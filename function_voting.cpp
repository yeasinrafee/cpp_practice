#include<iostream>
using namespace std;

void vote(int age){
    if(age >= 18){
        cout<<"Your eligible for vote"<<endl;
    }else{
        cout<<"Your are not eligible for vote"<<endl;
    }
    return;
}

int main(){
    int age;
    cin>>age;

    vote(age);
    return 0;
}