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
node* evenOddList(node* head){

    node *temp = head;
    node *even = NULL;
    node* odd = NULL;
    while(temp!=NULL){
        if(temp->data&1){
            insertAtTail(odd,temp->data);
        }else{
            insertAtTail(even,temp->data);
        }
        temp = temp->next;
    }
    node *newHead = odd;
    while(odd->next!=NULL){
        odd = odd->next;
    }
    odd->next = even;
    return newHead;

}

int main() {
  node* head = NULL;
    int size;
    cin>>size;
    buildList(head, size);
     node *nr = NULL;
    nr = evenOddList(head);
      print(nr);
}
