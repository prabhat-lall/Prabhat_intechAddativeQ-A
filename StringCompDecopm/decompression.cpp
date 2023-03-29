#include<bits/stdc++.h>
using namespace std;

int stoi(char c){
    return c-48;
}
bool checkInt(char c){
    if(c>48 && c<58){
        return true;
    }
    return false;
}

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

string deCompressString(string str) {
    int n=str.length();
    string result = "";
    int currNumber=0;
    for(int i=n-1;i>=0;i--){
        if(checkInt(str[i])){
            currNumber = stoi(str[i]);
            
        }else{
            for(int j=0;j<currNumber;j++){
                result+=str[i];
            }
        }
    }
    reverseStr(result); 
    return result;

}

int main() {
   string str = "ab2c1ac3";
    cout<<deCompressString(str);

    return 0;
}