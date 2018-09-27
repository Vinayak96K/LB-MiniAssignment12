#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: VwlStrLen
//  Description: Accepts base address of a string and returns the count of vowels in the string.
//  Input: char[IN-OUT]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int VwlStrLen(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }

    while(*str!='\0')
    {
        if(((*str)=='A') || ((*str)=='E') || ((*str)=='I') || ((*str)=='O') || ((*str)=='U') || ((*str)=='a') || ((*str)=='e') || ((*str)=='i') || ((*str)=='o') || ((*str)=='u'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}