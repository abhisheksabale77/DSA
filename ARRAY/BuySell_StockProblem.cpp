#include <iostream>
using namespace std;

int buySellStock(int prices[], int size){
    int maxProfit = 0;
    int bestBuy = prices[0];

    for(int i=0;i<size;i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
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

    cout << "You entered array : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "The max profit of after stock buy and sell : " << buySellStock(arr, size);
    return 0;
}