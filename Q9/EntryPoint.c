#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[40];
    BOOL bRet=TRUE;

    printf("Enter string:");
    scanf("%[^'\n']s",sArr);



    bRet=ChkPallindrome(sArr);

    if(bRet==TRUE)
    {
        printf("String is pallindrome.\n");
    }
    else if(bRet==FALSE)
    {
        printf("String is not pallindrome.\n");
    }
    else
    {
        printf("Incorrect input!\n");
    }
    
    return 0;
}
