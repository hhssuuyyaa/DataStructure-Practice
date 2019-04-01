#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

struct node1{
    int data;
    node* next;
    bool visited;
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

int count1(node* head,int count){
    node *temp = head;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

node * findAtPositionK(node * head,int k){
    while(k-- && head){
        head = head->next;
    }
    return head;
}

node* middle1(node* head){
    node* it1 = head;
    node* it2 = head;
    while(it2->next!=NULL && it2->next->next!=NULL){
        it2 = it2->next->next;
        it1 = it1->next;
    }
    return it1;
}

bool recursiveFind(node* head,int element){
    if(head==NULL){
        return false;
    }
    if(head->data == element){
        return true;
    }
    bool x = recursiveFind(head->next,element);
    return x;
}

void swapper(node** head,int i,int j){
    if(i==0 && j==1){
        node* a =*head;
        node* b =a->next;
        node* bnext = b->next;
        *head = b;
        b->next = a;
        a->next = bnext;
        return;
    }else if(i=0){
        node* a = *head;
        node* prevb = findAtPositionK(*head,j-1);
        node* b = prevb->next;
        node* bnext = b->next;
        *head = b;
        b->next = a->next;
        prevb->next = a;
        a->next = bnext;
        return;
    }else if(j-i==1){
        node* preva = findAtPositionK(*head,i-1);
        node* a = preva->next;
        node* b = a->next;
        node* bnext = b->next;
        preva->next = b;
        b->next = a;
        a->next = bnext;
        return;
    }else{
        node* prev1 = findAtPositionK(*head,i-1);
        node* prev2 = findAtPositionK(*head,j-1);
        node* a = prev1->next;
        node* b = prev2->next;
        node *bnext = b->next;
        prev1->next = b;
        b->next = a->next;
        prev2->next = a;
        a->next = bnext;
    }
}

void bubbleSort(node** head){
    int n = count1(*head);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            node* a = findAtPositionK(*head,j);
            node* b = findAtPositionK(*head,j+1);
            if(a->data > b->data){
                swapper(head,j,j+1);
            }
        }
    }
}

node* ithFromLast(node* head,int &i){
    //We can also use static instead of reference passing
    if(head==NULL){
        return NULL;
    }
    node* it = ithFromLast(head->next,i);
    i--;
    if(i==0){
        return head;
    }
    return it;
}

node* reversell(node* head,node* &tail){
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

pair<node*,node*> reversell1(node* head){
    if(head->next == NULL){
        pair<node*,node*> p;
        p.first = head;
        p.second = head;
        return p;
    }
    pair<node*,node*> p = reversell1(head->next);
    p.second->next = head;
    p.second = head;
    head->next = NULL;
    return p;
}

bool isCircular(node1* head){
    while(head){
        if(head->visited==true){
            return true;
        }
        head->visited=true;
        head=head->next;
    }
    return false;
}

int main(){
    node* head;
	cout<<"Enter elements: "<<endl;
	//create Linked List
	createll(head);
	//Print Linked List
	print(head);
	//Print Number of elements
	cout<<count1(head,0);
	//Print Middle Element
	node* temp = middle1(head);
	cout<<endl<<temp->next;
	//Find element Recursively
	int element;
	cin>>element;
	cout<<recursiveFind(head,element);
	swapper(&head,0,1);
	cout<<endl;
	print(head);
	bubbleSort(&head);
	print(head);
	int i;
	cout<<endl;
	cin>>;
	node* temp = ithFromLast(head,i);
	cout<<temp->data<<endl;
	node* tail = 0;
    head = reversell(head,tail);
    print(head);
    cout<<endl;
    pair<node*,node*> p = reversell1(head);
    print(p.first);
    return 0;
}
