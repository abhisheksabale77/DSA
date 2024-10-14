#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    int n = arr.size();

    int i = 0;
    int j = n-1;
    
    while(i < j){
        int pairSum = arr[i] + arr[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 26;

    vector<int> ans = pairSum(arr,target);
    cout << target << " Sum of this number the index is : " << ans[0] << ", " << ans[1] << endl;
    return 0;
}