#include<iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main() {  


    
    // //different neighbours
    // string s;
    // cin>>s;
    // int count=0;
    // int n=s.length();

    // for (int i=0;i<n;i++){ 
        
    //     if(n==1){
    //     cout<<count;
    //     break;
    //             }
    //     if(n==2&&(s[0]!=s[1])){
    //         count=1;
    //         break;

    //     }
    //     if(i==0){
    //         if(s[i]!=s[i+1]){
    //             count++;
    //                         }
    //             }
    // else if(i==n-1){
    //     if(s[i]!=s[i-1]){
    //         count++;
    //                     }
    //                 }
    // else if ((s[i]!=s[i+1])&&(s[i]!=s[i-1])){
    //   count+=1;
    //                                         }
    // }
        
    // cout<<count;



// sorting a string using in built function
// string s="name";
// sort(s.begin(),s.end());  
// cout<<s;
// understanding sorting
// string s;
// getline(cin,s);
// sort(s.begin(),s.end());
// cout<<s; // in this if space present than it will come first
//         // arrange according to ascii value order 
//         // if you give A a then A come first 



//check anagram
// string s= "abcd";
// string t= "acbd";
// sort(s.begin(),s.end());
// sort(t.begin(),s.end());
// cout<<s<<endl;
// cout<<t;
// if(s==t){
//     cout<<true;
// }
// else{
//     cout<<false;
// }

// }
// count most number of character and print it
//method1
// string s;
// getline(cin,s);
// int n=s.length();
// int max=0;
// for(int i=0;i<n;i++){
//     char ch=s[i];
//     int count=1;
//     for(int j=i+1;j<n;j++){
//        if( s[j]==s[i]){
//         count++;}
//     }
// if (count>max) max=count;
// }

// for(int i=0;i<n;i++){
//     char  ch=s[i];
//     int count=1;
//     for(int j=i+1;j<n;j++){
//         if(s[j]==s[i]) count++;
//     }
//     if(count==max){
//      cout<<ch<<" "<<max<<endl;
//  }
// }


// // method 2
// string s="shubhammaurya";
// vector <int >arr(26,0);
// for (int  i=0;i<s.length();i++){
//     char ch=s[i];
//     int ascii=(int)ch;
//     arr[ascii-97]++;
// }
// int max=0;
// for (int i=0;i<26;i++){
//     if(arr[i]>max) max=arr[i];
// }
// for (int i=0;i<26;i++){
//     if(arr[i]==max){
//         int ascii=i+97;
//         char ch=(char)ascii;
//         cout<<ch<<" "<<max;
//     }
// }


//string stream
// string s= "shubham maurya is a great  leader";
// stringstream ss(s);
// string temp;

// while(ss>>temp){
//     cout<<temp<<endl;
// }


// quesrion spliting every word of sentence and print ino new line
// string s;
// getline(cin,s);
// stringstream sh(s);
// string temp;
// while(sh>>temp){
//     cout<<temp<<endl;
// }

//question return the word that occur most of time
// string s;
// getline(cin,s);
// stringstream sh(s);
// string temp;
// vector<string> chr;
// while (sh>>temp){
//     chr.push_back(temp);
// }

// // befor sorting
// for (int i=0;i<chr.size();i++){
//    cout<<chr[i]<<endl;
// }

// sort(chr.begin(),chr.end());

// //after sorting
// for (int i=0;i<chr.size();i++){
//    cout<<chr[i]<<endl;
// }

// int maxcount=1;
// int count=1;
// for(int i=1;i<chr.size();i++){
//     if(chr[i]==chr[i-1])  count ++;
//     else count=1;
//     maxcount=max(maxcount,count);

// }

// int count1=1;
// for(int i=1;i<chr.size();i++){
//     if(chr[i]==chr[i-1])  count1 ++;
//     else count1=1;
//     if(count1==maxcount){
//         cout<<chr[i];
//         cout<<maxcount;
//     }
// }


// stoi  for small number in int data type
// string str="123345678";cout<<str;
// int x=stoi(str);
// cout<<x+1; 
// cout<<endl;

// // int a=1234566788;
// // string s=to_string(a);

// // //stolln   for large number in int data type
// string str1 ="123456643554";
// long long  n=stoll(str1);
// cout<<n+3;



//  given n string consisting of n digits from 0 to 9
// return value of index string of maximum value

// string arr[]={"0123","2340","007089"};
// int max=stoi(arr[0]);
//  string maxS=arr[0];
// for(int i=1;i<=2;i++){
//    int x=stoi(arr[i]);
//    if(x>max){
//      max =x;
//     maxS=arr[i];
// }}
// cout<<max;


// input n string and program to found longest common prefix
// #include <iostream>
// #include <vector>
// using namespace std;

// string longestCommonPrefix(vector<string>& strs) {
//     if (strs.empty()) return "";

//     string prefix = strs[0];

//     for (int i = 1; i < strs.size(); i++) {
//         while (strs[i].find(prefix) != 0) {
//             prefix = prefix.substr(0, prefix.length() - 1);
//             if (prefix.empty()) return "";
//         }
//     }
//     return prefix;
// }

// int main() {
//     int n;
//     cout << "Enter number of strings: ";
//     cin >> n;

//     vector<string> strs(n);
//     cout << "Enter strings:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> strs[i];
//     }

//     string result = longestCommonPrefix(strs);
//     cout << "Longest Common Prefix: " << result << endl;

//     return 0;
// }








//given two string s and t check it is isomorphic


    // string s = "eqq";
    // string t = "foo";

    // if (s.length() != t.length()) {
    //     cout << "false";
    //     return 0;
    // }

    // vector<int> mapST(256, -1);
    // vector<int> mapTS(256, -1);

    // for (int i = 0; i < s.length(); i++) {
    //     char c1 = s[i];
    //     char c2 = t[i];

    //     if (mapST[c1] == -1 && mapTS[c2] == -1) {
    //         mapST[c1] = c2;
    //         mapTS[c2] = c1;
    //     }
    //     else {
    //         if (mapST[c1] != c2 || mapTS[c2] != c1) {
    //             cout << "false";
    //             return 0;
    //         }
    //     }
    // }

    // cout << "true";



// given a array of size of n+1 find one of  dublicate element
// int v[]={1,2,3,4,5,6,2,7};
// bool flag=false;
// for (int i=0;i<8;i++){
//     for (int j=i+1;j<8;j++){
//         if(v[i]==v[j]) { 
//             flag=true;
//             if (flag==true){
//                 cout<<v[i];
               
//                     }
//                 }
//             }
    
//         }



// method 2 for dublicate no from 1 to n
// vector<int> v;
// v.push_back(2);
// v.push_back(3);
// v.push_back(2);
// v.push_back(6);
// v.push_back(1);
// v.push_back(7);
// v.push_back(4);
// v.push_back(5);
// int sum=0;
// for (int i=0;i<v.size();i++){
//    sum +=v[i];
// }
// int n=v.size()-1;
// int s=n*(n+1)/2;
// cout<<"missing element"<<sum-s;



}
















































































