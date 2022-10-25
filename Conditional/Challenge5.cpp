#include<iostream>
using namespace std;
int main(){
    char op =('+','-','*','/'); 
    cout<<"Enter an operator"<<op<<endl;
    cin>>op;
    int num1,num2;
    cout<<"Enter number 1 :"<<endl;
    cin>>num1;
    cout<<"Enter number 2 :"<<endl;
    cin>>num2;
    switch (op)
    {
    case '+':
        cout<<(num1+num2)<<endl;
        break;
    case '-':
        cout<<(num1-num2)<<endl;
        break;
    case '/':
        cout<<(num1/num2)<<endl;
        break;
    case '*':
        cout<<(num1*num2)<<endl;
        break;
    
    default:
        break;
    }

}