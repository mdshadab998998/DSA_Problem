// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a[5]={1,2};
//     int s=0;
//     int e=1;
//     int sums=a[s];
//     int sume=a[e];
//     int sum=3;
//     if(sum==sums+sume && sums!=sume){
//         cout<<0;
//     }
//     while(s<=e){
//         if((sums+sume)==sum){
//             // cout<<1;
//             break;
//         }
//         if(sums==sume){
//             s=s+1;
//             sums=sums+a[s];
//         }
//         else if(sums<sume){
//              s=s+1;
//             sums=sums+a[s];

//         }
//         else{
//             e=e-1;
//             sume=sume+a[e];
//         }
//     }
//     // cout<<0;
// }
















// -----------------------maity
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int ans;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        int sum_2=0;
        for(int j=i+1;j<n;j++){
            sum_2 += arr[j];
        }
        if(sum == sum_2){
            ans=1;
            break;
        }
        else{
            ans=0;
        }
    }
    cout<<ans<<endl;
}