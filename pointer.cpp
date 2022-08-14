#include<iostream>
using namespace std;
class ABC_Icecream_Parlor
{
public:
    string location;
    string flavor;
    ABC_Icecream_Parlor()
    {
        cout<<"--Welcome To ABC Icecream Parlor(Branch 1)--"<<endl<<endl;
        cout<<"Which Flavor do you want?"<<endl;
        cin>>flavor;
        cout<<"Enter The Location: ";
        cin>>location;
    }
    void show_output()
    {
        cout<<endl<<"Here Is Your "<<flavor<<" Flavored Icecream"<<endl;
        cout<<"Location: "<<location<<endl<<endl;
    }
};
class ABC_Icecream_Parlor2
{
public:
    string location2;
    string special_flavor;
    ABC_Icecream_Parlor2()
    {
        cout<<"--Welcome To ABC Icecream Parlor(Branch 2)--"<<endl<<endl;
        cout<<"Which Special Flavor do you want?"<<endl;
        cin>>special_flavor;
        cout<<"Enter The Location: ";
        cin>>location2;
    }
    void show_outputtwo()
    {
        cout<<endl<<"Here is your "<<special_flavor<<" Special Flavored Icecream"<<endl;
        cout<<"Location: "<<location2<<endl<<endl;
    }
};
class homebranch: public ABC_Icecream_Parlor2
{
    public:
    string s_flavor;
    homebranch()
    {
    cout<<endl<<"--Welcome To ABC Icecream Parlor(Branch 1)--"<<endl<<endl;
    cout<<"Which Flavour Do You Want?"<<endl;
    cin>>s_flavor;
    }
    void show_output3()
    {
       if(s_flavor==special_flavor)
    {
        cout<<"Sorry! This Flavour Is Only Available at ABC Icecream Parlor(Branch 2)"<<endl;
    }
    else
    {
      cout<<"Here Is Your "<<s_flavor<<" Flavored Iceream!\nComeback again!"<<endl;
    }
    }


};
int main()
{
    ABC_Icecream_Parlor obj;
    obj.show_output();
    ABC_Icecream_Parlor2 obj2;
    obj2.show_outputtwo();
    homebranch obj3;
    obj3.show_output3();

    return 0;
}
