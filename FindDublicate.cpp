// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[10]={1,2,3,2,5};
// int n=sizeof(arr[0]);
// int ans=0;
// for(int i=0;i<n;i++){
// ans=ans^arr[i];
// // isme 1st loop mai ans=0^1 matlb ans=1 hogaya
// // 2ns loop mai ans=1^2 matlb ans=3 hogaya
// //3rd loop mai ans=3^3 matlb ans =0 hogaya
// //4th loop mai ans=0^2 matlb ans=2 hogaya
// // bs 4 hi loop chalega kuki n=4 hai tumhara n=aizeof(arr[0])matlb size of 1 or integer ka size 4 hota h

// }
// for(int i=1;i<n;i++){
// ans=ans^i;
// // isme uper se ans=2 aaya hua h
// // 1st loop mai ans=2^1 matlb ans=3 hoga
// //2ns loop mai ans=3^2 matlb ans=1 hoga
// // 3rd loop mai ans=1^3 matlb ans=2 hoga
// //bs 3 hi loop chalega kuki n=4 hai i=1,2,3 hi claega kuki 4 mai i<n yani 4<4 nhi hoga.

// }
// cout<<"Duplicate no: "<<ans<<endl; // yaha pr mera ans=2 ayega kuki uper mai 2 aaya tha
// }


#include<bits/stdc++.h>
using namespace std;
int save_the_prisoner(int n, int m, int s){
    int result=(m%n)+s-1;
    if(result>n){
        result-=n;
    }
    if(result==0){
        return n;
    }
    return result;
}
int main(){
    int x;
    cin>>x;
    int ans=0;
    int ans_array[x];
    for(int i=0;i<x;i++){
        int arr[3];
        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        int n=arr[0];
        int m=arr[1];
        int s=arr[2];
        ans=save_the_prisoner(n,m,s);
        ans_array[i]=ans;
    }
    for(int i=0;i<x;i++){
        cout<<ans_array[i]<<endl;
    }
    
    return 0;
}