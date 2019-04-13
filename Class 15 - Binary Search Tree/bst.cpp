#include<iostream>
#include<queue>
#include<stack>
int count = 0;
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
    int depth;
    node(int data){
        this->data = data;
        left = right = NULL;
        depth = 0;
    }
};

struct bst{
    node * root;
    int size;

    bst(){
        root=NULL;
        size = 0;
    }
    int Size(){
        return size;
    }
    node * getRoot(){
        return root;
    }
    void setRoot(node * root){
        this->root = root;
    }
    void addElement(int data){
        node * temp = new node(data);
        size++;
        if(!root){
            root = temp;
            return;
        }
        node * it = root;
        while(it!=NULL){
            if(it->data>data){
                // move to left sub tree
                if(it->left==NULL){
                    it->left = temp;
                    return;
                }
                it = it->left;
            }else{
                // move to right subtree
                if(it->right==NULL){
                    it->right = temp;
                    return;
                }
                it = it->right;
            }
        }
    }

    bool search(int data){
        node * it = root;
        while(it){
            if(it->data==data){
                return true;
            }
            if(it->data > data){
                it = it->left;
            }else{
                it = it->right;
            }
        }
        return false;
    }


    void levelOrderPrint(){
    if(root==NULL){
        return;
    }
    queue<node *>q1;
    queue<node *>q2;
    q1.push(root);
    while(!q1.empty() || !q2.empty()){
        if(!q1.empty()){
            //work for q1
            while(!q1.empty()){
                node * top = q1.front();
                cout<<top->data<<" ";
                if(top->left){
                    q2.push(top->left);
                }
                if(top->right){
                    q2.push(top->right);
                }
                q1.pop();
            }
            cout<<endl;
        }else{
        // work for q2
        while(!q2.empty()){
                node * top = q2.front();
                cout<<top->data<<" ";
                if(top->left){
                    q1.push(top->left);
                }
                if(top->right){
                    q1.push(top->right);
                }
                q2.pop();
            }
            cout<<endl;
        }
    }
}

};
node * removeElement(node *& root,int data){
        if(root==NULL){
            return NULL;
        }
        if(root->data==data){
            // remove node
            //no child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }

            // 1 child
            if(root->left && !root->right){
                node * newroot = root->left;
                delete root;
                return newroot;
            }
            if(!root->left && root->right){
                node * newroot = root->right;
                delete root;
                return newroot;
            }

            //2 child
            node * parent = root->right;
            node * it = root->right;
            if(it->left==NULL){
                it->left = root->left;
                delete root;
                return it;
            }
            while(it->left){
                //parent = it;
                it = it->left;
            }
            it->left = root->left;
            delete root;
            return parent;
        }
        if(root->data>data){
            root->left = removeElement(root->left,data);
        }else{
            root->right = removeElement(root->right,data);
        }

        return root;
}
//Inorder traversal kari hai. LNR. Inorder isliye because hume increasing order me krna hai print
void rangeBst(node* root,int k1,int k2){
    if(root==NULL){
        return;
    }
    if(root->data>k1){
        rangeBst(root->left,k1,k2);
    }
    if(root->data >=k1 && root->data<=k2){
        cout<<root->data<<" ";
    }
    if(root->data<k2){
        rangeBst(root->right,k1,k2);
    }
    return;
}

bool isBST(node* root){
    static int prev = INT_MIN;
    if(root==NULL){
        return true;
    }
    bool left = isBST(root->left);
    if(root->data < prev || !left){
        return false;
    }
    prev = root->data;
    bool right = isBST(root->right);
    return right;
}
// 8 10 3 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
int main(){
bst b;
b.addElement(8);
b.addElement(10);
b.addElement(3);
b.addElement(1);
b.addElement(6);
b.addElement(14);
b.addElement(4);
b.addElement(7);
b.addElement(13);
b.addElement(9);
//b.levelOrderPrint();
//cout<<b.search(11);
//cout<<b.search(13);
//cout<<endl;
node * root = b.getRoot();
//root = removeElement(root,8);
//b.setRoot(root);
//rangeBst(root,1,10);

cout<<isBST(root);
}
