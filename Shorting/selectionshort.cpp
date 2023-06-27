#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int min;
    // int indexx;
    for(int i=0;i<n;i++){
        int min=i;
        // min=a[i];

        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                // min=a[j];
                min=j;
            }

        }
        if(min !=i)
        swap(a[i],a[min]);

    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}