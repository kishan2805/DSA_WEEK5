#include<iostream>
using namespace std ;

// removing adjecent duplicate 
string removingduplicate(string a, int n){
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1] && a[i-1]>=0){
            a.erase(i-1,2);
            i=i-2;
            n=n-2;
        } 
    }
    return a;

    // on leet code this answer failed the due runtime error as erase has a time complexity of o(N) 
    // while pop and push has a constant time complexity of O(1); 
    // thats why they where selected 


    // string ans = "";
    // int index = 0;
    // while(index < s.length()) {
    //         //same
    //         //ans ka rightmost character and string s ka current character
    //         if(ans.length() > 0 && ans[ans.length()-1] == s[index]) {
    //             //pop from ans string
    //             ans.pop_back();
    //         }
    //         else {
    //             //push
    //             ans.push_back(s[index]);
    //         }
    //         index++;
    //     }
    //     return ans;

}

string removeOccurrences(string s, string part) {
    int n=part.length();
    while(s.find(part) != string::npos){
        s.erase(s.find(part),n);
    }
    return s;
}
// checking for pallindrome 
bool checkPalindrome(string s, int i, int j) {
    while( i<= j) {
        if(s[i] != s[j] ) {
            return false;
        }
        else {
            i++;
            j--;
        }
    }
    return true;
}
// remove atmost 1 charcter to find if its a pallindrome 
bool makingPallindrome(string str){
    // int s=0;
    // int e=str.length()-1;
    // int flag=0;
    // while(s<=e){
    //     if(str[s]!=str[e]){
    //         flag++;
    //         // cout<<flag<<endl;

    //         if (str[s]==str[e-1])
    //         {
    //             str.erase(e,1);
    //             // cout<<"con 2 "<<str<<endl ;
    //         }
    //         else if(str[s+1]==str[e])
    //         {
    //             str.erase(s,1);
    //             // cout<<"cond 1 "<<str<<endl;
    //         }

    //         else
    //             str.erase(s,1);
    //             // cout<<"cond 3 "<<str<<endl;
    //             s--;
    //     }
    //     // cout<<"all good "<<str<<endl;
    //     s++;
    //     e--;
    // }
    // if(flag<=1){
    //     return true;
    // }
    // else
    //     return false;
// method 2 for leet code 
    int i = 0;
    int j = str.length() - 1;

    while( i <= j) {
        if(str[i] == str[j]) {
            i++;
            j--;
        }
        else{
            //s[i]!=s[j]
            //1 removal allowed
            //check plaindrome for remaining string after removal

            //ith character -> remove
            bool ans1 = checkPalindrome(str, i+1, j);
            //jth character -> remove
            bool ans2 = checkPalindrome(str, i, j-1);

            return ans1 || ans2;
        }
    }
    //agar yha tk pohoche ho
    //iska matlab valid palindrome hai
    //iska matlab -> 0 removal
    return true;
}

int move(string str,int i,int j){
    int count=0;
    while(str[i]==str[j] && i >= 0 && j<str.length()){
    // while (i >= 0 && j < str.length() && str[i] == str[j]) {
        i--;
        j++;
        count++;
    }
    return count;
}
int countSubstrings(string s) {
    int total=0;
    // int index=0;
    int odd=0;
    int even=0;
    for(int index=0;index<s.length();index++){
        int i=index;
        // odd
        int j=index;
        odd=move(s,i,j);
        // even
        j=index+1;
        even=move(s,i,j);
        total=even+odd+total;
    }
    return total;
} 

int main (){

    string a="abc";
    // int n=a.length();
    // string temp=removingduplicate(a,n);
    // cout<<temp;

    //  checking if a string  is pallindrome if one or 2 characters are removed 
    bool temp1 = makingPallindrome(a);
    cout<<temp1;

// counting substrings in a given string 
    string alpha="abbaca";
    int claiing=countSubstrings(alpha);
    cout<<claiing;
}