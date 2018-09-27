#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ChkPallindrome
//  Description: Accepts base address of a string & returns true if the string is pallindrome otherwise it returns false.
//  Input: char[IN-OUT]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkPallindrome(char *str)
{
    int iIndex=0,iCnt=0;
    if(str==NULL)
    {
        printf("Incorrect Input!\n");
        return ERR;
    }
    
    while(str[iCnt]!='\0')
    {
        iCnt++;        
    }
    iCnt--;
    //printf("String Reverse:");
    while(iIndex<iCnt)
    {
        if(str[iIndex]==str[iCnt])
        {
            iIndex++;
            iCnt--;
        }
        else if(str[iIndex]==(str[iCnt]+32))
        {
            iIndex++;
            iCnt--;
        }
        else if(str[iIndex]==(str[iCnt]-32))
        {
            iIndex++;
            iCnt--;
        }
        else
        {
            break;
        }        
    }

    if(iIndex<iCnt)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
  
}