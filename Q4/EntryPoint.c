#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[40];
    int iRet=0;
    printf("Enter string:");
    scanf("%[^'\n']s",sArr);

    iRet=VwlStrLen(sArr);
    if(iRet==-1)
    {
        printf("Incorrect input!\n");
    }
    else
    {
        printf("Number of vowels in the string is:%d\n",iRet);
    }


    return 0;
}
