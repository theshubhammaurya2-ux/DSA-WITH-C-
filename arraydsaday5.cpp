#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// //sortimg array
// void display(vector<int> &v){
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;
// }

// //sorting in descending order
// void sort(vector<int> &v){
//     for(int i=0;i<v.size()-1;i++){
//         for(int j=0;j<v.size()-1;j++){
//             if(v[i]>v[j]){
//               int  temp=v[i];
//               v[i]=v[j];
//               v[j]=temp;

//             }
//         }
//     }
// }


// //sorting in ascending order
// void sorta(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v.size()-1;j++){
//             if(v[j]>v[i]){
//               int  temp=v[i];
//               v[i]=v[j];
//               v[j]=temp;

//             }
//         }
//     }
// }

// int main(){
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(8);
//     v.push_back(7);
//     v.push_back(2);
//     display(v);
//      sort(v);
//      display(v);
//   sorta(v);
//   display(v);
// }





//sorting zero and 1 array
//sortimg array
// void display(vector<int> &v){
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;
// }

// //sorting array
// void sort01(vector<int> &v){
// int n=v.size();
// int noo=0;
// int noz=0;
// for (int i=0;i<n;i++){
//     if(v[i]==0){ noz++;}
//     else{ noo++;}
// }
//  for (int i=0;i<n;i++){
//     if(i<noz) v[i]=0;
//     else v[i]=1;
//  }
// }
// int main(){
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     display(v);
//      sort01(v);
//      display(v);
// }



//sorting zero and 1 array method 2

// void display(vector<int> &v){
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;
// }

// //sorting in ascending order
// void sorta(int i,int j,vector<int> &v){
//   while (i<j){
//     if (v[j]==1) j--;
//     if(v[i]==0) i++;
//     if(v[i]==1 && v[j]==0){
//                int  temp=v[i];
//               v[i]=v[j];
//               v[j]=temp;
//     }
//   }

// }


// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     display(v);
//     int i=0;
//     int j=v.size()-1;
//   sorta(i,j,v);
//    display(v);
// }



// move all megative number to beginning and positive to end with constant extra space
// void display(vector <int> &v){
//   for (int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }
//  void arrange(int i,int j,vector<int> &v){
//    while(i<j){
//     if(v[i]<0) i++;
//     else if (v[j]>=0) j--;
//     if(v[i]>=0 && v[j]<0){
//           int temp =v[i];
//           v[i]=v[j];
//           v[j]=temp;
// }
// // i++;
// // j--;
//    }
//  }

// int main(){
//   vector <int> v;
//   v.push_back(0);
//   v.push_back(-11);
//   v.push_back(-5656);
//   v.push_back(-8);
//   v.push_back(-99);
//   display(v);
//   int i=0;
//   int j=v.size()-1;
//   arrange(i,j,v);
//   display(v);
// }


// sort the array 0 1 and 2 leetcode
// void display(vector <int> &v){
//   for (int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }
//     void sortColors(vector<int>& nums) {
//         // two pass solution
//         int n=nums.size();
//         int noz=0;
//         int noo=0;
//         int nt=0;
//         for (int i=0;i<n;i++){
//             if(nums[i]==0) noz++;
//             else if(nums[i]==1) noo++;
//             else nt++;
//         }
//         //fill
//         for (int i=0;i<n;i++){
//             if(i<noz) nums[i]=0;
//             else if(i<(noz+noo)) nums[i]=1;
//             else nums[i]=2;
//         }
//     }

// // method 2 dutch point algorithm

// int main(){
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//      v.push_back(1); 
//      v.push_back(2);

//     display(v); 
//     sortColors(v);
//     display(v);



// }





























