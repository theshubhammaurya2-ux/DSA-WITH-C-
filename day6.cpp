#include<iostream>
using namespace std;
int main(){



    //for loop question
    // // enter the number n times
    // int n;
    // cout<<"enter the number";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    // cout<<"good morning"<<endl;
    // cout<<"hello world"<<endl;
     //}
     
// to print number from 1 to n
// int n;
// cout<<"enter the number";
// cin>>n;
//  for (int i=1;i<=n;i++){
//     cout<<i<<endl;
//  }


//to print number from 1 to n
// int n;
// cout<<"enter the number";
// cin>>n;
//  for (int i=1;i<=n;i++){
//     if (i%2==0)
//     { cout<<i<<endl;
//     }
//  }



// print table of 19
// method 1
//  for (int i=1;i<=10;i++){
//     cout<<19*i<<endl;
// }

//method 2
// for (int i=19;i<=190;i+=19){
//     cout<<i<<endl;
// }



// display the ap 1,3,5,7,9
//method 1
// int n;
// cout<<"enter the  number of terms you want to print in aap 1,3,5,7 ";
// cin>>n;
// for (int i=1;i<=(1+(n-1)*2);i+=2){
//     cout<<i<<endl;
// }


// method 2
// int n;
// cout<<"enter the  number of terms you want to print in aap 1,3,5,7 ";
// cin>>n;
// int a=1;
// for (int i=1;i<=n;i++){
//     cout<<a<<endl;
//     a=a+2;
// }

// ap in reverse order 8.6.4.3
// int n;
// cout<<"enter the no of terma you waNT TO PRINT ";
// cin>>n;
// int a=8;
// for (int i=1;i<=n;i++){
//    cout<<a<<endl;
//    a=a-2;
// }


//display ap 100,97,94 upto all terms which are positive
// int n;
// cout<<"enter the no of terma you waNT TO PRINT ";
// cin>>n;
// int a=100;
// for (int i=1;i<=n;i++){
//   if(a>0){
//     cout<<a<<endl;}
//    a=a-3;
// }




// for printing gp 1,2,4,8,16,32
// error in this method
// int n;
// cout<<"enter the  number of terms you want to print in gp 1,2,4,8,16 ";
// cin>>n;
// for (int i=1;i<=1*2**(n-1);i=i*2){
//     cout<<1<<endl;
// }

// // method 2
// int n;
// cout<<"enter the  number of terms you want to print in gp 1,2,4,8,16 ";
// cin>>n;
// int a=1;
// for (int i=1;i<=n;i=i+1){
//     cout<<a<<endl;
//     a=a*2;
// }

//declaring outside
// int i=1;
// for(;i<=8;i++){
//     cout<<i<<endl;
// }

// print all alphabet
// for (int i=65;i<=90;i++){
// cout<<(char)i<<endl;
// }


//while loop give output til condition is true
//  int i=1;
//     while (i<=5)
//     {
//       cout<<"good morning\n";
//       i=i+1;
//     }

    

// do while loop it give atleast one time output
// int i=1;
// do{
// cout<<i<<endl;
// i++;
// } while(i<1);


//to print sum of digit of number enter
int n;
cout<<"enter the number";
cin>>n;
int sum=0,c;
while(n>0){
  c=n%10;
  sum=sum+c;
  n/=10;

}
cout<<sum;



}