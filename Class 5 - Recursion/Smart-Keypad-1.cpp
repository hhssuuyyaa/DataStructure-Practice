#include<iostream>
using namespace std;

void print(char str[],int inputstr, char out[], int outputstr, char key[10][10]){
	if(str[inputstr]=='\0'){
		for(int i=0;i<outputstr;i++){
			cout<<out[i];
		}
		cout<<endl;
		return;
	}
	int temp;
	if(str[inputstr]=='0')
	temp=0;
	if(str[inputstr]=='1')
	temp=1;
	if(str[inputstr]=='2')
	temp=2;
	if(str[inputstr]=='3')
	temp=3;
	if(str[inputstr]=='4')
	temp=4;
	if(str[inputstr]=='5')
	temp=5;
	if(str[inputstr]=='6')
	temp=6;
	if(str[inputstr]=='7')
	temp=7;
	if(str[inputstr]=='8')
	temp=8;
	if(str[inputstr]=='9')
	temp=9;
	for(int i=0;key[temp][i]!='\0';i++){
		out[outputstr]=key[temp][i];
		print(str,inputstr+1,out,outputstr+1,key);
	}
	return;
}

int main(){
	char str[1000],out[1000];
	cin.getline(str,1000);
	char key[10][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
	print(str,0,out,0,key);
	return 0;
}
