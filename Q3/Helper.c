#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SpcStrLen
//  Description: Accepts base address of a string and returns the count of whitespaces in the string.
//  Input: char[IN-OUT]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SpcStrLen(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }

    while(*str!='\0')
    {
        if((*str)==' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}