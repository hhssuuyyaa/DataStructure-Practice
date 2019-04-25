#include<iostream>
using namespace std;

void spiralPrint(int a[][10],int r,int c){
	int startRow=0,endRow=r-1,startCol=0,endCol=c-1;
	while(startRow<=endRow && startCol<=endCol){
		//Print 1st row
		for(int j=startCol;j<=endCol;j++){
			cout<<a[startRow][j]<<" ";
		}
		startRow++;
		
		//Print last Column
		for(int j=startRow;j<=endRow;j++){
			cout<<a[j][endCol]<<" ";
		}
		endCol--;
		
		//Print last row backwards - Make Sure it is printed if endRow > startRow
		if(endRow > startRow){
			for(int j=endCol;j>=startCol;j--){
				cout<<a[endRow][j]<<" ";
			}
			endRow--;
		}
		
		//Print 1st column from down to up - Make sure it is printed if endCol > startCol
		if(endCol > startCol){
			for(int j=endRow;j>=startRow;j--){
				cout<<a[j][startCol]<<" ";
			}
			startCol++;
		}
	} 
}

int main(){
	int a[10][10];
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	spiralPrint(a,r,c);
}
