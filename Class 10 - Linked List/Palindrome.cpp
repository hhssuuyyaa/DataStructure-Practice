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
        temp = temp ->next;
    }
}


//TAIL!!!!!!!!!!!!!!!!
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

void buildList(node*&head, int size){
    int data;
    while(size--){
        cin>>data;
        insertAtEnd(head, data);
    }
}

node* reverse(node*head,node*&tail){
    if(head->next == NULL){
        tail = head;
        return head;
    }
    node* newHead = reverse(head->next,tail);
    tail->next=head;
    tail = head;
    tail->next=NULL;
    return newHead;

}
void copy(node*head, node*&newH){
    while(head!=NULL){
        insertAtEnd(newH, head->data);
        head = head->next;
    }
}
bool check(node*head, node*old){
    while(head!=NULL){
        if(head->data != old->data){
            return false;
        }
            head = head->next;
            old = old->next;
    }
    return true;
}
int main() {
   node *head = NULL;
   int size;
   cin>>size;
   buildList(head,size);
   node *old = NULL;
   copy(head,old);
   old = reverse(head,old);
   check(head,old)?cout<<"true":cout<<"false";
}
