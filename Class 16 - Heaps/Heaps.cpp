#include<iostream>
#include<queue>
using namespace std;
int main(){
    //min heap
    //when we push in priority queue it automatically push by heapify method. No need to do it externally
    priority_queue<int,vector<int>,greater<int> >p;
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);
    p.push(60);
    p.push(70);
    p.push(80);
    p.push(90);
    p.push(100);
    while(1){
        int k;
        cin>>k;
        if(k==-1){
            break;
        }
        p.pop();
        p.push(k);
        cout<<p.top()<<endl;
    }
    return 0;
}
