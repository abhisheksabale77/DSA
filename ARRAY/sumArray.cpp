#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: ";
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

    //sum of array
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    cout << "\nSum of array is : " << sum << endl;
}