#include<iostream>
using namespace std;

void primeSieve(int *p,int n){
	p[0]=p[1]=0;
	p[2]=1;
	
	//Let us mark all odd numbers as prime (Initialisation)
	for(int i=3;i<=n;i+=2){
		p[i]=1;
	}
	
	//Sieve login to mark non prime numbers as 0
	//Optimisation 1 : Iterate only over odd numbers
	for(int i=3;i<=n;i+=2){
		//If prime
		if(p[i]){
			//Mark all the multiples of prime as not prime
			//Optimisation 2 : i*i isliye because is se pehle ke no cancel out hoge chotto se Example 5 10 15 20 25 isme 5 ko hum direct 25 se check krege as 10->2 se 15->3 se 20->2 se. So 5*5 phla no hga jisse check krna h
			//Optimisation 3 : Do odd ka sum even hota hai therefore hum j+=i ki jgh j+=2i krege taki even pr na jaye
			for(int j=i*i;j<=n;j+=2*i){
				p[j]=0;
			}
		}
	}
	return;
}

int main(){
	int N = 100000;
	int p[N] = {0};
	primeSieve(p,100);
	for(int i=0;i<=100;i++){
		if(p[i]){
			cout<<i<<" ";
		}
	}
}
