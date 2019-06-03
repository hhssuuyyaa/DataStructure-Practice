#include<iostream>
#include<cstring>
using namespace std;
//Wap to find non repetitive number using Bitwise operators
//if we apply xor operation in whole then the number which are same will cancel each other
//5^2 = 101^010 = 111 Now if we again xor it with 5 then it will give me 2 answer cancelling out 5 -> 111^101=010 = 2
//Computer Doesnt perform subtract operations, it do 2's compliment as an alternate
//2's compliment means that invert all bits and add one to it.
//If & of any number with 1 gives 1 then no is odd otherwise if gives 0 then even
//Xor swapping can be done. a=a^b b=b^a a=a^b. Done.
int countBitsFast(int n){
	int count=0;
	while(n){
		count++;
		n = n & (n-1);
	}
	return count;
}

void filterChar(char* a,int no){
	int i=0;
	while(no>0){
		(no&1)?cout<<a[i]:cout<<"";
		i++;
		no=no>>1;
	}
	cout<<endl;
}

void generateSubsets(char* a){
	int n = strlen(a);
	int range = (1<<n)-1;	//Basically if n= abc = 3 hai then 1<<3 = 8 hoga coz 1*2^3
	for(int i=0;i<range;i++){
		filterChar(a,i);
	}
}

int main(){
	char a[100];
	cin>>a;
	cout<<countBitsFast(13)<<endl;
	generateSubsets(a);
}
