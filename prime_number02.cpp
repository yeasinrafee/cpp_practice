#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = true;

    for(int i=2; i*i<=n; i++){
        if (n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(n<=1){
        flag=false;
    }
    if(flag){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}