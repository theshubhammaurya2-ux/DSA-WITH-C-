#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

// array element in function
// void display(int a[],int size){
//     for (int i=0;i<=size-1;i++){
//         cout<<a[i]<<endl;
//     }
// }
// void change(int ar[],int size){
//  ar[0]=100;
// }
// int main(){
//     //passing array into function
//     int arr[5]={1,2,3,4,54};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     display(arr,size);
//     change(arr,size);
//     display(arr,size);  //when we send array in function we actually send the address of array or address of first element
// }



// array and pointer
// int main(){
// char arra[3]={'a','2','3'};
// int arr[]={1,2,3,4,4,5,67};
// int* ptr=arr;  // first bit address is stored 
// // int* ptr=&arr[0];     // not use &arr without address
// // cout<<ptr<<endl;       // print
// // cout<<ptr[0]<<endl;   // print


//   // modified value no need of derefernce operator
// ptr[0]=8;
// cout<<ptr[0]<<endl;      
// *ptr=9;
// cout<<ptr[0];     


//accessing element
// for (int i=0;i<=6;i++){
//     cout<<ptr[i]<<" ";
//     cout<<arr[i]<<" ";
//     cout<<i[arr]<<" ";
// }

// ptr=arr;// ptr pointing to first value
// *ptr=8; // ptr[0]=8
// ptr++;  // ptr is pointing to second element
// *ptr=9;   
// ptr--;   // ptr get back to first element
// cout<<ptr;

// }

// vectors basic
// int main (){
//     vector<int> v;  //not need to mention the size
//    v.push_back(6);
//    cout<<v.size()<<endl;
//       cout<<v.capacity()<<endl;
//     v.push_back(3);
//        cout<<v.size()<<endl;
//            cout<<v.capacity()<<endl;
//        v.push_back(3);
//         cout<<v.size()<<endl;       // how much it is stored
//             cout<<v.capacity()<<endl;  // how much it can store
//        v.push_back(3);
//         cout<<v.size()<<endl;       // how much it is stored
//             cout<<v.capacity()<<endl; 
//        v.push_back(3);
//         cout<<v.size()<<endl;       // how much it is stored
//             cout<<v.capacity()<<endl; 

//                  v.push_back(63);
//      // if you want to access or update
//      v[0]=81;
//      cout<<v[0];
  
     

// vector<int> vec;
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(167);

// for (int i=0;i<vec.size();i++){  // not equal to size
//     cout<<vec[i]<<endl;
// }
// vec.pop_back();   // remove last element
// for (int i=0;i<vec.size();i++){  // not equal to size
//     cout<<vec[i]<<endl;
// }
// vec.pop_back();
// for (int i=0;i<vec.size();i++){  // not equal to size
//     cout<<vec[i]<<endl;
// }



//  vector<int> v(5);  //size and capacity both are 5
//  v.push_back(2);
//  v.push_back(3);
// cout<<v[5]<<endl;  //only when size is fix
// cout<<v[6]<<endl; 
// cout<<v[4]<<endl; 
//  cout<<v.size()<<" ";
//  cout<<v.capacity();

//  vector<int> v(5,100);  //initial size is 5 and each element has value 7
//  v.push_back(2);
// cout<<v[5]<<endl;  
// cout<<v[4]<<endl;  
//  cout<<v.size()<<" ";
//  cout<<v.capacity();

//taking input in vector
// vector<int> v(5);
// for (int i=0;i<5;i++){
//     cin>>v[i];
// }

// vector<int> v;
// int x;

// while(cin >> x){   // until input ends (EOF)
//     v.push_back(x);
// }
// for (int i=0;i<v.size();i++){
//     cout<<v[i];
// }



// vector<int> v;
// v.push_back(3);
// v.push_back(5567);
// v.push_back(9);
// for (int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
// }
// cout<<endl;
// //sort
// sort(v.begin(),v.end());
// for (int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
// }


// }
// vector in a function
// void change(vector<int>v){
//     v[0]=100;
//     for (int i=0;i<v.size();i++){  //change because it passed new vector is created as addreass is different
//     cout<<v.at(i)<<" ";
// }
// cout<<endl;
// }

