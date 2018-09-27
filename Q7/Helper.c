#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SearchLast
//  Description: Accepts base address of a string & a character to search and returns the last occurrence of that character in the string.
//  Input: char[IN-OUT,IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SearchLast(char *str,char ch)
{
    int iIndex=0,iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    iIndex=iCnt;

    for(iCnt=iIndex;iCnt>=0;iCnt--)
    {
        if(*str==ch)
        {
            break;
        }
        iIndex--;
        str--;
    }

    if(iIndex>=0)
    {
        return iIndex;
    }
    else
    {
        return -2;
    }
    
}
