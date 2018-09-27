#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[40];
    int iRet=0;
    BOOL bRet=TRUE;
    printf("Enter string:");
    scanf("%[^'\n']s",sArr);

    bRet=DiffStrLen(sArr,&iRet);
    if(bRet==FALSE)
    {
        printf("Incorrect input!\n");
    }
    else
    {
        printf("Difference between capital and small characters in the string is:%d\n",iRet);
    }


    return 0;
}
