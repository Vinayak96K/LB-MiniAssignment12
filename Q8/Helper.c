#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayStrRev
//  Description: Accepts base address of a string & display the string string in reverse format.
//  Input: char[IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayStrRev(char *str)
{
    int iIndex=0,iCnt=0;
    if(str==NULL)
    {
        printf("Incorrect Input!\n");
        return;
    }
    
    while(str[iCnt]!='\0')
    {
        iCnt++;
        //str++;
    }
    //iIndex=iCnt;
    /*printf("%d\n",iCnt);*/
    printf("String Reverse:");
    for(iIndex=iCnt-1;iIndex>=0;iIndex--)
    {
        printf("%c",str[iIndex]);
        //str--;
        
    }
    printf("\n");
  
}
