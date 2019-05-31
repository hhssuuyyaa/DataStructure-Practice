#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char str[],char delim){
	static char* input = NULL;
	if(str!=NULL){
		input = str;
	}
	if(input==NULL){
		return NULL;
	}
	char* output = new char[strlen(input)+1];
	int i;
	for(i=0;input[i]!='\0';i++){
		if(input[i]!=delim){
			//copy the char into output array
			output[i] = input[i];
		}else{
			//delimiter occurs so break output till it and return and also increment static pointer
			output[i]='\0';
			input = input+i+1;
			return output;	
		}
	}
	//returning the last word if delimiter is not there
	output[i] = '\0';
	input = NULL;		//no need but good practice to set everything to initial state after completion
	return output;
}

int main(){
	char str[] = "I am Goddamn Legend";
	char* ptr;
	ptr = mystrtok(str,' ');
	while(ptr!=NULL){
		cout<<ptr<<endl;
		ptr = mystrtok(NULL,' ');
	}
}
