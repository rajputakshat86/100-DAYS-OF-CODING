#include <stdio.h>
#include <string.h>

int main() 
{
    enum traffic {RED, YELLOW, GREEN};
    enum traffic signal;
    char input[10];

    printf("Enter traffic light (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    
    if(strcmp(input, "RED") == 0)
        signal = RED;
    else if(strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if(strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid Input");
        return 0;
    }

   
    switch(signal)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
