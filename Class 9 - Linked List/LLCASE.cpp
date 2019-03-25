#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

//node* tail ya fir esi statement mean h ki ye bs ek block h jo memry hold krega,
//structure ni h ye.
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
	cout<<"NULL"<<endl;
}

void insertatk(node** head,int value,int index){
	node* temp = new node();
	temp->data = value;
	temp->next = NULL;
	if(*head==NULL){
		*head = temp;
	}
	if(index==0){
		temp->next = *head;
		*head = temp;
		return;
	}
	node* tail = *head;
	node* k;
	while(index--){
		k = tail;
		tail = tail->next;
	}

	temp->next = tail;
	k->next = temp;
}

void deleteAtK(node** head,int index){
	node* del;
	if(index==0){
		del = *head;
		*head=del->next;
		delete del;
		return;
	}
	//K ek pointer h jo hmesha tail ke peeche chlega and visualise in copy
	node* tail = *head;
	node* k;
	while(index--){
		k=tail;
		tail=tail->next;
	}
	//delete krna is necessary otherwise it will stay in memory
	del = tail;
	k->next = tail->next;
	delete del;
	return;
}

node * findAtPositionK(node * head,int k){
    while(k-- && head){
        head = head->next;
    }
    return head;
}

int main(){
	node* head;
	cout<<"Enter elements: "<<endl;
	//create Linked List
	createll(head);
	//Print Linked List
	print(head);
	int index;
	cout<<"Enter Index for Insertion: "<<endl;
	cin>>index;
	int element;
	cout<<"Enter Element: "<<endl;
	cin>>element;
	//insert at index k
	insertatk(&head,element,index);
	print(head);
	//delete at index k
	int index1;
	cout<<"Enter Index for Deletion"<<endl;
	cin>>index1;
	deleteAtK(&head,index1);
	print(head);
	int pos;
	cout<<"Enter position to search Linked List: ";
	cin>>pos;
	node * temp = findAtPositionK(head,pos);
    cout<<temp->data<<endl;
}
