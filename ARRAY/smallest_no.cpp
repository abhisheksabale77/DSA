#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size of array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter Element Of array : ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The Array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int smallNo = INT16_MAX;
    for(int i=0;i<size;i++){
        // if(arr[i] < smallNo){
        //     smallNo = arr[i];
        // }
        smallNo = min(smallNo,arr[i]);
    }
    cout<<"\nSmallest number in the array is : "<<smallNo<<endl;
    

    return 0;
}