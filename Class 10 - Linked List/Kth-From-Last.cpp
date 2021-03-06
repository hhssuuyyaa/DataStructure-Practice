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
        cout<<temp->data<<"->";
        temp = temp ->next;
    }
}
void kthNode(node*head, int k){
    node *slow = head;
    node *fast = head;
    for(int i =0; i<k-1; i++){
        fast = fast->next;
    }
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    cout<<slow->data;

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
void buildList(node*&head){
    int data;
    cin>>data;
    while(data!=-1){
        insertAtEnd(head, data);
        cin>>data;
    }
}
int main() {
   node *head = NULL;
   buildList(head);
   int n;
   cin>>n;
   kthNode(head, n);
}
