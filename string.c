#include<stdio.h>
int main()
{
    string arr[] = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    string ans = commonPrefix(arr, n);
 
    if (ans.length())
        printf ("The longest common prefix is - %s",
                 ans.c_str());
    else
        printf("There is no common prefix");
}
