#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout<<"Enter a : ";
    cin>>a;

    cout<<"Enter b : ";
    cin>>b;

    //arithmetic operator
    cout<<"Addition : "<<a+b<<endl;
    cout<<"substraction : "<<a-b<<endl;
    cout<<"Multiplication : "<<a*b<<endl;
    cout<<"Division : "<<a/b<<endl;
    cout<<"Moudulo : "<<a%b<<endl;

    cout<<"*************************"<<endl;

    //comparision operator
    cout<<"a==b : "<<(a==b)<<endl;
    cout<<"a>=b : "<<(a>=b)<<endl;
    cout<<"a<=b : "<<(a<=b)<<endl;
    cout<<"a!=b : "<<(a!=b)<<endl;


    return 0;
}