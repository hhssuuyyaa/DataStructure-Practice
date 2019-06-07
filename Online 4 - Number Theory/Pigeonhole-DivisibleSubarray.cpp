#include<iostream>
#include<cstring>
using namespace std;
#define ll long long

ll a[1000005], prefixSum[1000005];

int main(){
	int t;
	//No of test cases
	cin>>t;
	while(t--){
		//No of elements in array
		int n;
		cin>>n;
		ll sum=0;
		memset(prefixSum,0,sizeof prefixSum); 	//We can also use for loop to store 0 in prefixSum initially
		prefixSum[0]=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			sum%=n;
			sum=(sum+n)%n;
			//First make the no positive
			//Update the frequency
			prefixSum[sum]++;
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			//cout<<prefixSum[i]<<" ";
			ll no = prefixSum[i];
			ans += ((no)*(no-1)/2);
		}
		cout<<ans<<endl;
	}
}
//Gives no of subbarrays that are equal to N where N is size of array
