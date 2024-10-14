//container with most water problem in brute approach
#include <iostream>
using namespace std;

int mostWater(int height[], int size){
    int maxWater = 0;
    for(int left = 0; left < size; left ++){
        for(int right = left + 1; right < size; right ++){
            int width = right - left;
            int heightContainer = min(height[left], height[right]);
            int currentWater = width * heightContainer;

            maxWater = max(maxWater, currentWater);
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

    cout << "You enterd height is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "The max water in the container is : " << mostWater(arr,size);
    return 0;
}