#include <iostream>
using namespace std;
// Given N, find the no set bits (No of 1's in binary represenation)
// Bitwise Operators !
int main() {
	int n;
	cin>>n;
	int ans = 0;
//Suppose N=7 then uska binary form 00111, >> ye operator right se ek ek element nikalega
	for( ;n>0;n=n>>1){
		ans = ans + (n&1);	//& operation 1 add krdega if last bit 1 hgi coz 0 pr 0 return krega.
	}
	cout<<ans <<endl;
	return 0;
}
