#include<bits/stdc++.h>
using namespace std;
bool linear_search(int array[],int n,int key){
    if(n==0)
       return false;
    if(array[0]==key)
        return true;
    int reamaingpart=linear_search(array+1,n-1,key);
    return reamaingpart;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    int output=linear_search(array,n,key);
    if(output){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}
