#include<iostream>
using namespace std;
void display(char a[],int n);
void reversestring(char a[],int n){
    
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-1-i]);
    }
    display(a,n);
}
void uppercase(char a[],int n){
    char temp[n];
    for (int i=0;i<n;i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            temp[i]=a[i]  - 'a' + 'A';
            // temp[i]=char((int(a[i])-32));
        }
        else
            temp[i]=a[i];   
    }
    display(temp,n);

}
bool pallindrome(char a[],int n){
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i])
            return false;
    }
    return true;

}

void display(char a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
}

int main (){
    
    // char ch[6];
    // cout<< "Enter a character: ";
    // cin>> ch;
    // cout<< "The ASCII code for " << ch[5] << " is " << int(ch[5]) << endl;
    // cout<< "printing the character array  " << ch << endl;

    // char chh[6];
    // cout<< "Enter a character: ";
    // cin.getline(chh, 60);
    // cout<< "printing the character array  " << chh << endl;
    // char ch[] = "KiShanJaiswal";
    // int n=13;
    // reversestring(ch,n);
    // uppercase(ch,n);

    // pallindrome checker 

    // char ch[] = "NaON";
    // int n=4;
    // bool flag=pallindrome(ch,n);
    // if(flag)
    //     cout<<"pallindrome ";
    // else 
    //     cout<<"nope ";

    // string name="kishan is good guy ";
    // string name ;
    // cout<<"enter the name ";
    // getline(cin,name);
    // cout<<name<<endl;

    // cout<<name.erase(4,3)<<endl;   // erase the values from the string .erase(index,no. of items to remove )

    string first="kishan jaiswal";
    string middle="kumar ";
    // cout << first.insert(7,middle);  // insert(index,string )

    // first=first.insert(7,middle); 
    // cout<<first <<endl <<middle<<endl;

    // middle.push_back('j');
    // cout<<middle<<endl;
    // middle.pop_back();
    // cout<<middle<<endl;

    string j="kum ";
    // if (middle.find(j)==string :: npos){
    //     cout<<" not found ";
    // }
    // else 
    //     cout<< "found ";

    // if(middle.compare(j)==1)
    //     cout<<"equal";
    // else 
    //     cout<<"not equal";
    string sub=middle.substr(2,3);   // extracts the substring from a string .substr(index,no. of items)
    cout<<sub<<endl<<middle<<endl;



    







    return 0;

}
