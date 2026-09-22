#include<iostream>
using namespace std;
int main(){
    
    
    // //creating array method 1
    // int x[10];  //array created from index 0 to 9
    // x[0]=5;
    // x[1]=4;
    // x[2]=5;
    // x[3]=5;
    // cout<<x[2];

     // creating arrray method 2
    // int x[7]={1,3,4,6,89,7,5};
    // cout<<x[4];
    


//    // if you not giving size of array then only ,method 2 is applicable
//   int x[]={1,2,3,4,5,5,6,6};
//   cout<<x[4];


// int x[7]={1,2,3,3,4,5,6};
// for(int i=0;i<=6;i++){
//     cout<<x[i]<<endl;
// }

// taking array input from user
// int x[4];
// cout<<"enter the array element";
// cin>>x[0];
// cin>>x[1];
// cout<<x[0];


//taking array input from user
// int x[4];
// for (int i=0;i<=3;i++){
//    cout<<"enter the array element";
//     cin>>x[i];
// }


// question
// marks less tha 35 print its roll no;
// int main(){
// cout<<"enter the marks of the children";
// int x[10];
// for (int i=0;i<=9;i++){
//     cin>>x[i];
// }

// cout<<"enter the roll no";
// int r[10];
// for (int y=0;y<=9;y++){
//     cin>>r[y];
    
// }
// for (int j=1;j<=9;j++){
//     if(x[j]<=35){
//         cout<<r[j]<<endl;
//     }
// }


//methods 2
// int main(){
// int n;
// cout<<"enter the no of satudent";
// cin>>n;

// int marks[n];
// cout<<"enter the marks";

// for (int y=0;y<=n-1;y++){
//     cin>>marks[y];
    
// }
// for (int j=1;j<=9;j++){
//     if(marks[j]<=35){
//         cout<<j<<endl;
//     }
// }


// size of array
// int arr[]={1,2,3,4,5,6,77,8,9,0,7,5,3,3,2,2};
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<n;

//contious memory allocation
// int arr[]={1,2,3,4,4};
// cout<<&arr[1];
//cout<<&arr; //cout<<arr; cout<<&arr[0];  // first element ka address in arr


// sum of all element of array
// int n,sum=0;
// cout<<"enter ";
// cin>>n;
// int arr[n];
// for (int i=0;i<=n-1;i++){
//     cin>>arr[i];
//     sum=sum+arr[i];
// }
// cout<<sum;


// }




// find the element present in array or not;
// important question checkmark
// int n;
// cout<<"enter the size of array ";
// cin>>n;

// int arr[n];
// for (int i=0;i<=n-1;i++){
//      cin>>arr[i];
//     }
// int s;
// cout<<"enter the element to search ";
// cin>>s; 
// bool flag=false;
// for (int j=0;j<=n-1;j++){
//      if (arr[j]==s){
//       flag=true;
//     }
//     }

// if(flag==true){ cout<<"present";}
// else {cout<<"not found";}
// }



// PRINT MAX ELEMENT OF ARRAY
// int n;
// cout<<"enter the size of array ";
// cin>>n;

// int arr[n];
// for (int i=0;i<=n-1;i++){
//      cin>>arr[i];
//     }
// //method1
// // int max;
// // for (int j=0;j<=n-1;j++){
// //      if (arr[j]>=arr[j-1]){
// //       max=arr[j];
// //     }
// //     }
// //method2
// int max=arr[0];  // max=INT_MIN;
// for (int j=0;j<=n-1;j++){
//      if (max<=arr[j]){
//       max=arr[j];
//     }
//     }
// cout<<max;
// }

// SECOND LARGEST ELEMENT IN ARRAY
// int n;
// cout<<"enter the size of array ";
// cin>>n;

// int arr[n];
// for (int i=0;i<=n-1;i++){
//      cin>>arr[i];
//     }

// int max=arr[0];

// for (int k=0;k<=n-1;k++){
//      if (max<=arr[k]){
//       max=arr[k];
//     }
//     }
// cout<<max<<endl;
// int smax=arr[0];
// for (int j=0;j<=n-1;j++){
//      if (arr[j]!=max && smax<arr[j]){
//       smax=arr[j];
//     }
//     }
// cout<<smax;


}






















































































































































