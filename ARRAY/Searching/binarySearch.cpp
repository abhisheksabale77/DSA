#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter element of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "You entered array is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    int target;
    cout << "\nEnter element to be search : ";
    cin >> target;

    cout << "*********************************************\n";
    int result = binarySearch(arr,size,target);
    if(result == -1){
        cout << target << " element is not present in the array";
    }
    else{
        cout << target << " element is present in the array at index " << result;
    }

    return 0;
}