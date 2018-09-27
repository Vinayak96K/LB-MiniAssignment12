#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DiffStrLen
//  Description: Accepts base address of a string and returns the difference between capital and small characters in the string.
//  Input: char[IN-OUT],int[OUT]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL DiffStrLen(char *str,int *iNum)
{
    int iCnt1=0,iCnt2=0;
    if((str==NULL)||(iNum==NULL))
    {
        return FALSE;
    }

    while(*str!='\0')
    {
        if(((*str)>='A') && ((*str)<='Z'))
        {
            iCnt1++;
        }
        else if(((*str)>='a') && ((*str)<='z'))
        {
            iCnt2++;
        }
        str++;
    }
    *iNum=iCnt1-iCnt2;
    return TRUE;
}