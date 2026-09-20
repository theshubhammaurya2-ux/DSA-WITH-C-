#include<iostream>
using namespace std;
int main(){



//prime no
// int n;
// cout<<"enter the number ";
// cin>>n;
// int count=0;
// for (int i=2;i<n-1;i++){
//   if(n%i==0){
//     count=count+=1;
//     break;
//   }
// }

// if (count!=0){
//   cout<<"its acomposite number";
// }
// else{
//   cout<<"its a prime number";
// }


//prime no
// int n;
// cout<<"enter the number ";
// cin>>n;
// bool flag=true;
// for (int i=2;i<n-1;i++){
//   if(n%i==0){
//     flag=false;
//     break;
//   }
// }
// if (flag==false){
//   cout<<"its acomposite number";
// }
// else{
//   cout<<"its a prime number";
// }



//continue function
//if we remove bracket{} after the for function only one line below it is taking 
// for (int i=1;i<=100;i++){
//     if(i%2!=0){
//       cout<<i<<endl;
//     }
//     else{
//       continue;
//     }
// }




// infinite loop
// int i=1;
// while(i>0){
//   cout<<i<<endl;
//   i=i+1;
// }



// tocount the no of digit
// int n;
// cout<<"enter the number";
// cin>>n;
// int count=0;
// int a=n;
// while(n>0){
// n/=10;
// count=count+1;
// }
// if(a==0){
//   cout<<1;
// }
// else{
// cout<<count;
// }

// //to print sum of digit of number enter
// int n;
// cout<<"enter the number";
// cin>>n;
// int sum=0,c;
// while(n>0){
//   c=n%10;
//   sum=sum+c;
//   n/=10;
// }
// cout<<sum;





// to print reverse number of given number
// int n;
// cout<<"enter the number";
// cin>>n;
// int lastdigit=0,reverse=0;
// while(n>0){
//     reverse*=10;
//     lastdigit=n%10;
//     reverse+=lastdigit;
//     n/=10;
// }
// cout<<reverse;


//error
// int n;
// cout<<"enter the number";
// cin>>n;
// int lastdigit,c=0;
// while(n>0){
//   lastdigit=n%10;
//   for(int i=1;i<=(n);i*=10){
//     c=c+lastdigit*i;
//   }
//   n/=10;
// }



// print 1-2+3-4+5
// int n,sum=0;
// cout<<"enter the number";
// cin>>n;
//  for (int i=1;i<=n;i++){
//     if(i%2!=0){
//         sum+=i;
//    }
//   else{
//     sum-=i;
//   }
// }
// cout<<sum;


// method 2 for above problem
// int n,sum;
// cout<<"enter the number";
// cin>>n;
// sum=-n/2;
// cout<<sum;


//nth fibnoci series 1 1 2 3 5 8 13  21
// int n;
// cout<<"enter the number";
// cin>>n;
// int a=1,b=1,sum=0;
// for (int i=1;i<=n-2;i++){
//     sum=a+b;
//     a=b;
//     b=sum;
// }
// cout<<b;



// a raised to power b 
// int a,b,pow=1;
// cout<<"enter the number";
// cin>>a>>b;

// for (int i=1;i<=b;i++){
//     pow=pow*a;
// }
// cout<<pow;
// if negative power
// float a,b,pow=1;
// cout<<"enter the number";
// cin>>a>>b;
// if(b<0){
//     b=-b;
// }
// for (int i=1;i<=b;i++){
//     pow=pow*a;
// }
// cout<<1/pow;
}



