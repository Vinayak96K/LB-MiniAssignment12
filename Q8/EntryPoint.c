#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[40];

    printf("Enter string:");
    scanf("%[^'\n']s",sArr);



    DisplayStrRev(sArr);

    
    return 0;
}
