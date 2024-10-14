#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int array_size;
    cout << "Enter size of array : ";
    cin >> array_size;

    int array[array_size];
    cout << "Enter elements of array : ";
    for(int i=0;i<array_size;i++){
        cin >> array[i];
    }

    cout << "You entered array is : ";
    for(int i=0;i<array_size;i++){
        cout << array[i] << " ";
    }

    cout << "\nThe reverse array is : ";
    reverseArray(array,array_size);
    for(int i=0;i<array_size;i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}