#include<iostream>
using namespace std ;

int check(string old,int new1,char a){
    int i=0;
    // cout<<"entering the check block "<<endl;
   
    while(a!=old[i]&&i<old.length()){
        i++;
    }
    if (i==old.length()-1)
        return new1;      //unique element
    else if(i<old.length()){
        cout<<i<<endl;
        return i ;         // already existing element
    }    
}

string encode(string quest){
    string newstr="";
    int beta=0;
    char b;
    string encoder="abcdefghijklmnopqrstuvwxyz";
    for (int i=0;i<quest.length();i++){
        if (quest[i]==' '){
            b=' ';
            newstr.insert(i,1,b);
        }
        else {
            int alpha=check(quest,beta,quest[i]);
            if (quest[i]!=' '){
                if(alpha==i){
                    // unique element
                    b=encoder[beta];
                    beta++;
                    newstr.insert(i,1,b);
                }
                else{
                    // already existing 
                    b=encoder[alpha];
                    newstr.insert(i,1,b);
                }

            }

        }
    }
    return newstr;
}

int main(){

    string quest="kishan kumar jaiswal";
    string newstr=encode(quest);
    cout<<quest<<endl;
    cout<<newstr<<endl;
    
}