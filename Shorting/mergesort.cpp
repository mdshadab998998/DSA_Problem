#include<iostream>
using namespace std;
void conquer(int a[],int s,int mid,int e){
    int merge[e-s+1];
    int index1=s;
    int index2=mid+1;
    int x=0;
    while(index1<=mid && index2<=e){
        if(a[index1]<=a[index2]){
            merge[x++]=a[index1++];
        }
        else{
            merge[x++]=a[index2++];
        }
    }
    while(index1<=mid){
        merge[x++]=a[index1++];
    }
    while (index2<=e)
    {
        merge[x++]=a[index2++];
    }
    for(int i=0,j=s;i<sizeof(merge)/sizeof(merge[0]);i++,j++){
        a[j]=merge[i];

    }
    
}
void divide(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    divide(a,s,mid);
    divide(a,mid+1,e);
    conquer(a,s,mid,e);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    divide(a,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}