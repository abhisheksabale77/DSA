#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans = ans ^ val;
    }
    return ans;
}

int main(){
    vector<int>vec = {1,2,1,2,4};
    
    cout << "The unique or single number is : " << singleNumber(vec);
}