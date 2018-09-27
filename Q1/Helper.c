#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CapitalStrLen
//  Description: Accepts base address of a string and returns the count of capital characters in the string.
//  Input: char[IN-OUT]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CapitalStrLen(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }

    while(*str!='\0')
    {
        if(((*str)>='A') && ((*str)<='Z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}