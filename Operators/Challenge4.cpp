#include<iostream>
using namespace std;
int main(){
    int n = 32345;
    int first,second,third,fourth,fifth,sum;
    first = n/10000;
    n = n%10000;
    second = n/1000;
    n = n%1000;
    third = n/100;
    n = n%100;
    fourth = n/10;
    fifth = n%10;
    sum = (first+fifth);
    cout<<sum<<endl;

    
}