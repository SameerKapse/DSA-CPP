#include <iostream>
using namespace std;
int main(){
    
    int n=5;
   for (int  i = 0; i < n; i++)
   {
    for (char j = 'A'; j <= 'A'+(n-i-1); j++)
    {
        cout<<j<<" ";
      
    }
    cout<<endl;
   }
   
    return 0;
}
/*

Output: 

A B C D E 
A B C D 
A B C 
A B 
A 



*/