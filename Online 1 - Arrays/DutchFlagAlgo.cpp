#include<iostream>
using namespace std;

void dutchFlagSorting(int a[],int start,int end){
	int mid=(start+end)/2;
	while(mid<=end){
		if(a[mid]==1){
			mid++;
		}else if(a[mid]==2){
			swap(a[mid],a[end]);
			end--;
		}else{
			swap(a[mid],a[start]);
			mid++;
			start++;
		}
	}
}

int main(){
	int a[] = {1,1,0,0,2,0,2};
	dutchFlagSorting(a,0,6);
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
}
