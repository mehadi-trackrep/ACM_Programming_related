#include <stdio.h>
void readinput(int i);
void writeoutput(int i);

struct date {
    int month;
    int day;
    int year;
};

struct account {
    char name[80];
    char street[80];  /// not build
    char city[80];

    int acct_no;
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    struct date lastpayment;

}customer[100];

int main()
{
    int i,n;
    printf("How many customer are there?");
    printf("CUSTOMER BILLING SYSTEM\n\n");
    printf("How many customer are there?\n");

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        readinput(i);
        /// determine account status
        if(customer[i].payment > 0)
            customer[i].acct_type = (customer[i].payment < 0.1*customer[i].oldbalance) ? 'O' : 'C';
        else
            customer[i].acct_type = (customer[i].oldbalance > 0) ? 'D' : 'C';
        /// adjust account balance
        customer[i].newbalance = customer[i].oldbalance - customer[i].payment;
    }

    for(i = 0;i < n;i++){
        writeoutput(i);

    return 0;
}
void readinput(int i){
    /// read input data and update record for each customer
    printf("\nCustomer no. : %d\n",i+1);
    printf("  name: ");
    scanf("%[^\n]",customer[i].name);
    printf(" Street: ");
    scanf("%[^\n]",customer[i].street);
    printf(" City: ");
    scanf("%[^\n]",customer[i].city);
    printf(" Account number: ");
    scanf("%d",&customer[i].acct_no);
    printf(" Previous balance: ");
    scanf("%f",&customer[i].oldbalance);
    printf(" Current payment: ");
    scanf("%f",&customer[i].payment);
    printf(" Payment date (mm/dd/yyyy): ");
    scanf("%d%d%d",&customer[i].lastpayment.month,
                   &customer[i].lastpayment.day,
                   &customer[i].lastpayment.year);
    return ;
}

void writeoutput(int i){

    /// display current information for each customer

    printf("\nname:    %s",customer[i].name);
    printf("    Account number: %d\n",customer[i].acct_no);
    printf("Street: %s\n",customer[i].street);
    printf("City: %s\n\n",customer[i].city);
    printf("Old balance: %7.2f",customer[i].oldbalance);
    printf("    Current payment: %7.2f",customer[i].payment);
    printf("    New balance: %7.2f\n\n",customer[i].newbalance);
    printf("Account status: ");

    switch(customer[i].acct_type){

    case 'C':
                printf("Current\n\n");
                break;
    case 'O':
                printf("Overdue\n\n");
                break;
    case 'D':
                printf("Delinquent\n\n");
                break;
    default:
                printf("Error\n\n");

    }

    return ;
}
