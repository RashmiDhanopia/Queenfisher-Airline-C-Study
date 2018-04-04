#include <stdio.h>
#include<stdbool.h>

int welcomePage();
 
int loginPage();

int registerPage();

int main(void) {
    bool programEncounteredError = false;
    bool programExitWanted = false;
    
    while(!programEncounteredError && !programExitWanted) {
        switch(welcomePage()) {
            case 1:
                loginPage();
                programExitWanted = true;
                break;
            case 2:
                registerPage();
                programExitWanted = true;
                break;
            default:
                printf("Wrong Option! Please Try Again\n\n");
        }
    }
    
    printf("Thank you for using Queenfisher!\n");
}

int welcomePage() {
    int option;
    printf("Queenfisher Online Ticket Booking System!\n\n");
    
    printf("[1.] Login\n");
    printf("[2.] Register\n\n");
    
    printf("Enter Your Choice: ");
    scanf("%d", &option);
    return option;
}

int loginPage() {
    int option;
    printf("[1.] Customer\n");
    printf("[2.] Attendant\n");
    printf("[3.] Administrator\n\n");
    
    printf("Enter Your Choice: ");
    scanf("%d", &option);
    return option;
}

int registerPage() {
    return 0;
}
