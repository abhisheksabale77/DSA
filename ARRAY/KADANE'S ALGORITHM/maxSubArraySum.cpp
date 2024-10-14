#include <iostream>
using namespace std;

int maxSum(int arr[], int size){
    int maxSum = INT16_MIN;
    for(int start = 0 ; start < size ; start ++){
        int currentSum = 0;
        for(int end = start ; end < size ; end ++){
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "The max subarray sum is : " << maxSum;
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
    maxSum(arr,size);
}