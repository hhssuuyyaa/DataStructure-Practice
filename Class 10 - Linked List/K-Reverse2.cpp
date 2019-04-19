#include<iostream>
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
        temp = temp ->next;
    }
}

void insertAtEnd(node*&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail -> next;
    }
    tail->next = new node(data);
    return;
}

void buildList(node*&head,int n){
    int data;
    cin>>data;
    while(n--){
        insertAtEnd(head, data);
        cin>>data;
    }
}

node* reversell(node* head,node* tail){
    if(head->next==NULL){
        tail = head;
        return head;
    }
    node* newhead = reversell(head->next,tail);
    tail->next = head;
    tail = head;
    tail->next = NULL;
    return newhead;
}

void kreverse(node* head,int k){
    node* temp = head;
    node* temp1=head;
    while(--k){
        if(temp->next!=NULL){
            temp=temp->next;
        }
    }
    if(temp->next!=NULL){
        node* temp1 = temp->next;
    }
    temp = reversell(head,temp);
    print(temp);
    //temp->next=temp1;
    //kreverse(temp1,k);
    return;
}

int main() {
   int n,k;
   cin>>n;
   cin>>k;
   node *head = NULL;
   buildList(head,n);
   //print(head);
   kreverse(head,k);
}
