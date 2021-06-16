#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "employee.h"

extern void registerEmp();
extern void printAll();
extern void searchByName();
extern void save();
void displayMenu()
{
    int num;
    while(1)
    {
        printf("============Employee Management===========\n");
        printf("<<<1.Register\t2.Print All\t3. Search\t4.Save\t5.exit>>>\n");
        printf("Please enter your service number (1-5)> ");
        scanf("%d", &num);
        if(num==1) registerEmp();
        else if(num==2) printAll();
        else if(num==3) searchByName();
        else if(num==4) save();
        else exit(1);
    }
}

int main(){
    char* password="qwerty1234";
    char mypassword[20];

    int count=0;
    printf("Ask to type password\n");
    printf("Password:\n");
    scanf("%s",mypassword);
    while(count<=1)
    {
        if(strcmp(password, mypassword)==0)
        {
            displayMenu();
            break;
        }
        else
        {
            count++;
            printf("Not matched!!!\n");
            printf("Password:\n");
            scanf("%s",mypassword);
        }
        if(count==2)
            printf("You are not allowed to access EMS.\n");
    }
    return 0;
}
