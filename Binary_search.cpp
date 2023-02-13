#include<bits/stdc++.h>
using namespace std;
bool binary_search(int array[],int start,int end,int key){
    if(start>end)
       return false;
    int mid= (start+(end-start))/2;
    if(array[mid]==key)
       return true;
    if(array[mid]<key){
        return binary_search(array,mid+1,end,key);
    }
    else{
        return binary_search(array,start,mid-1,key);
    }
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
    int start,end;
    cin>>start>>end;
    int output=binary_search(array,start,end,key);
    if(output){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}
