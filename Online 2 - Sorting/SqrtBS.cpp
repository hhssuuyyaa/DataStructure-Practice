#include<iostream>
using namespace std;

float sqrt(int n,int p){
	int s=0;
	int e=n;
	int mid;
	float ans;
	while(s<=e){
		mid = (s+e)/2;
		if(mid*mid==n){
			ans = mid;
			break;
		}
		if(mid*mid<n){
			ans=mid;
			s=mid+1;
		}else{
			e=mid-1;
		}
	}
	float inc=0.1;
	for(int i=0;i<p;i++){
		while(ans*ans<=n){
			ans+=inc;
		}
		//Above condition will break when 3.X will be bigger than 10. Therefore we need to add one more decimal place till p times
		ans = ans-inc;	//Kuki ek bari extra add hgya while conditon satisfy hone ke bad and hume isse vaps 10 se kam krna hai
		inc = inc/10;
	}
	return ans;
}

//Overall complexity is Log(N+P)
int main(){
	cout<<sqrt(49,2)<<endl;
	cout<<sqrt(10,3)<<endl;
}
