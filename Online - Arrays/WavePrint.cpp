#include<iostream>
using namespace std;

void wavePrint(int a[][10],int r,int c){
	//Iterate over columns
	for(int j=0;j<c;j++){
		//Odd column
		if(j&1){
			for(int i=r-1;i>=0;i--){
				cout<<a[i][j]<<" ";
			}
		}else{	//Even column
			for(int i=0;i<r;i++){
				cout<<a[i][j]<<" ";
			}
		}
	}
}

int main(){
	int a[10][10];
	int r,c;
	cin>>r>>c;
	//Read the matrix
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	wavePrint(a,r,c);
}
