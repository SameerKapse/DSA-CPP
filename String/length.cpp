#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    char s[]="sameer is";
    int count=1;
    int size=sizeof(s)/sizeof(s[0]);
    for(int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==' ')
        {
              count++; 
        }
        
           
    }
    cout<<count;
       return 0;
}