#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter first no :" <<endl;
    cin>>a;
    cout<<"Enter second no :" <<endl;
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"After swapping first no : "<<a<<endl;
    cout<<"After swapping second no :"<<b<<endl;

}