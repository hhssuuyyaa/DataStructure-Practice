#include<iostream>
using namespace std;
//All numbers are occuring three times except one, find that unique number

int unique(int* a, int size){
	int count[64] = {0};
	for(int j=0;j<size;j++){	//Extract bits and store in counter array
		int i=0;				//i represents counter array ki position an j represents Main array ki position
		int no = a[j];
		while(no>0){
			count[i] += (no&1);
			i++;
			no = no>>1;
		}
	}
	//Take mod and compute answer
	int p=1;
	int ans=0;
	for(int i=0;i<64;i++){
		count[i]%=3;
		ans += count[i]*p;
		p=p<<1;
	}
	return ans;
}

int main(){
	int a[]={7,7,3,4,12,3,3,4,6,4,6,7,6};
	int size = sizeof(a)/sizeof(int);
	cout<<unique(a,size);
}
