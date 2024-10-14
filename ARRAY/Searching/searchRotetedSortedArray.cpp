#include <iostream>
using namespace std;

int searchRotetedArray(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2 ;

        if(target == arr[mid]){
            return mid;
        }

        if(arr[start] <= arr[mid]){ //left sorted
            if(arr[start] <= target && target <= arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        else{   //right sorted
            if(arr[mid] <= target && target <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return 0;
}

int main(){
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array : ";
    for(int  i=0;i<size;i++){
        cin >> arr[i];
    } 

    cout << "You entered array : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    int target;
    cout << "Enter element to be search : ";
    cin >> target;

    int result = searchRotetedArray(arr,size,target);
    if(result == -1){
        cout << target << " element is not present in the array" << endl;
    }
    else{
        cout << target << " element is present in the array at indxe " << result << endl;
    }
    return 0;
}