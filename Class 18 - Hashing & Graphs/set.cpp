#include<iostream>
#include <map>
using namespace std;
int main(){
    map<string,int>mymap;
    mymap["abc"] = 10;
    mymap["adff"] = 10;
    mymap["faf"] = 10;
    mymap["wfe"] = 10;
    mymap["qda"] = 10;
    map<string,int> :: iterator it;
    for(it=mymap.begin();it!=mymap.end();it++){
        cout<<it->first<<endl;;
    }    //myset.find kisi value pr ruk jayega if exist krta hoga and end wala last tak hoga. if dono same ho then ni mila mtlb
}
