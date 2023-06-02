#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[4]={1,3,3,2};
   int unique[3]={0};
   int sum=0;
   for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
        if(a[i]==a[j]){
            sum=sum-2*a[i];
        }
    }

    sum=sum+a[i];

   }
   cout<<sum;
}