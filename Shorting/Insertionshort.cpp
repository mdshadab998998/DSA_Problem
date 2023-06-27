#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int j=1;
while(j<n){
    int k=j;
    while(k>0 && a[k]<a[k-1]){
        swap(a[k],a[k-1]);
        k--;
    }
    j++;
}

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}