#include<iostream>
#include<vector>
using namespace std;
int main(){

//  // matrix multiplication
//  int n;
//  cout<<"enter the no of rows";
//  cin>>n;
//   int m;
//   cout<<"enter the no of column ";
//   cin>>m;

//   int p;
//   cout<<"enter the no of rows of 2nd matrix";
//   cin>>p;
//   int q;
//   cout<<"enter the no of column of 2nd matrix";
//   cin>>q;
   
//   if (m==p){
//       int a[n][m];
    //   int b[p][q];
    //   cout<<"enter the element of first matrix";
    //   for(int i=0;i<=n-1;i++){
    //     for(int j=0;j<=m-1;j++){
    //         cin>>a[i][j];
    //     }
    //   }
//     cout<<"enter the element of 2nd matrix";
//      for(int i=0;i<=p-1;i++){
//         for(int j=0;j<=q-1;j++){
//             cin>>b[i][j];
//         }
//       }
//     // resultant
//       int res[n][q];
//       for(int i=0;i<=n-1;i++){
//         for (int j=0;j<=q-1;j++){
//             res[i][j]=0;
//     // multiply
//             for (int k=0;k<=m-1;k++){
//                  res[i][j]+=a[i][k]*b[k][j]  ;             
//             }
//            }
//       }
//       for(int g=0;g<=n-1;g++){
//         for (int h=0;h<=q-1;h++){
//             cout<<res[g][h]<<" ";
//         }
//   cout<<endl;
//     }
// }
//   else{
//     cout<<"matrix cannot be multiply";
// }
    
// print matrix in wave form
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// wave form 1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13 
//  int n;
//  cout<<"enter the no of rows";
//  cin>>n;
//  int m;
//  cout<<"enter the no of rows";
//  cin>>m;
// int a[n][m];
// cout<<"enter the element of first matrix";
// for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>a[i][j];
//         }
//       }

// for (int i=0;i<n;i++){
//     if((i%2==0)){
//         for (int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//     }
//     else{
//         for(int j=m-1;j>=0;j--){
//             cout<<a[i][j]<<" ";
//         }
//     }
// }


//reverse waveform
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// 13 14 15 16 12 11 10 9 5 6 7 8 4 3 2 1 
//  int n;
//  cout<<"enter the no of rows";
//  cin>>n;
//  int m;
//  cout<<"enter the no of rows";
//  cin>>m;
// int a[n][m];
// cout<<"enter the element of first matrix";
// for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>a[i][j];
//         }
//       }

// for (int i=n-1;i>=0;i--){
//     if((i%2!=0)){
//         for (int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//     }
//     else{
//         for(int j=m-1;j>=0;j--){
//             cout<<a[i][j]<<" ";
//         }
//     }
// }


//column wise waveform 
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// 1 5 9 13 14 10 6 2 3 7 11 15 16 12 8 4 
//  int n;
//  cout<<"enter the no of rows";
//  cin>>n;
//  int m;
//  cout<<"enter the no of rows";
//  cin>>m;
// int a[n][m];
// cout<<"enter the element of first matrix";
// for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>a[i][j];
//         }
//       }

// for (int i=0;i<n;i++){
//     if((i%2==0)){
//         for (int j=0;j<m;j++){
//             cout<<a[j][i]<<" ";
//         }
//     }
//     else{
//         for(int j=m-1;j>=0;j--){
//             cout<<a[j][i]<<" ";
//         }
//     }
// }


// //column wise waveform reverse order
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// 4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1 
//  int n;
//  cout<<"enter the no of rows";
//  cin>>n;
//  int m;
//  cout<<"enter the no of rows";
//  cin>>m;
// int a[n][m];
// cout<<"enter the element of first matrix";
// for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>a[i][j];
//         }
//       }

// for (int i=n-1;i>=0;i--){
//     if((i%2!=0)){
//         for (int j=0;j<m;j++){
//             cout<<a[j][i]<<" ";
//         }
//     }
//     else{
//         for(int j=m-1;j>=0;j--){
//             cout<<a[j][i]<<" ";
//         }
//     }
// }

     
// matrix in spiral form
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
//  int n;
//  cout<<"enter the no of rows";
//  cin>>n;
//  int m;
//  cout<<"enter the no of rows";
//  cin>>m;
// int a[n][m];
// cout<<"enter the element of first matrix";
// for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>a[i][j];
//         }
//       }
// cout<<endl;

// int minr=0,minc=0;
// int maxr=n-1,maxc=m-1;
// while(minr<=maxr &&  minc<=maxc){
//     // right
//     for (int j=minc;j<=maxc;j++){
//         cout<<a[minr][j]<<" ";
//     }
//     minr++;
//     if(minr>maxr || minc>maxc) break;
//     //down
//     for (int i=minr;i<=maxr;i++ ){
//         cout<<a[i][maxc]<<" ";
//     }
//     maxc--;
//     if(minr>maxr || minc>maxc) break;

//     //left
//     for(int i=maxc;i>=minc;i--){
//         cout<<a[maxr][i]<<" ";
//     }
//     maxr--;
//     if(minr>maxr || minc>maxc) break;

//     //up
//     for (int i=maxr;i>=minr;i--){
//         cout<<a[i][minc]<<" ";
//     }
//     minc++;
//     if(minr>maxr || minc>maxc) break;

// }


// method 2
int n;
 cout<<"enter the no of rows";
 cin>>n;
 int m;
 cout<<"enter the no of rows";
 cin>>m;
int a[n][m];
int tne=n*m;
int count=0;
cout<<"enter the element of first matrix";
for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>a[i][j];
        }
      }
cout<<endl;

int minr=0,minc=0;
int maxr=n-1,maxc=m-1;
while(minr<=maxr &&  minc<=maxc){
    // right
    for (int j=minc;j<=maxc && count<tne ;j++){
        cout<<a[minr][j]<<" ";
         count+=1;
    }
    minr++;
  
    //down
    for (int i=minr;i<=maxr&& count<tne;i++ ){
        cout<<a[i][maxc]<<" ";
         count+=1;
    }
    maxc--;


    //left
    for(int i=maxc;i>=minc&& count<tne;i--){
        cout<<a[maxr][i]<<" ";
         count+=1;
    }
    maxr--;


    //up
    for (int i=maxr;i>=minr&& count<tne;i--){
        cout<<a[i][minc]<<" ";
         count+=1;
    }
    minc++;


}
}

