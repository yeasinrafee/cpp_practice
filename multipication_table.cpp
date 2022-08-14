#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your Multiplication Table number : \n";
    cin>>n;
    int i;
    for(i = 1; i <= 10; i++){
    cout<<n<<" * "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}