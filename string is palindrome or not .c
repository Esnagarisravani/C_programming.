#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], rev[100];
    int i, j = 0;

    printf("Enter the string:\n");
    scanf("%s", s);

    int l = strlen(s);

    // Reverse the string
    for (i = l - 1; i >= 0; i--)
    {
        rev[j] = s[i];
        j++;
    }
    rev[j] = '\0';

    // Compare original and reversed string
    if (strcmp(s, rev) == 0)
    {
        printf("It is palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
    }