#include<iostream>
using namespace std;
int main(){



    
    // int marks;
    //  cout<<"enter marks";
    //  cin>>marks;
    //  marks>33 ? cout<<"pass": cout<<"fail";



//switch statement
// int x;
// cout<<"enter the week number";
// cin>>x;
//  switch (x){
//     case 1:
//      cout<<"monday";
//     case 2:
//      cout<<"tuesday";
//     case 3:
//      cout<<"wednesday";
//     case 4:
//      cout<<"thurusday";
//     case 5:
//      cout<<"friday";
//     case 6:
//      cout<<"saturday";
//     case 7:
//      cout<<"sunday";
//  }
// in switches only check one and it print all lie down without checking
//to rectify this we have to do

// int x;
// cout<<"enter the week number";
// cin>>x;
//  switch (x){
//     case 1:
//      cout<<"monday";
//      break;
//     case 2:
//      cout<<"tuesday";
//      break;
//     case 3:
//      cout<<"wednesday";
//      break;
//     case 4:
//      cout<<"thurusday";
//           break;
//      case 5:
//      cout<<"friday";
//      break;
//     case 6:
//      cout<<"saturday";
//      break;
//     case 7:
//      cout<<"sunday";
//      break;
//     default:
//           cout<<"envalid number";
//  }




// month number to get no of days
// 1 3 5 7 8 10 12 -->31days
// 4 6 9 11 --> 30 days
// 2-28 -> 28 days

int x;
cout<<"enter the mont  number";
cin>>x;
switch (x<=7 && x%2!=0){
    case 1:
    cout<<"31 days";
  }
switch(x>=8 && x%2==0){
 case 1:
 cout<<"31 days";
}
switch(x==4 || x==6 || x==9 || x==10 || x==12){
case1:
  cout<<"30 days";

}

// to develop a claculator
// int a,b;
// char op;
// cin>>a>>b>>op;
// if(op=='+') cout<<a+b;
// if(op=='-') cout<<a-b;
// if(op=='*') cout<<a*b;
// if(op=='/') cout<<a/b;



}

