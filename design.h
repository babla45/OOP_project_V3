#include<iostream>
using namespace std;

class design
{
    string name;
public:
    design(string s)
    {
    name=s;
    }

    design()
    {
    name="";
    }
    void decorate();
    void decorate2();

};


void design::decorate()
{
    cout<<"*\n*\nHello "<<name<<"\n";
    cout<<"\n                    WELCOME TO ENC/DEC \n";
    cout<<"!*********************************************************!\n";
    cout<<"!***********!!!!!!........(BABLA)........!!!!!!***********!\n";
    cout<<"***********************************************************\n\n";
}


void design::decorate2()
{
    //cout<<"hello "<<name<<"\n\n";
    cout<<"\n\n                       WELCOME AGAIN\n";
    cout<<"!*********************************************************!\n";
    cout<<"!***********!!!!!!        (BABLA)        !!!!!!***********!\n";
    cout<<"***********************************************************\n\n";
}