#include <iostream>
using namespace std;
int main(){
    char b[]="sameerk";
    char a[]="sameer";
    int i,j;
    for (i = 0;a[i]!='\0' && b[j]!='\0'; i++,j++)
    {
       
       if (a[i]!=b[j])
       {
        break;
       }
        else if(a[i]==b[j])
        {
            
            cout<<"equal";
            
           
        }
        else if (a[i]<b[j])
        {
           cout<<"smaller";
        }
        else
        {
            cout<<"greater";
        }
     
        cout<<"\n";
    }
    return 0;
}