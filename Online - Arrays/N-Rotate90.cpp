#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j =0 ; j<n; j++){
            cin>>a[i][j];
        }
    }

   //Swapping of elements along diagnol
    for(int i=0; i<n; i=i+2){
        for(int j = 0; j<n-1; j++){
            swap(a[i][j],a[j][i]);
        }
    }

    //Reversal of rows
    for(int i=0; i<n; i++){
        swap(a[i][0],a[i][2]);
    }
   
    for(int i = 0; i<n; i++){
        for(int j =0 ; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
