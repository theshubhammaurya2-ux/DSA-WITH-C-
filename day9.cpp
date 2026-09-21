#include<iostream>
using namespace std;
int main(){
  
  
//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
//   for (int i=n;i>=1;i--){
//     for (int j=1;j<=i;j++){
//         cout<<"*";
//     }


// cout<<endl;

//   }







//print like
//    *
//   **
//  ***
// ****



//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
//     // spaces
//     for (int i=1;i<=n;i++){
//         //for spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //for triangle
//        for (int k=1;k<=i;k++){
//           cout<<"*";
//        }

//  cout<<endl;

// }


// // rhombus
//    ****
//   ****
//  ****
// ****


    // int n;
    // cout<<"enter the number of rows";
    // cin>>n;
    // // spaces
    // for (int i=1;i<=n;i++){
    //     //for spaces
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     //for triangle
    //    for (int k=1;k<=n;k++){
    //       cout<<"*";
    //    }

//  cout<<endl;



//     }
//print like
// ###*
// ##***
// #*****
// *******
//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
//     // spaces
//     for (int i=1;i<=n;i++){
//         //for spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<"#";
//         }
//         //for triangle
//        for (int k=1;k<i+i;k++){
//           cout<<"*";
//        }
// cout<<endl;
//     }


// print like
//    *
//   ***
//  *****
// *******
//     int n;
//     cout<<"enter the number of rows";
//     cin>>n;
    
//     for (int i=1;i<=n;i++){
//          for(int k=1;k<=n-i;k++){
//             cout<<" ";
//          }
//         for(int j=1;j<=((2*i)-1);j++){
//             cout<<"*";
//         }

// cout<<endl;
//     }

// new method of printing 
//    *
//   ***
//  *****
// *******
// int n;
// cout<<"enter the no of rows";
// cin>>n;
//  int nsp=n-1;
//  int nst=1;
//  for (int k=1;k<=n;k++){
//       for (int i=1;i<=nsp;i++){
//                cout<<" ";
//       }
//          nsp--;
 
//  for (int j=1;j<=nst;j++){
//     cout<<"*";
//  }
 

//  nst+=2;
//  cout<<endl;
 
//  }

//    1
//   12
//  123
// 1234
// int n;
// cout<<"enter the no of rows";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int k=1;k<=n-i;k++){
//         cout<<" ";

//     }
//     for (int j=1;j<=i;j++){
//         cout<<j;
//     }

// cout<<endl;
// }



// 1
// 21
// 321
// 4321

// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=i;j>=1;j--){
//         cout<<j;
//     }

//     cout<<endl;
// }




//     1
//     12
//     123
//     1234
//     12345

// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for(int i=1;i<=n;i++){
//     // for(int k=1;k<=n-1;k++){
//     //     cout<<" ";
//     // }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }

//     cout<<endl;
// }


//    1
//   12
//  123
// 1234
// // only i difference


// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }

//     cout<<endl;
// }



//    11
//   1221
//  123321
// 12344321

// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     for (int q=i;q>=1;q--){
//         cout<<q;
//     }

//     cout<<endl;
// }



//    1
//   121
//  12321
// 1234321
// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     for (int q=i-1;q>=1;q--){
//         cout<<q;
//     }

//     cout<<endl;
// }






//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
// int n;
// cout<<"enter the number";
// cin>>n;
// int nst=1;
// int nsp=n-1;

// for (int i=1;i<=2*n-1;i++){
//     for(int j=1;j<=nsp;j++){
//         cout<<" ";
//     }
//     if(i<=n-1){
//     nsp--;}
//     else{
//         nsp++;
//     }
//       for(int k=1;k<=nst;k++){
//         cout<<"*";
//       }
//     if (i<=n-1){
//    nst=nst+2;}
//    else{
//     nst=nst-2;
//    }

// cout<<endl;

// }

  

// **** ****
// ***   ***
// **     **
// *       *
// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n-i+1;j++){
//         cout<<"*";

//     }
//     for (int k=1;k<=2*i-1;k++){
//         cout<<" ";
//     }
//     for (int l=1;l<=n-i+1;l++){
//         cout<<"*";
//     }
// cout<<endl;

// }



// **********
// ****  ****
// ***    ***
// **      **

// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n-i+2;j++){
//         cout<<"*";

//     }
//     for (int k=1;k<=2*i-2;k++){
//         cout<<" ";
//     }
//     for (int l=1;l<=n-i+2;l++){
//         cout<<"*";
//     }
// cout<<endl;

// }



// 1234512345
// 1234  1234
// 123    123
// 12      12
// int n;
// cout<<"enter the no of rows";
// cin>>n;

// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n-i+2;j++){
//         cout<<j;

//     }
//     for (int k=1;k<=2*i-2;k++){
//         cout<<" ";
//     }
//     for (int l=1;l<=n-i+2;l++){
//         cout<<l;
//     }
// cout<<endl;

// }


// 1234567
// 123 123
// 12   12
// 1     1
// int n;
// cout<<"enter rows";
// cin>>n;
// int m=n-1;
// int nsp=1;
// for (int i=1;i<=2*n-1;i++){
//     cout<<i;
// }
// cout<<endl;
//  for (int i=1;i<=m;i++){
//     for (int j=1;j<=m+1-i;j++){
//         cout<<j;
//     }
//     for (int k=1;k<=nsp;k++){
//         cout<<" ";
//     }
//     nsp+=2;
    
//     for (int j=1;j<=m+1-i;j++){
//         cout<<j;
//     }
// cout<<endl;
//  }


// *
// **
// ***
// ****
// ***
// **
// *


// int main(){
//         int n=4;
//         for (int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout<<"*";
//             }
//           cout<<endl;
//         }
//    for(int k=n-1;k>=1;k--){
//             for(int j=1;j<=k;j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//    }



// int n=4;
// int nsp=n-1;
// int nst=1;
// for(int i=1;i<=(2*n-1);i++){
//    for(int j=1;j<=nsp;j++){
//     cout<<" "; 


//    }    
//    if(i<=n-1) nsp--;
//     else nsp ++;
  
//     for(int k=1;k<=nst;k++){
//     cout<<"*";
   
//    }  
//     if(i<=n-1) nst=nst+2;
//       else nst=nst-2;
//    cout<<endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4; // number of rows for top half

//     // Top pyramid
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++)
//             cout << " ";
//         for (int k = 1; k <= (2 * i - 1); k++)
//             cout << "*";
//         cout << endl;
//     }

//     // Bottom inverted pyramid
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = n; j > i; j--)
//             cout << " ";
//         for (int k = 1; k <= (2 * i - 1); k++)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }



//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

    int n = 4; // number of rows for top half

    // Top pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
           cout << " ";
        for (int k = 1; k <= (2 * i - 1); k++)
         if(k==1 || k== (2 * i - 1))    cout << "*";
         else cout<<" ";
        cout << endl;
    }

    // Bottom inverted pyramid
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int k = 1; k <= (2 * i - 1); k++)
             if(k==1 || k== (2 * i - 1))    cout << "*";
         else cout<<" ";
        cout << endl;
    }

    return 0;
}






















    

















