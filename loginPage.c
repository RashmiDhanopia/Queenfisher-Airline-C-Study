int loginPage() {
    int option;
    printf("[1.] Customer\n");
    printf("[2.] Attendant\n");
    printf("[3.] Administrator\n\n");
    
    printf("Enter Your Choice: ");
    scanf("%d", &option);
    return option;
}
