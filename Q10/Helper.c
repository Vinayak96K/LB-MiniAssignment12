#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrRev
//  Description: Accepts base address of a string & retuns the string string in reverse format.
//  Input: char[IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRev(char *str)
{
    int iIndex=0,iCnt=0;
    char cTemp;
    if(str==NULL)
    {
        printf("Incorrect Input!\n");
        return;
    }
    
    while(str[iCnt]!='\0')
    {
        iCnt++;
    }
    
    iCnt--;
    while(iIndex<iCnt)
    {
        cTemp=str[iIndex];
        str[iIndex]=str[iCnt];
        str[iCnt]=cTemp;

        iCnt--;
        iIndex++;
    }
}