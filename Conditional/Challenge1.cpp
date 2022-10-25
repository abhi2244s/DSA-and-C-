#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cin>>length;
    cin>>breadth;
    if(length==breadth){
        cout<<"It is a square"<<endl;
    }
    else{
        cout<<"It is a rectangle"<<endl;
    }
}