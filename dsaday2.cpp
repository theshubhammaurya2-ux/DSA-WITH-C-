#include<iostream>
using namespace std;


// pointers 


//int main(){



// size of
// cout<<sizeof(int);
// cout<<sizeof(float);
// cout<<sizeof(bool);


// address
// int x=3;
// cout<<&x;
// char x='b';
// cout<<&x;

// pointers
// // creating integer pointer
// int x=4;
// int* poi=&x;
// cout<<&x<<endl;  // both give same address
// cout<<poi;

// // creating float pointer
// float x=4.4;
// float* poi=&x;
// cout<<&x<<endl;  // both give same address
// cout<<poi;


// // creating bool pointer
// bool x=true;
// bool* poi=&x;
// cout<<&x<<endl;  // both give same address
// cout<<poi;

//derefernce operator
// int main(){
// printing the value of adress store in te pointer
// int x=122;
// int* p=&x;
// cout<<*p<<endl;
// x=123;
// cout<<*p;
// }


//updating value with the help of derefernce operator
// int x=122;
// int* poi=&x;
// cout<<*poi<<endl;
// *poi=123;
// cout<<*poi;

// print sum of two number using pointer
// int x=4;
// int y=4;
// int* poi1=&x;
// int* poi2=&y;
// cout<<*poi1+*poi2;
//}

//pass by value pass by refernce
// void swap(int*x,int*y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int main(){
//     int a=5,b=8;
//     swap(&a,&b);
//     cout<<a<<b;
// }


// pass by reference
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }


// int main(){
//   int a,b;
//   cout<<"enter";
//   cin>>a>>b;
//   swap(a,b);
//   cout<<a<<""<<b;
// }



// pointer arithmetic
// increment and decrement
// increment the address
// int main(){
//     bool flag= true;
//     bool* poi=&flag;
//     cout<<*poi<<endl;
//     poi+=1;
//     cout<<*poi;
// }

// // the strange case
// int main(){
// int x=4;
// int* poi=&x;
// cout<<*poi<<endl;
// poi+=1;
// cout<<*poi;
// }

// increment the value
// int main(){
// int x=4;
// int* poi=&x;
// cout<<*poi<<endl;
// *poi+=1;
// *poi=*poi+1;
// cout<<*poi;
// }

//method 2 // keep notice of breaket 
// int main(){
// int x=4;
// int* poi=&x;
// cout<<*poi<<endl;
// *poi+=1;
// (*poi)++;
// cout<<*poi;
// }

// int main(){
// int a=4;
// int* poi=&a;
// int b=++(*poi);
// cout<<a<<" "<<b;
// }


// find first and last digit 
// int main(){
// int n;
// cout<<"enter the number";
// cin>>n;
// int firstno=0;
// int lastno=0;
// lastno=n%10;
// for (int i=1;i<=n;i++){
//     n=n/10;
//     if(n==0){
//         break;
//     }
// }
// firstno=n;

// cout<<firstno<<endl;
// cout<<lastno<<endl;
// }
// //method 2
// int n;
// cout<<"enter the number";
// cin>>n;
// int firstno=0;
// int lastno=0;
// lastno=n%10;
// for (int i=1;n>9;i++){
//     n=n/10;
// }
// firstno=n;

// cout<<firstno<<endl;
// cout<<lastno<<endl;
// }


// by using pointer
// void  fun(int n,int* ptr1,int* ptr2){
//     *ptr2=n%10;
//     while(n>9){
//         n=n/10;
//     }
//     *ptr1=n;
//     return;
// }
// int main(){
// int n;
// cout<<"enter the number";
// cin>>n;
// int firstdigit,lastdigit;
// int* ptr1=&firstdigit;
// int* ptr2=&lastdigit;
// fun(n,ptr1,ptr2);    // fun(n,&firstdigit,&lastdigit);
// cout<<firstdigit<<" "<<lastdigit;

// }

// null pointer
int main(){
// int* ptr=NULL; //or we can use \0 -->null character 
// cout<<ptr;
// }


// double pointer
//to store address of pointer
int x=4;
int* ptr=&x;
int** ptr2=&ptr;
cout<<*ptr;
cout<<**ptr2;
}




















