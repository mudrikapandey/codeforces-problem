
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int cnt=0;
    string str ="codeforces";
    string s;
    cin>>s;
for(int i=0;i<10;i++){
  if(s[i]!=str[i]){
    cnt++;
  }
}
    cout<<cnt<<endl;
  }
}
