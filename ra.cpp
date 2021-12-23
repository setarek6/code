#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    scanf ("%s",word);
    int length=strlen(word);
    int last_char=length;
    int result=0;
    int counter=0;
    for (int i=0;i<=last_char-1;i++)
    {
        if (word[last_char-1]==word[i])
        {
            int copy=last_char-1;
            for (int j=i;j<copy;)
            {
                copy--;
                j++;
                if (word[copy]!=word[j])
                {
                    counter=0;
                    break;
                }
                else if (word[copy]==word[j]) counter+=2;
            }
            
        } if (counter>0) 
        {
            counter+=((last_char-1)-i+1)%2;
            break;
        }
    }
    if (counter==0) counter++;
    if (counter>length) counter=length;
    result=length-counter;
    printf ("%d",result);
    return 0;
}