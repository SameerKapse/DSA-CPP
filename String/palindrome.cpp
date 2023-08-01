#include <iostream>
#include <string>


using namespace std;


int main()
{
    string str[]="SAMEER", temp;
    int i = 0, j;

   

    temp = str[];
    
    j = str.length() - 1;

	//Reversing the temp string.
	
    while (i < j) 
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }

    if (temp == str) 
    {
        cout << "The string is a palindrome." << endl;
    } 
    else 
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}