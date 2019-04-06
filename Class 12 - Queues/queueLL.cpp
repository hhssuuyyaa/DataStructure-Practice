#include<iostream>
using namespace std;
template<typename T>
struct node{
    T data;
    node * next;
    node(T data){
        this->data = data;
        this->next = NULL;
    }
};

template<typename T>
class queue{
    node<T> * head;
    node<T> * tail;
    int size;
    public:
    queue(){
        head=tail=NULL;
        size = 0;
    }
    int Size(){
        return size;
    }
    void enqueue(int k){
         node<T> * temp = new node<T>(k);
         size++;
         if(tail==NULL){
            head=tail=temp;
            return;
         }else{
            tail->next = temp;
            tail = temp;
            return;
         }
    }
    void dequeue(){
        if(head!=NULL){
            node<T>* temp = head;
            head=head->next;
            delete temp;
            size--;
        }
        return;
    }
    int front(){
        if(head!=NULL){
            return head->data;
        }
        return -1;
    }
};

int main(){
    queue<int>q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    cout<<q.front();
}
