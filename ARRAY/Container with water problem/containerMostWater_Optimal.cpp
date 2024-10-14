#include <iostream>
using namespace std;

int containerWater(int containerHeight[], int size){
    int maxWater = 0;
    int leftPointer = 0;
    int rightPointer = size - 1;

    while(leftPointer < rightPointer){
        int width = rightPointer - leftPointer;
        int height = min(containerHeight[leftPointer], containerHeight[rightPointer]);
        int currentWater = width * height;

        maxWater = max(maxWater, currentWater);

        // containerHeight[leftPointer] < containerHeight[rightPointer] ? leftPointer ++ : rightPointer--;

        if(leftPointer < rightPointer){
            leftPointer ++;
        }
        else{
            rightPointer --;
        }

    }
    return maxWater;
}

int main(){
    int size;
    cout << "Enter size of container : ";
    cin >> size;

    int arr[size];
    cout << "Enter height of container : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "You enterd height container : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "The max water in the container is : " << containerWater(arr,size);
    return 0;
}