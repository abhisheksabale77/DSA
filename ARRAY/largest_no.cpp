#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter elements of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The array is : "; 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int largeNo = INT16_MIN;
    for(int i=0;i<size;i++){
        // if(arr[i] > largeNo){
        //     largeNo = arr[i];
        // }
        largeNo = max(arr[i],largeNo);
    }
    cout<<"\nThe largest number in the array is : "<<largeNo<<endl;
    return 0;
}