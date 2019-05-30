#include<iostream>
#include<algorithm>
using namespace std;

bool myCompare(pair<string,int> p1,pair<string,int> p2){
	if(p1.second == p2.second){
		return p1.first < p2.first;
	}
	return p1.second > p2.second;
}

int main(){
	//Input
	int minSalary,n;
	cin>>minSalary;
	pair<string,int> emp[100];
	cin>>n;
	string name;
	int salary;
	for(int i=0;i<n;i++){
		cin>>name>>salary;
		emp[i].first = name;
		emp[i].second = salary;
	}
	
	//Sorting in prefrence Salary>Lexographical Name
	sort(emp,emp+n,myCompare);
	
	//Print
	for(int i=0;i<n;i++){
		if(emp[i].second>minSalary){
			cout<<emp[i].first<<" "<<emp[i].second<<endl;
		}
	}
	return 0;
}
