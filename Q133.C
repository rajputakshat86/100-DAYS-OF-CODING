#include <stdio.h>
#include <string.h>

int main()
{
    enum months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    enum months m;
    char input[5];

    printf("Enter month (JAN, FEB, MAR, ...): ");
    scanf("%s", input);

    if(strcmp(input, "JAN") == 0) m = JAN;
    else if(strcmp(input, "FEB") == 0) m = FEB;
    else if(strcmp(input, "MAR") == 0) m = MAR;
    else if(strcmp(input, "APR") == 0) m = APR;
    else if(strcmp(input, "MAY") == 0) m = MAY;
    else if(strcmp(input, "JUN") == 0) m = JUN;
    else if(strcmp(input, "JUL") == 0) m = JUL;
    else if(strcmp(input, "AUG") == 0) m = AUG;
    else if(strcmp(input, "SEP") == 0) m = SEP;
    else if(strcmp(input, "OCT") == 0) m = OCT;
    else if(strcmp(input, "NOV") == 0) m = NOV;
    else if(strcmp(input, "DEC") == 0) m = DEC;
    else {
        printf("Invalid Month");
        return 0;
    }

  
    switch(m)
    {
        case JAN: printf("31 days"); break;
        case FEB: printf("28 or 29 days"); break;
        case MAR: printf("31 days"); break;
        case APR: printf("30 days"); break;
        case MAY: printf("31 days"); break;
        case JUN: printf("30 days"); break;
        case JUL: printf("31 days"); break;
        case AUG: printf("31 days"); break;
        case SEP: printf("30 days"); break;
        case OCT: printf("31 days"); break;
        case NOV: printf("30 days"); break;
        case DEC: printf("31 days"); break;
    }

    return 0;
}
