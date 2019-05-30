#include<iostream>
using namespace std;

int pivotSearch(int a[],int s,int e){		//Pivot means Max element
	//Base condition
	if(s>e){
		return -1;
	}
	int mid = (s+e)/2;
	//Example 7 2 3 isme 2 mid hai and if uska left bda hai mid se to uska left wala pivot hoga
	if(a[mid-1]>a[mid]){
		return mid-1;
	}
	//Example 6 7 1 isme 7 mid hai and if uska right bda ni hai mid se to vhi mid pivot hoga
	if(a[mid+1]<a[mid]){
		return mid;
	}
	//Now we will find ki which one is unsorted part. Kuki jo unsorted hoga pivot vhi hoga
	//if start wala bda agya mid se Ex: 7 8 1 2 3 to pivot left side hoga
	if(a[s]>a[mid]){
		return pivotSearch(a,s,mid-1);
	}
	//if end wala chotta agya mid se Ex: 6 7 8 9 1 to pivot right side hoga
	if(a[e]<a[mid]){
		return pivotSearch(a,mid+1,e);
	}
}

int main(){
	int a[]={6,7,8,9,3,4,5};
	int length = sizeof(a)/sizeof(int);
	cout<<"Pivot or Max found at "<<pivotSearch(a,0,length);
}
