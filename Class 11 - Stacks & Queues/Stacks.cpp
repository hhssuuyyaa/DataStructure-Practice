#include<iostream>
#include<vector>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

struct stack{
    private:
        node* head;
        int size;
    public:
        stack(){
            head = NULL;
            size = 0;
        }
        bool isEmpty(){
            return head==NULL;
        }
        int size(){
            return size;
        }
        void push(int data){
            node* temp = new node(data);
            temp->next = head;
            head = temp;
            size++;
            return;
        }
        void pop(){
            if(!isEmpty()){
                node* temp = head;
                head = head->next;
                delete temp;
                size--;
            }
            return;
        }
        int top(){
            if(!isEmpty){
                return head->data;
            }
            return -1;
        }
};

void vectors(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<v[2]<<endl;
    cout<<v.at(2)<<" ";
}

int main(){
    vectors();
}
