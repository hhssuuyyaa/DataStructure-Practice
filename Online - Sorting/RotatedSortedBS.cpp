#include<iostream>
using namespace std;

int searchIn(int a[],int s,int e,int key){
	//Base case
	if(s>e){
		return -1;
	}
	//Recursive case
	int mid=(s+e)/2;
	if(a[mid]==key){
		return mid;
	}
	//Step graph bnega pehle increase fir ekdum break hokr usi point se neeche se shuru
	//Mid lies in front line
	if(a[s]<=a[mid]){
		if(a[s]<=key && a[mid]>=key){
			return searchIn(a,s,mid-1,key);
		}else{
			return searchIn(a,mid+1,e,key);
		}
	}
	//Mid lies in second line
	if(a[mid]<=key && a[e]>=key){
		return searchIn(a,mid+1,e,key);
	}
	return searchIn(a,s,mid-1,key);
}
int main(){
	int a[]={5,6,7,1,2,3,4};
	int key;
	cin>>key;
	cout<<"Found at index "<<searchIn(a,0,6,key)<<endl;
	return 0;
}
