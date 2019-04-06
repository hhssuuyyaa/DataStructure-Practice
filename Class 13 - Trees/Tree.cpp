#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        left=right=NULL;
    }
};
node* createBtree(){
    cout<<"Enter data or -1"<<endl;
    int data;
    cin>>data;
    node* root;
    if(data!=-1){
        root = new node(data);
    }else{
        return NULL;
    }
    //we write node* because we need to traverse that q for left and right
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node* top = q.front();
        cout<<"Enter data for left child of "<<top->data<<endl;
        cin>>data;
        if(data!=-1){
            node* temp = new node(data);
            top->left = temp;
            q.push(temp);
        }
        cout<<"Enter data for right child of "<<top->data<<endl;
        cin>>data;
        if(data!=-1){
            node* temp = new node(data);
            top->right = temp;
            q.push(temp);
        }
        q.pop();
    }
    return root;
}
//N=Node(Root), L=Left, R-Right
//PREORDER - NLR
void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}
//POSTORDER - LRN
void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    return;
}
//INORDER - LNR
void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    return;
}

void levelOrder(node* root){
    queue<node *>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        node* top = q.front();
        cout<<top->data<<" ";
        if(top->left){
            q.push(top->left);
        }
        if(top->right){
            q.push(top->right);
        }
        q.pop();
    }
    return;
}

//Number of node greater than integer x
int greaterthanX(node* root,int x){
    if(root==NULL){
        return 0;
    }
    int left = greaterthanX(root->left,x);
    int right = greaterthanX(root->right,x);
    if((root->data)>x){
        return left+right+1;
    }else{
        return left+right;
    }
}

//8 10 3 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
int main(){
    node* root = createBtree();
    cout<<"PreOrder: "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"PostOrder: "<<endl;
    postOrder(root);
    cout<<endl;
    cout<<"InOrder: "<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"LevelOrder: "<<endl;
    levelOrder(root);
    cout<<endl;
    cout<<greaterthanX(root,4);
}
