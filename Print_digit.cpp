
#include <iostream>

using namespace std;
void print_Digit(int n,string array[]){
    if(n==0)
      return ;
    int dig=n%10;
    n=n/10;
    print_Digit(n,array);
   cout<<array[dig]<<endl;
    
}

int main()
{
    string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    print_Digit(n,a);
    cout<<endl;
    return 0;
}
