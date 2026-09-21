// functions 
#include<iostream>
#include<cmath>
using namespace std;
// int si(){}
// void sm(){   //function created
//     cout<<"good morning"<<endl;
//     cout<<"how are you"<<endl;

// }
// void startriangle(int x ){
//     for (int i=1;i<=x;i++){
//         for (int j=1;j<=i;j++){
//         cout<<"*";}
//         cout<<endl;
//     }
// }

// int main(){
//     sm();    //function call
//     sm();
//     startriangle(3);
//     cout<<"hello shubham";
//     startriangle(4);
//     startriangle(5);
//    }    





//return meaning
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
//     int x=4;
//     int y=4;
//     cout<<sum(x,y)<<endl;
//     cout<<sum(101,201);
// }


//inbuilt library 
// int main(){
// int b=min(2,3);
// int c=max(2,3);
// float a=sqrt(9.8);
// cout<<a;
// }


//question based on function
//permutation and combination
// without function
// int main(){
//     int n,r;
//     cout<<"enter the  value of n";
//     cin>>n;
//     cout<<"enter r";
//     cin>>r;

//     int fact=1,fact1=1,fact2=1;
//     for (int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//      for (int i=1;i<=r;i++){
//         fact1=fact1*i;
//     }
//      for (int i=1;i<=n-r;i++){
//      fact2=fact2*i;
//     }
//     cout<< fact/(fact1*(fact2));
    
// }


// using function permutation and combination
// int fact(int x){
//     int fact=1;
//     for (int i=1;i<=x;i++){
//         fact=fact*i;

//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//      return ncr;
// }
// int permutation(int n,int r){
//     int npr=fact(n)/fact(n-r);
//        return npr;

// }

// int main(){
//     int n,r;
//     cout<<"enter the  value of n";
//     cin>>n;
//     cout<<"enter r";
//     cin>>r;
//     int npr=permutation(n,r);
//     int ncr=combination(n,r);
//     cout<<ncr<<endl<<npr;
// }





// pascal triangle using function

// int fact(int x){
//     int fact=1;
//     for (int i=1;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//      return ncr;
// }


// int main(){
//     int n;
//     cout<<"enter the  value of n";
//     cin>>n;
   
//  for (int i=0;i<=n;i++){
//     for (int j=0;j<=i;j++){
//         int ncr=combination(i,j);
//         cout<<ncr<<" ";
//     }
//     cout<<endl;
//  }
// }



// pascal optimized important for time complexity 
// int main(){
//     int n;
//     cout<<"enter the  value of n";
//     cin>>n;
//  for (int i=0;i<=n;i++){
//     int curr=1;
//     for (int j=0;j<=i;j++){
//         cout<<curr<<" ";
//         curr=curr*(i-j)/(j+1);
//     }
// cout<<endl;
//  }
// }



// for printing address of variable
// int main function memory located
// int main(){
// int x=4;
// cout<<&x<<endl;
// }


// In void function no adress is there
// void fun(){
//     int x=10;
//     int y=11;
//     cout<<&x;
//     cout<<&y;
// }

// scope of variable
// function  KE  andar koi variable declare hoga to function ke andar access hoga
//to find gretest common factor hcf
//  int main(){
//  int x,y,hcf;
//  cout<<"enter the number";
//  cin>>x;
//  cout<<"enter the 2 number";
//  cin>>y;
//  for (int i=1;i<=(min(x,y));i++){
//     if(x%i==0 && y%i==0){
//         hcf=i;    
//     }
// }
//  cout<<hcf;
//  }






// enter the factorial from number 1 to entered number n
// int facto(int n){
//      int fact=1;
//      for (int i=1;i<=n;i++){
//         fact*=i;
//      }
//      return fact;
// }

// int main(){
// int n;
// cout<<"enter the number";
// cin>>n;
// for (int i=1;i<=n;i++){
//     cout<<facto(i)<<endl;
// }
// }

// swap  two number without usiing a third VARIABLE
// int main(){
// int a;
// cout<<"enter the number";
// cin>>a;
// int b;
// cout<<"enter the 2 number ";
// cin>>b;
// cout<<a<<b<<endl;
// a=a+b;
// b=a-b;
// a=a-b;
// cout<<a<<b;
// }


// swap  two number usiing a third VARIABLE
// int main(){
// int a;
// cout<<"enter the number";
// cin>>a;
// int b;
// cout<<"enter the 2 number ";
// cin>>b;
// cout<<a<<b<<endl;
// int temp;
// temp=a;
// a=b;
// b=temp;
// cout<<a<<b;
// }































































