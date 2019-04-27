#include<iostream>
#include<cstring>
using namespace std;

//To make our own strtok we need static pointer and dynamic array


int main(){
	char str[] = "Hi, I am God";
	char * ptr;
	ptr = strtok(str," ");		//strtok contains string as first argument and delimiter as second
	while(ptr!=NULL){
		cout<<ptr<<endl;
		ptr = strtok(NULL," ");
	}
}
