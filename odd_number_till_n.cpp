#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter your number : \n";
    cin>>num;

    for(int i = 1; i <= num; i++){
        if(num%2 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}