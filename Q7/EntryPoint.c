#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iRet=0;
    char sArr[40];
    char ch;

    printf("Enter string:");
    scanf("%[^'\n']s",sArr);

    printf("Enter a character to search:");
    scanf("\n%c",&ch);

    iRet=SearchLast(sArr,ch);

    if(iRet==-1)
    {
        printf("Incorrect input!\n");
    }
    else if(iRet==-2)
    {
        printf("Character not found!\n");
    }
    else
    {
        printf("Character found a index %d\n",iRet);
    }

    return 0;
}
