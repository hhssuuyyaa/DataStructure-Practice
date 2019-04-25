#include<iostream>
#include<cstring>
using namespace std;

bool isPermuation(char* s1,char* s2){
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    if(l1!=l2){
        return false;
    }
    //Check for frequency otherwise
    int freq[26] = {0};

    //Iterate over s1
    for(int i=0;i<l1;i++){
        freq[s1[i]-'a']++;
    }

    //Iterate over s2
    for(int i=0;i<l2;i++){
        freq[s2[i]-'a']--;
    }

    //Check if both same or not
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    char s1[100],s2[100];
    cin>>s1>>s2;
    if(isPermuation(s1,s2)){
        cout<<"Yes Permutation"<<endl;
    }else{
        cout<<"Not Permutation"<<endl;
    }
}
