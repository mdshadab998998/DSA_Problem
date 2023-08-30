// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     int a[6] = {1,-1,1,-1,2,2};
// // //     int X=2;
// // //     long long ans=0;
// // //     vector<int> v;
// // //     for(int i=0;i<6;i++){
// // //         int f=0;
// // //         for(int j=0;j<6;j++){
// // //             if(a[i]==a[j]){
// // //             f++;
// // //             }
// // //         }
// // //         if(f==1){
// // //             v.push_back(a[i]);

// // //         }
// // //     }
// // //     if(v.size()<1){
// // //         cout<<-1;

// // //     }
// // //     // for(auto x:v){
// // //     //     cout<<x<<" ";
// // //     // }
// // //     int s=0;
// // //     int e=X-1;
// // //     while(e<=v.size()-1){
// // //         if(v[s]>v[e]){
// // //              vector <int> tempdouble;
// // //              vector <int> tempsingle;
// // //              vector <int> temp;
// // //             for(int i=s;i<=e;i++){
// // //                 // if(v[i]<0){
// // //                 //     v[i]=v[i]*-1;

// // //                 // }
// // //                 if(v[i]<10 && v[i]>0){
// // //                     tempsingle.push_back(v[i]);
// // //                 }
// // //                 else{
// // //                     if(v[i]<0)
// // //                     tempdouble.push_back(v[i]*-1);
// // //                     else
// // //                     tempdouble.push_back(v[i]);
// // //                 }
// // //                 // cout<<v[i]<<" ";
// // //             }
// // //             cout<<endl;
// // //             sort(tempdouble.begin(),tempdouble.end(),greater<int>());
// // //             // for(auto x: tempdouble){
// // //             //     cout<<x<<"    ";
// // //             // }

            
// // //             sort(tempsingle.begin(),tempsingle.end(),greater<int>());
// // //             // for(auto x: tempsingle){
// // //             //     cout<<x<<" ";
// // //             // }

// // //             temp.insert(temp.begin(),tempsingle.begin(),tempsingle.end());
// // //             temp.insert(temp.end(),tempdouble.begin(),tempdouble.end());
// // //             for(auto x: temp){
// // //                 cout<<x<<" ";
// // //             }
// // //             cout<<"end";
// // //             long long sum=0;
// // //             for(auto x:temp){
// // //                 if(x<10){
// // //                     sum=sum*10+x;
// // //                 }
// // //                 else{
// // //                     sum=sum*100+x;
// // //                     cout<<sum<<" ";
// // //                 }
// // //                 // cout<<x<<"  ";
// // //             }
// // //             cout<<endl;
// // //             if(sum>ans){
// // //                 ans=sum;
// // //                 cout<<ans;
// // //             }
// // //             tempdouble.clear();
// // //             tempsingle.clear();
// // //             temp.clear();

// // //             s=s+1;
// // //             e=e+1;
// // //             // cout<<"  ";
// // //         }
// // //         else{
// // //             s=s+1;
// // //             e=e+1;

// // //         }
// // //     }

// // //     cout<<ans;


// // // }


// // #include <iostream>
// // using namespace std;

// // int solution(int A[], int N, int t, int R) {
// //     // Rotate the windmill t times
// //     for (int i = 0; i < t; i++) {
// //         int temp = A[N - 1];
// //         for (int j = N - 1; j > 0; j--) {
// //             A[j] = A[j - 1];
// //         }
// //         A[0] = temp;
// //     }

// //     int Pe = 0; // Positive energy
// //     int Ne = 0; // Negative energy

// //     // Calculate positive energy (Pe)
// //     for (int i = R; i < N; i++) {
// //         Pe += A[i];
// //     }

// //     // Calculate negative energy (Ne)
// //     for (int i = 0; i < R; i++) {
// //         Ne += A[i];
// //     }

// //     // Calculate resultant energy (Re)
// //     int Re = abs(Pe - Ne);

// //     return Re;
// // }

// // int main() {
// //     int N;
// //     cin >> N;

// //     int A[N];
// //     for (int i = 0; i < N; i++) {
// //         cin >> A[i];
// //     }

// //     int t, R;
// //     cin >> t >> R;

// //     int result = solution(A, N, t, R);
// //     cout << result << endl;

// //     return 0;
// // }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// int find_selected_groom(int N, const std::vector<int>& A, int B, int X, int Y) {
//     // Round 1: Find X grooms closest to the bride's personality-type-number
//     std::vector<int> round1_shortlist(A.begin(), A.end());
//     std::partial_sort(round1_shortlist.begin(), round1_shortlist.begin() + X, round1_shortlist.end(),
//                       [B](int a, int b) { return std::abs(a - B) < std::abs(b - B); });

//     // Round 2: Find Y grooms with the most number of 1s in their binary representation
//     std::vector<int> round2_shortlist(round1_shortlist.begin(), round1_shortlist.begin() + X);
//     std::partial_sort(round2_shortlist.begin(), round2_shortlist.begin() + Y, round2_shortlist.end(),
//                       [](int a, int b) { return __builtin_popcount(a) > __builtin_popcount(b); });

//     // Round 3: Find the groom with the highest GCF with the bride's personality-type-number
//     int max_gcf = -1;
//     std::vector<int> max_gcf_grooms;
//     for (int groom : round2_shortlist) {
//         int gcf = gcd(groom, B);
//         if (gcf > max_gcf) {
//             max_gcf = gcf;
//             max_gcf_grooms.clear();
//             max_gcf_grooms.push_back(groom);
//         } else if (gcf == max_gcf) {
//             max_gcf_grooms.push_back(groom);
//         }
//     }

//     if (max_gcf_grooms.size() == 1) {
//         return max_gcf_grooms[0];
//     } else if (max_gcf_grooms.empty()) {
//         return -1;  // No matching groom found
//     } else {
//         return -3;  // Multiple grooms with the same GCF value
//     }
// }

// int main() {
//     int N = 10;
//     std::vector<int> A = {5, 10, 20, 2, 4, 5, 1, 9, 50, 8};
//     int B = 6;
//     int X = 5;
//     int Y = 3;
//     int selected_groom = find_selected_groom(N, A, B, X, Y);
//     std::cout << selected_groom << std::endl;

//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,10};
    int key=9;
    int f=0;

    for(int i=0;i<10;i++){
        if(a[i]==key){
            cout<<i<<endl;
            f=1;
            break;
        }

    }
    // if(f==0){
    // for(int i=0;i<10;i++){
    //     if(a[i]+1==key){
    //         cout<<i+1;
    //     }
    // }
    }
    
    
}