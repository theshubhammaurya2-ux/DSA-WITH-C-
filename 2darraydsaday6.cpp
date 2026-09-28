#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
  
  // declaration
//     int arr[3][3];
//   arr[0][0]=4;
//   arr[0][1]=5;
//    arr[0][2]=6;

// initialising
// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// cout<<arr[0][0]<<endl;
// int arra[2][2]={1,2,3,4};
// cout<<arra[0][1]<<endl;
// int array[][3]={1,2,3,445,5,5567};  //column is mandatory row is not
// cout<<arra[0][1];


//printing element
// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// for (int i=0;i<=2;i++){
//     for (int j=0;j<=2;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }


// making 2d array by taking input and print it
// int m;
// cout<<"enter no of rows";
// cin>>m;
// int n;
// cout<<"enter the column";
// cin>>n;
//  int arr[m][n];
//  for (int i=0;i<=m-1;i++){
//     for (int j=0;j<=n-1;j++){
//         cin>>arr[i][j];
//     }
//  }
// for (int k=0;k<=m-1;k++){
//     for (int l=0;l<=n-1;l++){
//         cout<<arr[k][l]<<" ";
//     }
//     cout<<endl;
// }



//program to store the roll no and marks of student
// int n=2;
// int m;
// cout<<"enter the no of student";
// cin>>m;
//  int arr[m][n];
//  for (int i=0;i<=m-1;i++){
//     for (int j=0;j<=n-1;j++){
//         cin>>arr[i][j];
//     }
//  }
// for (int k=0;k<=m-1;k++){
//     for (int l=0;l<=n-1;l++){
//         cout<<arr[k][l]<<" ";
//     }
//     cout<<endl;
// }



// PRINTING MAXIMUM OF GIVEN ARRAY
// int m;
// cout<<"enter no of rows";
// cin>>m;
// int n;
// cout<<"enter the column";
// cin>>n;
//  int arr[m][n];
//  for (int i=0;i<=m-1;i++){
//     for (int j=0;j<=n-1;j++){
//         cin>>arr[i][j];
//     }
//  }
//  int max=INT_MIN;
// for (int k=0;k<=m-1;k++){
//     for (int l=0;l<=n-1;l++){
//       if (max<(arr[k][l])){
//         max=arr[k][l];
//       }
//     }
//  }
// cout<<max;


// print all the sum of 2d array
// int m;
// cout<<"enter no of rows";
// cin>>m;
// int n;
// cout<<"enter the column";
// cin>>n;
//  int arr[m][n];
//  for (int i=0;i<=m-1;i++){
//     for (int j=0;j<=n-1;j++){
//         cin>>arr[i][j];
//     }
//  }
// int sum=0;
// for (int k=0;k<=m-1;k++){
//     for (int l=0;l<=n-1;l++){
//       sum=sum+(arr[k][l]);
//       }
//     }
// cout<<sum;



//program to add two matrix of same order
// int m;
// cout<<"enter no of rows";
// cin>>m;
// int n;
// cout<<"enter the column";
// cin>>n;
//  int arr[m][n];
//  for (int i=0;i<=m-1;i++){
//     for (int j=0;j<=n-1;j++){
//         cin>>arr[i][j];
//     }
//  }
// int q;
// cout<<"enter no of rows";
// cin>>q;
// int p;
// cout<<"enter the column";
// cin>>p;
//  int arra[q][p];
//  for (int i=0;i<=q-1;i++){
//     for (int j=0;j<=p-1;j++){
//         cin>>arra[i][j];
//     }
//  }
// int array[q][p];
// for (int a=0;a<=q-1;a++){
//     for( int b=0;b<=p-1;b++){
//         array[a][b]=((arr[a][b])+(arra[a][b]));
//     }
// }
// for (int k=0;k<=q-1;k++){
//     for (int l=0;l<=p-1;l++){
//         cout<<array[k][l]<<" ";
//     }
//     cout<<endl;
// }



// print the transpose of given matrix
//method 1
// int p;
// cout<<"enter the no of rows";
// cin>>p;
// int q;
// cout<<"enter the no of column";
// cin>>q;
// int arr[p][q];
// for (int i=0;i<=p-1;i++){
//     for(int j=0;j<=q-1;j++){
//         cin>>arr[i][j];
//     }
// } 
// for (int a=0;a<=q-1;a++){
//     for(int b=0;b<=p-1;b++){
//         cout<<arr[a][b]<<" ";
//     }
//     cout<<endl;
// }

