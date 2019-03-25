#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

void createll(node* &head){
	int value;
	cin>>value;
	if(value!=-1){
		head = new node();
		head->data = value;
		head->next = NULL;	
	}else{
		return;
	}
	node* tail = head;
	cin>>value;
	while(value!=-1){
		node* temp = new node();
		temp->data = value;
		temp->next = NULL;
		tail->next = temp;
		tail = tail->next;
		cin>>value;
	}
	return;
}

void print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL";
}

int main(){
	node* head;
	createll(head);
	print(head);
}
