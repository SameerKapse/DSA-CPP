#include <iostream>
using namespace std;
int main(){
    int arr[]={6,7,8,9,11,12,15,16,17,18,19};
     int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0,n=arr[size-1];

    /*for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
     
    int s=(n*(n+1)/2);
    cout<<s-sum;*/

   /* int diff=arr[0]-0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]-i != diff)
        {
          cout<<i+diff;
          break;
        }
        
    }*/
     int diff=arr[0]-0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]-i != diff)
        {
            while (diff<arr[i]-i)//for multiple missing values
            {
                
          cout<<i+diff;
            diff++;
            }
          
        }
        
    }
    
    
    return 0;
}