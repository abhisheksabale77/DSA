#include <iostream>
using namespace std;

int subArray(int arr[], int size){

    for(int start = 0 ; start<size ; start++){
        for(int end = start ; end < size ; end++){
            for(int i = start ; i < end + 1 ; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "You enterd array is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "******************************" << endl;
    cout << "Sub array is : " << endl;
    subArray(arr,size);
    return 0;
}