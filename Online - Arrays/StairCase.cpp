#include<iostream>
using namespace std;

void stairCase(int a[][10],int r,int c,int key){
	int i=0;
	int j=c-1;
	//Inside Array
	while(i<r&&j>=0){
		if(a[i][j]==key){
			cout<<"Found at Position "<<i<<","<<j<<endl;
			return;
		}
		else if(a[i][j]>key){
			j--;
		}
		else{
			i++;
		}
	}
	cout<<"Element Not Found";
	return;
}

int main(){
	int a[10][10];
	int r,c;
	cin>>r>>c;
	int key;
	//Read the matrix
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	cin>>key;
	stairCase(a,r,c,key);
}
