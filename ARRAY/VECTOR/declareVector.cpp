#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vac = {1,2,3};
    cout << vac[0] << endl;
    for(int i : vac){
        cout << i << " ";
    }

    //size methid
    cout << "\nSize of vector : " << vac.size() << endl;

    //push back method
    vac.push_back(4);
    vac.push_back(5);
    cout << "After push back method : ";
    for(int i : vac){
        cout << i << " ";
    }

    //pop back meethod
    vac.pop_back();
    vac.pop_back();
    cout << "\nAfter pop back method : ";
    for(int i : vac){
        cout << i << " ";
    }

    
    
    return 0;
}