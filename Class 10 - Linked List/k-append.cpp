#include <iostream>
using namespace std;

class node{
 public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }
};
void print(node* head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtTail(node*&head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void buildList(node*&head, int size){
    int n;
    for(int i=0;i<size; i++){
        cin>>n;
        insertAtTail(head, n);
    }
}
node* appnedLastKElsAtFront(node*head, int k, int N){

    if(k>=N){
        k = k%N;
    }
     if(k<=0){
        return head;
    }
    node* temp = head;
    int i=1;
    int c = N - k;

    while(i<c){
        temp = temp->next;
        i++;
    }
    node *newHead = temp->next;
    node *traverse = newHead;
    c++;
    while(c<N){
        traverse = traverse->next;
        c++;
    }
    traverse->next = head;
    temp->next = NULL;
    return newHead;

}
int main() {
  node* head = NULL;
    int size,key;
    cin>>size;
    buildList(head, size);
    cin>>key;
     node *nr = NULL;
    nr = appnedLastKElsAtFront(head, key, size);
      print(nr);
}
