#include<iostream>
#include<queue>
using namespace std;
//Running stream of input.
int main(){
    priority_queue<int>p1;       //max heap
    priority_queue<int,vector<int>,greater<int> >p2;        //min heap
    int x;
    cin>>x;
    int median = INT_MAX;
    while(x!=-1){
        if(p1.size() > p2.size()){      //if p1 ka size bda hai p2 se then we will check if median bda hai then ek element uthakr p2 me daldege and fir p1 me push
            if(x<median){
                p2.push(p1.top());
                p1.pop();
                p1.push(x);
            }else{
                p2.push(x);             //else simply p2 me push
            }
            median = (p1.top()+p2.top())/2;
        }else if(p2.size() > p1.size()){
            if(x>median){
                p1.push(p2.top());
                p2.pop();
                p2.push(x);
            }else{
                p1.push(x);
            }
            median = (p1.top()+p2.top())/2;
        }else{
            if(x<median){
                p1.push(x);
                median = p1.top();
            }else{
                p2.push(x);
                median = p2.top();
            }
        }
        cout<<median<<" ";
        cin>>x;
    }
    //ORDER - nlogn
}
