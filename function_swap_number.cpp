#include<iostream>
using namespace std;

int swap(int a, int b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    return a,b;
}


int main(){
    int a, b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}