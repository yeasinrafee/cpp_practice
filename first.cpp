#include<iostream>
using namespace std;

int main(){
    int a;
    a = 12;
    cout<<"Size of "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of short int "<<sizeof(si)<<endl;
    cout<<"Size of long int "<<sizeof(li)<<endl;

    return 0;
}