// for (int b=0;b<=p-1;b++){
//     for(int a=0;a<=q-1;a++){
//         cout<<arr[a][b]<<" ";
//     }
//     cout<<endl;
// }

//method 2
// int p;
// cout<<"enter the no of rows";
// cin>>p;
// int q;
// cout<<"enter the no of column";
// cin>>q;
// int arr[p][q];
// for (int i=0;i<=p-1;i++){
//     for(int j=0;j<=q-1;j++){
//         cin>>arr[i][j];
//     }
// } 
// for (int a=0;a<=q-1;a++){
//     for(int b=0;b<=p-1;b++){
//         cout<<arr[a][b]<<" ";
//     }
//     cout<<endl;
// }

 

// for (int k=0;k<=q-1;k++){
//     for (int l=k+1;l<=p-1;l++){
//         int temp=arr[k][l];
//         arr[k][l]=arr[l][k];
//         arr[l][k]=temp;
//     }
// }
// for (int a=0;a<=q-1;a++){
//     for(int b=0;b<=p-1;b++){
//         cout<<arr[a][b]<<" ";
//     }
//     cout<<endl;
// }


//print transpose and store it in new metrix 
// int p;
// cout<<"enter the no of rows";
// cin>>p;
// int q;
// cout<<"enter the no of column";
// cin>>q;


// int arr[p][q];
// for (int i=0;i<=p-1;i++){
//     for(int j=0;j<=q-1;j++){
//         cin>>arr[i][j];
//     }} 
// for (int a=0;a<=q-1;a++){
//     for(int b=0;b<=p-1;b++){
//         cout<<arr[a][b]<<" ";
//     }
//     cout<<endl;}

//  int arra[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int q=3,p=3;
// for (int i=0;i<=p-1;i++){
//     for(int j=0;j<=q-1;j++){
//         arra[i][j]=arra[j][i];
//     }} 
// for (int a=0;a<=q-1;a++){
//     for(int b=0;b<=p-1;b++){
//         cout<<arra[a][b]<<" ";
//     }
//     cout<<endl;}



// rotate array by 90 degree first transpose then take reverse of each row
// // int p;
// // cout<<"enter the no of rows";
// // cin>>p;
// // int q;
// // cout<<"enter the no of column";
// // cin>>q;
// // int arr[p][q];
//  int arr[4][4]={{1,2,3,56},{4,5,6,56},{7,8,9,57},{10,11,12,13}};
// int q=4,p=4;
// // for (int i=0;i<=p-1;i++){
// //     for(int j=0;j<=q-1;j++){
// //         cin>>arr[i][j];
// //     }
// // }
// for (int k=0;k<=q-1;k++){
//     //swap or transpose
//     for (int l=k+1;l<=p-1;l++){
//         int temp=arr[k][l];
//         arr[k][l]=arr[l][k];
//         arr[l][k]=temp;
//     }
// }

// // for (int i=0;i<=q-1;i++){
// //     for(int j=0;j<=p-1;j++){
// //         arr[i][j]=arr[j][i];
// //     }} 
// // reverse each row
// for(int c=0;c<=q-1;c++ ){
//     int i=0;
//     int j=q-1;
//     while (i<j){
//           int temp=arr[c][i];
//           arr[c][i]=arr[c][j];
//           arr[c][j]=temp;
//           i++;
//           j--;
//     }
// }
// for (int a=0;a<=q-1;a++){
//     for(int b=0;b<=p-1;b++){
//         cout<<arr[a][b]<<" ";
//     }
//     cout<<endl;
// }

// int p;
// cout<<"enter the no of rows";
// cin>>p;
// int q;
// cout<<"enter the no of column";
// cin>>q;
// int arr[p][q];
// for (int i=0;i<=p-1;i++){
//     for(int j=0;j<=q-1;j++){
//         cin>>arr[i][j];
//     }
// }
// for (int k=0;k<=q-1;k++){
//     //swap or transpose
//     for (int l=k+1;l<=p-1;l++){
//         int temp=arr[k][l];
//         arr[k][l]=arr[l][k];
//         arr[l][k]=temp;
//     }
// }


// for(int c=0;c<=q-1;c++ ){
//     int i=0;
//     int j=q-1;
//     while (i<j){
//           int temp=arr[c][i];
//           arr[c][i]=arr[c][j];
//           arr[c][j]=temp;
//           i++;
//           j--;
//     }
// }
// for (int a=0;a<=q-1;a++){
//     for(int b=0;b<=p-1;b++){
//         cout<<arr[a][b]<<" ";
//     }
//     cout<<endl;
// }



}