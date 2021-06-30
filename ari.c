#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<cs50.h>

string ari(string str)
{
    int characters = 0, words = 0, sentences = 0, readibility_index = 0;

    for(int i=0;i<strlen(str);i++)
    {
        if(isalnum(str[i]))
        {
            characters++;
        }
        else if(isspace(str[i]))
        {
            words++;
        }
        else if(str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            sentences++;
        }
    }

    readibility_index = (ceil)((4.71 * characters/words) + (0.5 * words/sentences) - 21.43);

    switch(readibility_index)
    {
        case 1 : 
        {
            return "Kindergarten";
            break;
        }

        case 2 : 
        {
            return "First/Second Grade";
            break;
        }

        case 3 : 
        {
            return "Third Grade";
            break;
        }

        case 4 : 
        {
            return "Fourth Grade";
            break;
        }

        case 5 : 
        {
            return "Fifth Grade";
            break;
        }

        case 6 : 
        {
            return "Sixth Grade";
            break;
        }

        case 7 : 
        {
            return "Seventh Grade";
            break;
        }

        case 8 : 
        {
            return "Eighth Grade";
            break;
        }

        case 9 : 
        {
            return "Ninth Grade";
            break;
        }

        case 10 : 
        {
            return "Tenth Grade";
            break;
        }

        case 11 : 
        {
            return "Eleventh Grade";
            break;
        }

        case 12 : 
        {
            return "Twelfth Grade";
            break;
        }

        case 13 : 
        {
            return "College student";
            break;
        }

        case 14 : 
        {
            return "Professor";
            break;
        }
    }

    return NULL;
}
