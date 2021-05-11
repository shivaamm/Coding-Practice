Problem Description
The program checks if a string is a palindrome or not. A palindrome is a word or a string that reads the same backward and forward.

Problem Solution
1. The program takes a string and stores it.
2. The string is copied into another string from backwards.
3. If both the strings are equal, then the entered string is a palindrome.
4. Else it is not.
5. The result is printed.
6. Exit.
  
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[20], str2[20];
    int i, j, len = 0, flag = 0;
    cout << "Enter the string : ";
    gets(str1);
    len = strlen(str1) - 1;
    for (i = len, j = 0; i >= 0 ; i--, j++)
        str2[j] = str1[i];
    if (strcmp(str1, str2))
        flag = 1;
    if (flag == 1)
        cout << str1 << " is not a palindrome";
    else
        cout << str1 << " is a palindrome";
    return 0;
}

Program Explanation
1. The user is asked to enter a string and it is stored in the character variable ‘str1’.
2. The length of str1 is stored in ‘len’ using the string function strlen().
3. Using a for loop, str1 is copied into another variable ‘str2’ from backwards.
4. Both the strings str1 and str2 are compared using string function strcmp().
5. A temporary variable flag is used.
6. If str1 is equal to str2, then the entered string is a palindrome, else not.
7. The result is then printed.
  
  Runtime Test Cases
Case 1 :
Enter the string : nun
nun is a palindrome
 
Case 2 :
Enter the string : fast                                                                                                        
fast is not a palindrome
 
Case 3 :
Enter the string : 121                                                                                                         
121 is a palindrome


*************************************************


	int isPlaindrome(string str)
	{
	    string rev=str;
	    reverse(rev.begin(),rev.end());
	    if(str==rev)
	    {
	        return 1;
	    }
	    return 0;
	}


************************************************


