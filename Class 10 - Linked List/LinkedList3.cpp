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
	cout<<"NULL"<<endl;
}

node * findAtPositionK(node * head,int k){
    while(k-- && head){
        head = head->next;
    }
    return head;
}

node* merger(node* a,node* b){
    node* result = NULL;
    //Base Case
    if(a==NULL && b==NULL)
        return NULL;
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    if(a->data <= b->data){
        result = a;
        result->next = merger(a->next,b);
    }else{
        result = b;
        result->next = merger(a,b->next);
    }
    return (result);
}

node* mergeSort(node* head,int start,int end){
    if(start>end){
        return NULL;
    }
    if(start==end){
        return head;
    }
    int mid = (start+end)/2;
    node* midNode = findAtPositionK(head,mid-start);
    node* head1 = head;
    node* head2 = midNode->next;
    //First half ki LL pr end me NULL lga dia and second ke to hoga hi.
    //Necessary otherwise Linked list alag kaise bnegi
    midNode->next = NULL;
    head1 = mergeSort(head1,start,mid);
    head2 = mergeSort(head2,mid+1,end);
    head = merger(head1,head2);
    return head;
}

int main(){
    /*
    //Linked List 1
    node* head;
	cout<<"Enter elements: "<<endl;
	//create Linked List
	createll(head);
	//Print Linked List
	print(head);
	node* temp1 = head;

	//Linked List 2
	node* head1;
	cout<<"Enter elements: "<<endl;
	//create Linked List
	createll(head1);
	//Print Linked List
	print(head1);
	node* temp2 = head1;

	//Result of Merge
	node* result = merger(head,head1);
	print(result);
	*/
	node* head;
	cout<<"Enter elements: "<<endl;
	//create Linked List
	createll(head);
	node* result = mergeSort(head,0,6);
	print(result);
}
