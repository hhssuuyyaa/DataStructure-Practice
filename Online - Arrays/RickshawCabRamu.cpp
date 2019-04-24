#include<iostream>
using namespace std;
/* Sample Input - 1 test cases, 1-c1 3-c2 7-c3 19-c4
2 Rickshaws, 3 Cabs and 2,5 values in rick array and 4,4,4 in cab array
1
1 3 7 19
2 3
2 5
4 4 4
*/
int main(){
    int t;
    cin>>t;     //No of Test Cases
    int c1,c2,c3,c4;     //Cost
    int n,m  ;   //No of Rickshaws and cabs
    int rick[1005],cab[1005];
    while(t--){
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>rick[i];
        }
        for(int i=0;i<m;i++){
            cin>>cab[i];
        }
        int rickcost = 0;
        for(int i=0;i<n;i++){
            rickcost += min(c1*rick[i],c2);
        }
        rickcost = min(rickcost,c3);

        int cabcost = 0;
        for(int i=0;i<m;i++){
            cabcost += min(c1*cab[i],c2);
        }
        cabcost = min(cabcost,c3);
        int finalans = min(c4,rickcost+cabcost);
        cout<<finalans<<endl;
    }
}
