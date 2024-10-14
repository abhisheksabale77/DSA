#include <iostream>
using namespace std;

int main(){
    int num;
    for(num=2;num<=6;num++){
        for(int i=1;i<=10;i++){
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        }
        cout<<endl;
    }
}