#include<iostream>
using namespace std;
long long int count(char str[],int i)
{
    if(str[i]=='\0')
    {
        return 1;
    }
    if(str[i]=='6')
    return 4*count(str,i+1);
    else if(str[i]=='8' || str[i]=='9')
    return 2*count(str,i+1);
    else
    return 3*count(str,i+1);
}
void print(char str[],int inputstr,char out[],int outputstr,char key[10][10])
{
    if(str[inputstr]=='\0')
    {
        for(int i=0;i<outputstr;i++)
        {
            cout<<out[i];
        }
        cout<<" ";
        return;
    }
    int temp;
    if(str[inputstr]=='1')
    temp=0;
    else if(str[inputstr]=='2')
    temp=1;
    else if(str[inputstr]=='3')
    temp=2;
    else if(str[inputstr]=='4')
    temp=3;
    else if(str[inputstr]=='5')
    temp=4;
    else if(str[inputstr]=='6')
    temp=5;
    else if(str[inputstr]=='7')
    temp=6;
    else if(str[inputstr]=='8')
    temp=7;
    else if(str[inputstr]=='9')
    temp=8;
    for(int i=0;key[temp][i]!='\0';i++)
    {
        out[outputstr]=key[temp][i];
        print(str,inputstr+1,out,outputstr+1,key);
    }
    return;
}
int main() {
    char str[1000],out[10000];
    cin.getline(str,1000);
    char key[10][10]={"abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
    print(str,0,out,0,key);
    cout<<endl<<count(str,0);
	return 0;
}
