//
//  main.c
//  Unit3Lab
//
//  Created by Tyler Flowers on 9/26/23.
//
//  I worked with Sam D, and Brenden B.
//  I used stackOverflow, W3Schools, and Programiz for this assignment

//include statements to get this done
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//defines length of different customer variable arrays
#define FIRST_NAME_LENGTH 20
#define MIDDLE_NAME_LENGTH 20
#define LAST_NAME_LENGTH 20
#define PHONE_LENGTH 13


//defines struct customer
struct customer {
    char firstName[FIRST_NAME_LENGTH];
    char middleName[MIDDLE_NAME_LENGTH];
    char lastName[LAST_NAME_LENGTH];
    char phone[PHONE_LENGTH];
    float balance;
};


//show customer function that prints a single customers information
void showcustomer(struct customer c) {
    
    printf("First Name: %s\n", c.firstName);
    printf("Middle Name: %s\n", c.middleName);
    printf("Last Name: %s\n", c.lastName);
    printf("Phone: %s\n", c.phone);
    printf("Balance: %0.2f\n", c.balance);
    
}

//show database function that prints all customers information
void showdatabase(struct customer arr[],int size){
    
    for(int i = 0; i < size; i++){
        printf("Customer: %d\n", i+1);
        showcustomer(arr[i]);
        
    }
    
}

//main method
int main(){
    
    struct customer arr[20];
    int count = 0;
    char command[20];
    
    while(1){
        
        //statement that takes in command
        printf("Enter command :X to exit, :S to show database: ");
        scanf("%s", command);
        
        
        //if statements processing command
        if (strcasecmp(command, ":X") == 0) {
            break;
        } else if (strcasecmp(command, ":S") == 0) {
            showdatabase(arr, count);
            continue;
        }
        
        //if commands are not input then program goes on to adding customer info into array
        printf("Enter Customer #%d First Name: ", count+1);
        scanf("%s", arr[count].firstName);

        printf("Enter Customer #%d Middle Name: ", count+1);
        scanf("%s", arr[count].middleName);

        printf("Enter Customer #%d Last Name: ", count+1);
        scanf("%s", arr[count].lastName);

        printf("Enter Customer #%d Phone: ", count+1);
        scanf("%s", arr[count].phone);

        printf("Enter Customer #%d Balance: ", count+1);
        scanf("%f", &arr[count].balance);
        
        //increments count
        count++;
    }
    
    return 0;
    
}
