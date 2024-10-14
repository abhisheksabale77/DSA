#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
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

    cout << "You entered array : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    int target;
    cout << "\nEnter element to be search : ";
    cin >> target;

    cout << endl;
    int result = linearSearch(arr,target,size);
    if(result == -1){
        cout << target << " element is not present in the array" << endl;
    }
    else{
        cout << target << " element is present in the array at index " << result << endl;
    }
    return 0;
}