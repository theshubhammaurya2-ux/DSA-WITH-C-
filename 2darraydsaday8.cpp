#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace  std;
// int main(){
    // vector< vector<int> > v={{1,2,3},{4,5,6,7,8,9},{5,7,0}};
    // vector< vector<int> > v(3);
    
    // vector<int> v1;
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(6); 
    // vector<int> v2;
    // v1.push_back(2);
    // v1.push_back(9);
    // vector<int> v3;
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(6);
    // v1.push_back(9);

    // //enter vector in 2d vector
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    
    // cout<<v[0][2];


 // 1d array and 2d array differnce in function
//  void change(int a[]){ // we can pass 1darray without assign size
//     a[0]=9;

//  } 
//  void change2d(int arr[3][3]){  // we cannot pass 2d array  without size
//     arr[0][0]=9;

//  }
// int main(){

//     int a[3]={1,2,3};
//     cout<<a[0];
//     change(a);
//     cout<<a[0];


//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<arr[0];
//     change2d( arr);
//     cout<<arr[0];
//}




// change of vector function 
// void change2d(vector< vector<int>>&v){  
//     v[0][0]=9;

//  }


// int main(){
//     vector< vector <int>> v;
//     vector<int> v1;
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(6); 
//     vector<int> v2;
//     v1.push_back(2);
//     v1.push_back(9);
//     vector<int> v3;
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(6);
//     v1.push_back(9);

//     //enter vector in 2d vector
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     cout<<v[0][0]<<endl;
//    change2d(v);
//    cout<<v[0][0]<<endl;

// }


// int main(){
    // vector<int> v(5,3); // size is 5 all element value is 3
    // cout<<v[0]<<endl;
    // cout<<v[1];


// vector< vector <int>> v1(3,vector<int>(4))  // 3rows and 4 column vector
//  3 vector and 4 size 

// int main(){
// vector< vector <int>> v1(3,vector<int>(4,2)) ; // 3rows and 4 column vector with initiall value 2
// cout<<v1.size()<<endl;  // rows
// cout<<v1[0].size()<<endl;  //column
// cout<<v1[1].size()<<endl;  //
// int n=v1.size();
// int m=v1[0].size();
// //printing all the value 
// for (int i=0;i<n;i++){
//     for (int j=0;j<m;j++){
//         cout<<v1[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }

// int main(){
//     int m=5;
//     vector< vector<int> > v;
//     for (int i=1;i<=m;i++){
//         vector<int> a(i);
//         v.push_back(a);
//     }
// // generate
// for (int i=0;i<m;i++){
//     for(int j=0;j<=i;j++){
//         if(j==0 || j==i){
//         v[i][j]=1;
//     }
//     else{
//         v[i][j]=v[i-1][j]+v[i-1][j-1];
//     }
// }
// }
// for (int i=0;i<m;i++){
//     for(int j=0;j<=i;j++){
//     cout<<v[i][j]<<" ";
// }
// cout<<endl;
// }
// }




// 

// flippping matrix two get maximum decimal numb r from binary
void matrixscore(vector<vector<int>> &grid){
int rows =grid.size();
int cols=grid[0].size();
//making the first column all 1
for (int i=0;i<rows;i++){
    if(grid[i][0]==0){
            for(int j=0;j<cols;j++){
                if(grid[i][j]) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }}
    
// }
//   // flip the column where non zero
  for(int j=0;j<cols;j++){
    int noz=0;
    int noo=0;
    for(int i=0;i<rows;i++){
            if (grid[i][j]==0) noz++;
           else noo++; 
    }
  }

 int sum=0;
 for (int i=0;i<rows;i++){
    int x=1;
    for(int j=0;j<cols;j++){
        sum+=grid[i][j]*x;
        x*=2;
    }
 }
cout<<sum;

}

// int main(){
//     vector<vector <int>> v;
//      vector<int> v1;
//      v1.push_back(1);
//      v1.push_back(4);
//      v1.push_back(7);
//      v1.push_back(11);
//      v1.push_back(15);

//      vector<int> v2;
//      v2.push_back(2);
//      v2.push_back(5);
//      v2.push_back(8);
//      v2.push_back(12);
//      v2.push_back(19);

//      vector<int> v3;
//      v3.push_back(3);
//      v3.push_back(6);
//      v3.push_back(9);
//      v3.push_back(16);
//      v3.push_back(22);


//     v.push_back(v1);  
//     v.push_back(v2);
//     v.push_back(v3);
// }




