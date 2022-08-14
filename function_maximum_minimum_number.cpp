#include<iostream>
using namespace std;
int maximum(int a, int b, int c){
    if(a>b && a>c){
        cout<<a;
    }else if(b>a && b>c){
        cout<<b;
    }else{
        cout<<c;
    }
    return a,b,c;
}
int minimum(int a, int b, int c){
    if(a<b && a<c){
        cout<<a;
    }else if(b<a && b<c){
        cout<<b;
    }else{
        cout<<c;
    }
    return a,b,c;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    maximum(a,b,c);
    cout<<endl;
    minimum(a,b,c);
    return 0;
}