#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long int arr[100000];
	long long int n;
	long long int x;
	cin>>n;
	for(long long int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long int m;
	cin>>m;
	while(m--){
		cin>>x;
		cout<<arr[x-1]<<endl;
	}
}
