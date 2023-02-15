#include <iostream>

using namespace std;
bool check_palindrom(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
       return check_palindrom(str,i+1,j-1);
    }
    
}
int main()
{
   string str;
   cin>>str;
   int ans=check_palindrom(str,0,str.length()-1);
   if(ans){
       cout<<"yes string is pallindrom";
   }
   else{
       cout<<"string is not pallindrom";
   }

    return 0;
}
