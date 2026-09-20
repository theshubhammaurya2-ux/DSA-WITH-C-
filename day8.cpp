#include<iostream>
using namespace std;
// int main(){



//     // for printing square by taking no of rows
//      int n;
//      cout<<"enter the no of rows";
//      cin>>n;
//     //pattern printing
//     for (int i=1;i<=n;i++){
//             cout<<"******"<<endl;

    
//     }
// }
// print square
//      int n;
//      cout<<"enter the no of rows";
//      cin>>n;
//      int m;
//      cout<<"enter the no of column";
//      cin>>m;
//     //pattern printing
//     for (int i=1;i<=n;i++){
//                for (int j=1;j<=m;j++){
//                   cout<<"*";
//                 }
//   cout<<endl;
//     }
// }





// print the given pattern 1 2 3 4
//                         1 2 3 4

// int n;
// cout<<"enter the no of rows ";
// cin>>n;
// int m;
// cout<<"enter the no of column";
// cin>>m;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }



// print the given paatern *
//                         * *
//                         * * *
//
// int n;
// cout<<"enter the no of rows ";
// cin>>n;
// // int m;
// // cout<<"enter the no of column";
// // cin>>m;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//         cout<<"*";
//     }
// cout<<endl;
// }




// print the pattern like * * * *
//                        * * *
//                        * *
//                        *
// int n;
// cout<<"enter the no of rows ";
// cin>>n;
// for(int i=n;i>=1;i--){
//     for (int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }








// for printing  is like 1
//                       1 3
//                       1 3 5
//
// int n;
// cout<<"enter the no of rows ";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=2*i-1;j=j+2){
//         cout<<j;
//     }
//     cout<<endl;
// }


// for printing
// ABCD
// ABCD
// ABCD
// ABCD
// int n;
// cout<<"enter the no of rows ";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j=j+1){
//         cout<<(char)(j+64);
//     }
//     cout<<endl;
// }


//for printing like this
// abcd
// abcd
// abcd
// abcd
// int n;
// cout<<"enter the no of rows ";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j=j+1){
//         cout<<(char)(j+96)<<" ";
//     }
//     cout<<endl;
// }

//print
// a
// ab
// abc
// abcd
// abcde

// int n;
// cout<<"enter the no of rows ";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j=j+1){
//         cout<<(char)(j+96)<<"";
//     }
//     cout<<endl;
// }



//print like
//   *  
//   *  
// *****
//   *  
//   *  

//      int n;
//      cout<<"enter the no of rows";
//      cin>>n;
//      int mid=n/2+1;
//     //pattern printing
//     for (int i=1;i<=n;i++){
//                for (int j=1;j<=n;j++){
//                 if(i==mid || j==mid){
//                   cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//                 }
//   cout<<endl;
//     }


//print
// *   *
//  * * 
//   *  
//  * * 
// *   *


//      int n;
//      cout<<"enter the no of rows";
//      cin>>n;
//     //pattern printing
//     for (int i=1;i<=n;i++){
//                for (int j=1;j<=n;j++){
//                 if((i==j) ||((i+j)==(n+1))){
//                   cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//                 }
//   cout<<endl;
//     }




// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

    //  int n,k=1;
    //  cout<<"enter the no of rows";
    //  cin>>n;
    // //pattern printing
    // for (int i=1;i<=n;i++){
    //            for (int j=1;j<=i;j++){
    //             cout<<k<<" ";
    //             k=k+1;
                
    //             }
//   cout<<endl;
//     }



// 1
// 01
// 101
// 0101

//   int n,k=1;
//      cout<<"enter the no of rows";
//      cin>>n;
//     //pattern printing
//     for (int i=1;i<=n;i++){
//                for (int j=1;j<=i;j++){
//                 if((i+j)%2==0) cout<<1;
//                 else cout<<0;
//                 }
//                 cout<<endl;
//             }

//




// ****
// ***
// **
// *
// //method1
// for (int i=n;i>=1;i--){
//     for (int j=1;j<=i;j++){
//         cout<<"*";    }
//         cout<<endl;
// }
// //method 2
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n+1-i;j++){
//         cout<<"*";    }
//         cout<<endl;
// }


// *
// **
// ***
// ****
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//         cout<<"*";    }
//         cout<<endl;
// }


// ####*
// ###**
// ##***
// #****
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n+1-i;j++){
//         cout<<"#";    }
    
//     for (int k=1;k<=i;k++){
//         cout<<"*";    }
//         cout<<endl;


// }

//     *
//    **
//   ***
//  ****

int main(){
int n=4;
for (int i=1;i<=n;i++){
    for (int j=1;j<=n+1-i;j++){
        cout<<" ";    }
    
    for (int k=1;k<=i;k++){
        cout<<"*";    }
        cout<<endl;


}
}

// int main(){
// int n=4;

// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){

//     if((i+j>n+1)){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
//     }
    

// cout<<endl;
// }
// }











































































