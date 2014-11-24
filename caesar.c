#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    
    if (argc !=2)
    {
        printf("Try again. We require an integer as the encryption key.\n");
        return 1;
    }
    int k = atoi (argv[1]);
    if (k <= 0)
    {
        printf("Try again. We require an integer as the encryption key.\n");
        return 1;
    }
    string text;
    text = GetString();
    
    for (int i = 0; i < strlen(text); i++)
    
    if (isalpha(text[i]))
    {
        if  (isupper(text[i]))
        {
            int a = ((text[i]-65+k) %26+65);
            printf("%c",a);
        }
        else if  (islower(text[i]))
        {
            int b = ((text[i]-97+k) %26+97);
            printf("%c",b);
        }
    }
    else 
    {
    printf("%c", text[i]);
    }
    printf("\n");
}    
