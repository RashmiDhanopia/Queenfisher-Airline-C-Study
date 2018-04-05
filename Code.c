#include <stdio.h>
#include <string.h>
void cancelTicket(char flightNum[16]);        //declaration of function
int searchInfile(char flightNum[16]);

int main()      //main function
{
    char flightNumber[100];
    printf("Enter the flight number which is cancelled:\n");
    gets(flightNumber);
    cancelTicket(flightNumber);     //function call
    return 0;
}

void cancelTicket(char flightNum[16])    //function defination
{
    searchInfile(flightNum);     //function call
}

int searchInfile(char flightNum[16])     //function defination
{
    FILE *fp;
    int lineNum = 1, findResult = 0;
    char temp[40];

    fp = fopen("flight.txt","r");
    if(fp == NULL)
        return(-1);
    
    while(fgets(temp, 40, fp) != NULL) {
        if((strstr(temp, flightNum)) != NULL) {
           // printf("A match found on line: %d\n", line_num);
            printf("\n%s\n", temp);
            findResult++;
        }
        lineNum++;
        
    }

    return lineNum;
}