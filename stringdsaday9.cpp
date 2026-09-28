#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    //  char ch='s';
    //     // char ch='\0';
    // cout<<(int)ch;

    // character array only for single character
    // char str[5]={'a','b','c','d','e'};
    
    // // method 1 of printing character array
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }
    // // method 2`
    // cout<<endl;
    // for (int i=0;str[i]!='\0';i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;
    // // method 3
    //     cout<<str<<" ";
    //     cout<<endl;
    // // method 4
    //  char stra[5]={'a','\0','c','d','e'};  // break only in backslash 0
    //       cout<<stra<<" ";

   


    //string  as a data type
    // string str="shubham maurya";
    // cout<<str<<" "; // whole at a time
    // cout<<str[7];   //slice wise

    // taking input in string
    //  string s;
    // method 1 with problem
    //  cin>>s;// give input without space
    // cout<<s;// if you give space in during input it will neglect all character after first space
   
    //method 2 
    // getline(cin,s);  // can give spaces
    // cout<<s;
    // int n;
    //  cin>> n;
    // string s[n];
    // for (int i=0;i<n;i++){
    //     cin>>s[i];
    // }
    // questiopn no1 
    // enter n character and print vowel;
    //  string s="shubham";
    // int count=0;
    // for (int  i=0;s[i]!='\0';i++){
    //     if (s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'){
    //         count +=1;
    //     }
    // }
    //  cout<<"no of vowel"<<count;


    // question 2  string is mutable can change
    // updating string 
    //  string str="shubhan";
    //  cout<<str<<endl;
    //  str[6]='m';
    //  cout<<str;


    //  // enter n character and replace vowel a;
    // string s="shubham";
    // for (int  i=0;s[i]!='\0';i++){
    //     if (s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'){
    //         s[i]='e';
    //     }
    // }
    //  cout<<s;

   
   // built in string
//    string str="shubham is good";

//    //size;
//    cout<<str.size()<<endl;
//     // length
//   cout<<str.length();
//     //pushback
//     cout<<str<<endl;
//     str.push_back('e');  //one more character added to last
//       cout<<str<<endl;
//       //popback
//       str.pop_back();
//       cout<<str;

    // important + operator
    // string s="abc";
    // string t="def";
    // s=s+t;// only we can append string
    // cout<<s<<endl;
    // s=s+"xyz";  // add two laST
    // cout<<s<<endl;
    // s="xyz"+s;  // add two first
    // cout<<s<<endl;
    

    // reverse
    // string str="shubham";
    // cout<<str<<endl;
    // reverse(str.begin(),str.end()); // for reverse #include<algorithm>
    // cout<<str<<endl;

    // reverse(str.begin()+2,str.end()-2); // for reverse #include<algorithm>
    // cout<<str;

    // reverse(str.begin()+2,str.begin()+5); // for reverse #include<algorithm>
    // cout<<str;   // always give one index moresuch that for4 we give 5
   
    
    // reverse first half string of evenlength
//     string s="abcdefghij";
//     // getline(cin,s);
//     //reverse first half
//     int len=s.length();
//     reverse(s.begin(),s.begin()+len/2);
//   cout<<s;


 // substr
//   string s="shubham";
//   cout<<s<<endl;
//   cout<<s.substr(2)<<endl; // from 2 index
//   cout<<s.substr(1,3);


  // to string()
//   int n= 1234;
//   string s=to_string(n);
//   cout<<"a"+s;
     

// count the no of digit
// int x=1234;
// string s=to_string(x);
// cout<<s.length();

 // check anagram
// string s="abcd";
// string s2="acbd";
// sort(s.begin(),s.end());
// sort(s2.begin(),s2.end());
// cout<<s<<endl;
// cout<<s2<<endl;
// if(s==s2){
//     cout<<true;
// }
// else{
//     cout<<false;
// }
                       

}