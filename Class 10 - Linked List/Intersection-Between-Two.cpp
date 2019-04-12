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
int intersectionOfTwo(node* a, node *b , int size1, int size2){
    int difference = abs(size1-size2);
    if(size1>size2){
        while(difference--){
            a = a->next;
        }
    }
    else{
        while(difference--){
            b = b->next;
        }
    }
    while(a!=NULL || b!=NULL){
        if((a->data == b->data)){
            return a->data;
        }
        a = a->next;
        b = b->next;
    }
    return -1;
}

int main() {
  node* head = NULL;
    int size1;
    cin>>size1;
    buildList(head, size1);
    int size2;
    node *head2 = NULL;
    cin>>size2;
    buildList(head2,size2);
    int val;
    val = intersectionOfTwo(head, head2, size1, size2);
    cout<<val;
}
