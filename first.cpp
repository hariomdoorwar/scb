#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

    unordered_map<char,int>mp;
    bool ans=false;

    string s1,s2;

    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++){
        mp[s1[i]]++;
    }

    // int i=0;
   for(int i=0;i<s2.size();i++){
    if(mp.find(s2[i])!=mp.end()){
        ans=true;
        break;
    }
   }

    if(ans==true)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

    return 0;
}