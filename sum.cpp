/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int sum(int arr[],int n){
    if(n==0)
       return 0;
    if(n==0)
       return arr[0];
    int remaingpart=sum(arr+1,n-1);
    int ans=arr[0]+remaingpart;
    return ans;
}

int main()
{
   int n;
   cin>>n;
   int array[n];
   for(int i=0;i<n;i++){
       cin>>array[i];
   }
   int output=sum(array,n);
   cout<<"sum is equal to = "<<output<<endl;
    return 0;
}
