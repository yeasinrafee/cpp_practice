#include<iostream>
using namespace std;

int main(){
    int sidea, sideb, sidec;
    cout<<"Enter three sides of triangle : \n";
    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb && sideb==sidec){
        cout<<"Equilateral Triangle";
    }else if(sidea==sideb || sideb==sidec || sidea==sidec){
        cout<<"Isosceles Triangle";
    }else{
        cout<<"Scalene Triangle";
    }

    return 0;
}

/*A triangle is scalene if all of its three sides are different (in which case, the three angles are also different). If two of its sides are equal, a triangle is called isosceles. A triangle with all three equal sides is called equilateral.*/