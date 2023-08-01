#include <iostream>
using namespace std;
int main(){
    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ld=0;
  /*  for (int i = 0; i < size; i++)
    {
        if (arr[i]==arr[i+1] && arr[i]!= ld)
        {
           cout<<arr[i]<<"\n";
           ld=arr[i];
        }
        
    }*/
     for (int i = 0; i < size-1; i++)
    {
        if (arr[i]==arr[i+1] )
        {
            int j=i+1;
             while (arr[j]==arr[i]) j++;
             cout<<arr[i]<<" "<<j-i<<"Times";
             i=j-i; 
               break;
        }
          
    }
    return 0;
}