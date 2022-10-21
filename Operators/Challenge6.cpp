#include<iostream>
using namespace std;
int main(){
    int a,b,sum,diff,subs,mod,divide;
    cout<<"Enter the no first :";
    cin>>a;
    cout<<"Enter the no second:";
    cin>>b;
    sum = (a+b);
    diff = (a/b);
    subs = (a-b);
    mod = (a%b);
    divide = (a/b);

    cout<<"Sum :"<<sum<<endl;
    cout<<"Subs :"<<subs<<endl;
    cout<<"Divide :"<<divide<<endl;
    cout<<"Mod :"<<mod<<endl;
    cout<<"Diff :"<<diff<<endl;
}