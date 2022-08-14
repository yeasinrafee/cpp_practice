#include<iostream>
using namespace std;

void alph(int n){
    if(n>=65 && n<=90 || n>=97 && n<=122){
        cout<<"An alphabet"<<endl;
    }else{
        cout<<"Not an alphabet"<<endl;
    }
    return;
}

int main(){
   char c;
   cin>>c;
   int n;
   n = int(c);

   alph(n); 
    return 0;
}