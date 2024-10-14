#include <iostream>
using namespace std;

int main(){
    int n;
    int oddSum = 0;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            oddSum = oddSum + i;
        }
    }
    cout<<"The sum first"<<n<<"odd numbers is : "<<oddSum;
}