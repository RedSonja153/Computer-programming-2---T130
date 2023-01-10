#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    // check words
    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        // loop if word is found
        if(str[wordStart] == ' ')
        {
            
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // add last word
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character
    reverse[index] = '\0'; 

  
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}