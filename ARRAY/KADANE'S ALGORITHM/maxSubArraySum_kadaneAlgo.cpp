#include <iostream>
using namespace std;

int maxSubArray(int arr[], int size){
    int currentSum = 0;
    int maxSum = INT16_MIN;
    for(int i=0;i<size;i++){
        
        currentSum = currentSum + arr[i];
        maxSum = max(currentSum,maxSum);

        if(currentSum < 0){
            currentSum = 0;
        } 
    }
    return maxSum;
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

    cout << "You entered array is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "The max subArray sum of : " << maxSubArray(arr, size);
}