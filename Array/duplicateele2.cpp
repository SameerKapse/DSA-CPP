
#include <iostream>
using namespace std;
int main(){
    int arr[]={8,3,6,4,6,5,6,8,2,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count;
    for (int  i = 0; i < size-1; i++)
    {
       count=1;
       if (arr[i]!=-1)
       {
        for (int j = i+1; j < size; j++)
        {
                if (arr[i]==arr[j])
                {
                    count++;
                arr[j]=-1;
                }
                
        }
       if (count>1)
       {
        cout<<arr[i]<<" "<<count<<"\n";
       }
       }
    }
    
    return 0;
}