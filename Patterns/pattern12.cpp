#include <iostream>
using namespace std;
int main(){
    int n=5;
    int space = 2* (n-1);
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= i; j++)//for number1
       {
        cout<<j;
       }
       
        for (int j = 1; j <= space; j++)
       {
        cout<<" ";
       }

        for (int j = i; j >= 1; j--)//for number2
       {
        cout<<j;
       }
       cout<<endl;
       space-=2;
    }
    return 0;
}
/*

Output: 

1        1
12      21
123    321
1234  4321
1234554321


*/