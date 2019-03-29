#include<iostream>
using namespace std;
bool balance(char s[],int i,int arr[])
{
    if(s[i]=='\0')
    {
        for(int j=0;j<3;j++)
        {
            if(arr[j]!=0)
            return false;
        }
        return true;
    }
    if(s[i]=='(')
    arr[0]++;
    else if(s[i]==')')
    arr[0]--;
    else if(s[i]=='{')
    arr[1]++;
    else if(s[i]=='}')
    arr[1]--;
    else if(s[i]=='[')
    arr[2]++;
    else if(s[i]==']')
    arr[2]--;
    return balance(s,i+1,arr);
}
int main() {
    char s[1000];
    int arr[3]={0};
    cin.getline(s,1000);
    if(balance(s,0,arr))
    cout<<"true";
    else
    cout<<"false";
	return 0;
}