// int main(){
// vector<int> v;
// v.push_back(3);
// v.push_back(5567);
// v.push_back(9);
// for (int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" "<<endl;
// }
// change(v);

// for (int i=0;i<v.size();i++){  //not chaNGE for change put &in change function instead of vector<int> v yt vector<int>& v
//     cout<<v.at(i)<<" "<<endl;
// }
// }

// }

// // print index
// int main(){
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(9);
//     int x=5;
//     int indx=-1;
//     for (int i=1;i<v.size();i++){
//        if(v[i]==x) indx=i;

//     }
//   cout<<indx;
//   }


// int main(){
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(9);
//      v.push_back(7);
//     int x=5;
//     int indx=-1;
//     for (int i=v.size()-1;i>=0;i--){
//        if(v[i]==x) {
//         indx=i;
//         break;

//     }
//   cout<<indx;
//   }

// }


//method 2 find sum of array equal to given number
// int main(){
//   int x;
//   cout<<"enter the value of sum";
//    cin>>x;
//    vector<int> v;
//    int n;
//    cout<<"enter araay size";
//    cin>>n;
//    for (int i=0;i<n;i++){
//     int q;
//     cin>>q;
//     v.push_back(q);
//    }
//    for (int i=0;i<=v.size()-2;i++){
//     for (int j=0;j<=v.size()-1;j++){
//       if(v[i]+v[j]==x){
//              cout<<"doublet is  "<<v[i]<<"and"<<v[j]<<endl;
//       }
//     }
//    }
//   }



// reverse a array
// void display(vector<int> & v1){
//   for (int i=0;i<v1.size();i++){
//     cout<<v1[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int> v;
//   v.push_back(4);
//   v.push_back(3);
//   v.push_back(9);
//   v.push_back(8);
//   v.push_back(6);
//   display(v);
//    vector<int> v2;
//   for (int i=v.size()-1;i>=0;i-- ){
//     v2.push_back(v[i]);
    
//   }
//   display(v2);

// }


// reverse a array without uaing extra array
// void display(vector<int> & v1){
//   for (int i=0;i<v1.size();i++){
//     cout<<v1[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int> v;
//   v.push_back(4);
//   v.push_back(3);
//   v.push_back(9);
//   v.push_back(8);
//   v.push_back(6);
//   display(v);

//   int i=0;
//   int j=v.size()-1;
//   while(i<=j){
//     // swap this two element 
//     int temp;
//     temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i=i+1;
//     j=j-1;

//   }
// display(v);
// }



// reverse a part of array
// void display(vector <int>&v){
//   for (int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
//   }
//  void reversepart(int i,int j,vector<int>& v){ // & required
//   while(i<j){
//   int temp=v[i];
//   v[i]=v[j];
//   v[j]=temp;
//   i++;
//   j--;
// }

//  }


//   int main(){
//  vector<int> v;
//  v.push_back(4);
//  v.push_back(2);
//  v.push_back(5);
//  v.push_back(9);
//  v.push_back(0);
//  v.push_back(8);
//  v.push_back(78);
//  display(v);
// reversepart(2,5,v);
//  display(v);
//   }
 //method 1
// int i=0;
// int j=v.size()-2;
// while(i<j){
//   int temp=v[i];
//   v[i]=v[j];
//   v[j]=temp;
//   i++;
//   j--;
// }
// display(v);

//method2
// reverse(v.begin(),v.end());
// display(v);


//method 3
// reversepart(0,5,v);
// display(v);
// }

// rotate the given array by k steps
// void display(vector <int> v){
//   for (int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
//   }
//  void reversepart(int i,int j,vector<int>& v){ // & required
//   while(i<j){
//   int temp=v[i];
//   v[i]=v[j];
//   v[j]=temp;
//   i++;
//   j--;
// }

//  }
// int main(){
//   vector<int> v;
//   v.push_back(1);
//   v.push_back(6);
//   v.push_back(2);
//   v.push_back(5);
//   v.push_back(7);
//   v.push_back(4);
//   display(v);
// int k;
// cout<<"enter the value of rotation or no of step";
// cin>>k;
// int n=v.size();
// reversepart(0,n-k-1,v);
// display(v);
// reversepart(n-k,n-1,v);
// display(v);
// reversepart(0,n-1,v);
// display(v);
// }




















