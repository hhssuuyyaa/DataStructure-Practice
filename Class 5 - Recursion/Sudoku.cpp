#include<iostream>
#include<cmath>
using namespace std;

bool canPlace(int mat[][9],int i,int j,int n,int number){
	for(int x=0;x<n;x++){
		//Row and Column check
		if(mat[x][j]==number||mat[i][x]==number){
			return false;
		}
	}
	int rn = sqrt(n);
	int sx = (i/rn)*rn;
	int sy = (j/rn)*rn;
	//Iterate in 3x3 Grid
	for(int x=sx;x<sx+rn;x++){
		for(int y=sy;y<sy+rn;y++){
			if(mat[x][y]==number){
				return false;
			}
		}
	}
	return true;
}

bool solveSudoku(int mat[][9],int i,int j,int n){
	//Base Case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	//Case End of row
	if(j==n){
		return solveSudoku(mat,i+1,0,n);
	}
	//Skip the pre-filled cells
	if(mat[i][j]!=0){
		return solveSudoku(mat,i,j+1,n);
	}
	//Recursive Case
	//Fill the current cell with possible options
	for(int number=1;number<=n;number++){
		if(canPlace(mat,i,j,n,number)){
			//Assume the number we put is right
			mat[i][j]=number;
			bool couldwesolve = solveSudoku(mat,i,j+1,n);
			if(couldwesolve==true){
				return true;
			}
		}
	}
	//Backtrack step
	mat[i][j]=0;
	return false;
}

int main(){
    int mat[9][9];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
	solveSudoku(mat,0,0,9);
	return 0;
}
