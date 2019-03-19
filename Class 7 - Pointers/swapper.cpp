#include<iostream>
using namespace std;

int main(){
	int x = 10;
	int y = 20;
	int *a = &x;
	int *b = &y;
	*a = (*a)+(*b);
	*b = (*a)-(*b);
	*a = (*a)-(*b);
	cout<<x<<endl<<y;
}
