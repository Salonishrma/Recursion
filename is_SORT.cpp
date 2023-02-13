/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool issorted(int arr[],int size){
    if(size==0 || size == 1) //their is only one element which is already sorted
       return true; 
       
    if(arr[0]>arr[1])
       return false;
    else{
        bool ans = issorted(arr+1,size-1);
        return ans;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool output=issorted(arr,n);
    if(output){
        cout<<"array is soted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}
