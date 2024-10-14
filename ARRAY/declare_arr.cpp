#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int arr [size];
    
    //user input of array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //print array 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    //Accessing the array
    cout<<"First Index is : "<<arr[0]<<endl;
    return 0;
}