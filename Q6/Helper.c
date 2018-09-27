#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SearchFirst
//  Description: Accepts base address of a string & a character to search and returns the first occurrence of that character in the string.
//  Input: char[IN-OUT,IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SearchFirst(char *str,char ch)
{
    int iIndex=0;
    if(str==NULL)
    {
        return -1;
    }
    
    while(*str!='\0')
    {
        if(*str==ch)
        {
            break;
        }
        iIndex++;
        str++;
    }

    if(*str!='\0')
    {
        return iIndex;
    }
    else
    {
        return -2;
    }
    
}
