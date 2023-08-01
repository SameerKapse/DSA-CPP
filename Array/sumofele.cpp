#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,8,9,10,12,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    int i=0,j=size-1;
    while (i<j)
    {
        if (arr[i]+arr[j]==k)
        {
           cout<<arr[i]<<"+"<<arr[j]<<"="<<k<<"\n";
           i++;
           j--;
        }
        else if (arr[i]+arr[j]<k)
        {
            i++;
        }
        else{
            j--;
        }
        
    }
    
    return 0;
}