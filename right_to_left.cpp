#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int rtl = n%10;
        cout<<rtl<<endl;
        n = n/10;
    }
    return 0;
}