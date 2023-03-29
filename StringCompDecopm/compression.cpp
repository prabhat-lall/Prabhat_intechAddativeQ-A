#include<bits/stdc++.h>
using namespace std;

string compress1(string s){
    string ans="";
    int n= s.length();
    int count=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
             count++;
        }else{
            ans+=s[i];
            string stri = to_string(count);
            ans+=stri;
            count = 1;
        }
    }
    
    if(count>=1){
        ans+=s[n-1];
        string stri = to_string(count);
        ans+=stri;
    }
    
    return ans;
}

string compress2(string str) {
    string result = "";
    int n = str.length();
    for(int i=0;i<n;i++){
        if(i<n-2 && str[i]==str[i+2]){
            continue;
        }
        result+=str[i];
        
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    cout<<compress1(s);
}