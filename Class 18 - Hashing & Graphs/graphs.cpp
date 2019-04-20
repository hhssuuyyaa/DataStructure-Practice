#include<iostream>
#include<list>
using namespace std;
class graph{
    int v;      //vertices
    list<int>* l;       //list<int> l[] but since we don't know size to *, ye linked list ka array hai
    //Har ek element ke pas ek Linked List ke head ka address hoga.
public:
    graph(int v){
        this->v=v;
        l = new list<int>[v];       //size lelia user se and then us size ki list ka array
    }
    void addEdge(int src,int dest,bool bidir = false){
        l[src].push_back(dest);         //addEdge(2,1)--------that means 2 wale pr jakr 1 store krdo via LL
        if(bidir){
            l[dest].push_back(src);
        }
    }
    void print(){
        for(int i=0;i<v;i++){
            list<int>::iterator it;
            cout<<i<<" -->";
            for(it = l[i].begin();it!=l[i].end();it++){
                cout<<*it<<" , ";
            }
            cout<<endl;
        }
    }
};
int main(){
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(0,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(3,4);
    g.addEdge(4,2);
    g.print();
}
