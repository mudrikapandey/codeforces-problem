#include<bits/stdc++.h> 
using namespace std;
 int main()
{
  int test;
  cin>>test;
  while(test--){
    int n,k;
    cin>>n>>k;
    int arr[n],arr1[n];
    for(int i=0; i<n;i++){
      cin>>arr[i];
    }
    for(int i=0; i<n;i++){
      cin>>arr1[i];
    }
    int a = -1;
    int b = 0;
    for(int i=0; i<n;i++){
      if(arr[i]+i<=k){
        if(arr1[i]>b){
          a = i+1;
          b = arr1[i];
        }
      }
    }
cout<< a<<endl;

  }
}