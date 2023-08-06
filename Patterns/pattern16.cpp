#include <iostream>
using namespace std;
int main(){
    
    int n=5;
   for (int  i = 0; i < n; i++)
   { char ch='A'+i;
    for (char j = 0; j <= i; j++)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
   }
    return 0;
}
/*

Output: 

A 
B B 
C C C 
D D D D 
E E E E E 

*/