#include <iostream>
using namespace std;

int majorityElement(int arr[], int size){
    int freq = 0;
    int ans = 0;

    for(int i=0;i<size;i++){
        if(freq == 0){
            ans = arr[i];
        }
        else if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    } 
    return ans;
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

    cout << endl;
    cout << "The majority element in the array is : " << majorityElement(arr, size);
    return 0;
}