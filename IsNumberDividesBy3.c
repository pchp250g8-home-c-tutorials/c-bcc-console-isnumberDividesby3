#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    int iNum, iVal, iSumDigits;
    system("cls");
    printf("Input an integer number:\r\n");
    fscanf_s(stdin, "%d", &iNum);
    iVal = abs(iNum); iSumDigits = 0;
    while (iVal > 0)
    {
        iSumDigits += iVal % 10;
        iVal /= 10;
    }
    printf("The sum of digits of the integer number %d is %d\r\n", iNum, iSumDigits);
    if (iSumDigits % 3 == 0)
    {
        printf("The number %d divides by 3\r\n", iNum);
    }
    else
    {
        printf("The number %d does not divide by 3\r\n", iNum);
    }
    _fgetchar();
    fgetc(stdin);
    return 0;
}
