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

    //prooduct of array
    int product = 1;
    for(int i=0;i<size;i++){
        product = product * arr[i];
    }
    cout << "\nProduct of array is : " << product << endl;
}