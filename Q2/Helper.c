#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SmallStrLen
//  Description: Accepts base address of a string and returns the count of small characters in the string.
//  Input: char[IN-OUT]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SmallStrLen(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }

    while(*str!='\0')
    {
        if(((*str)>='a') && ((*str)<='z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}