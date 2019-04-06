#include<iostream>
#include<vector>
using namespace std;
template<typename T>
struct stack{
    private:
    vector<T>v;
public:
    int size(){
        return v.size();
    }
    bool isEmpty(){
        if(v.size()==0){
            return true;
        }
        return false;
        //return v.empty();
    }
    void push(T data){
        v.push_back(data);
        return;
    }
    void pop(){
        if(!isEmpty()){
            v.pop_back();
        }
        return;
    }
    T top(){
        return v[v.size()-1];
    }
};
//REVERSE OF STACK USING JUST 1 EXTRA STACK
void recursive(stack<int>&s,stack<int>&s1){
    if(s.isEmpty()){
        return;
    }
    int data = s.top();
    s.pop();
    recursive(s,s1);
    s1.push(data);
    return;
}
int main(){
    stack<int>s;
    stack<int>s1;
    s.push(3);
    s.push(2);
    s.push(1);
    recursive(s,s1);
    while(!s1.isEmpty()){
        int data = s1.top();
        s1.pop();
        s.push(data);
    }
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
