#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //squre number printing
   /* 1 2 3 
      1 2 3 
      1 2 3 */
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }

    cout<<"------------||------------"<<endl;

    //squre * printing
   /* * * *
      * * * 
      * * * */
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"------------||------------"<<endl;

    //suare increment number printing
   /* 1 2 3 
      4 5 6 
      7 8 9 */
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    cout<<"------------||------------"<<endl;
    
    //ABCD printing 
    /* A B C 
       A B C 
       A B C */
    for(int i=1;i<=n;i++){
        char ch = 'A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}