#include <stdio.h>
#include <conio.h>


int account_count;
int cust_id;
int with_drawals;
char account_type;
int i;   
float bank_charge;

int main()
{

  
    printf("Number of account bank: ");
    scanf("%d", &account_count);

    for(i = 0; i < account_count; i++)
    {
        
        printf("CustID: ");
        scanf("%d", &cust_id);

       
        printf("Account Type: ");
        scanf(" %c", &account_type);

     
        printf("Withdrawals:");
        scanf("%d", &with_drawals);

        printf("---End of input---\n\n");

        if(cust_id < 1000 || cust_id > 9999)
        {
            printf("Incorrect CustID\n");
        }

        if(account_type != 'C' && account_type != 'S')
        {
            printf("Incorrect Account Type\n");
        }

        if(with_drawals < 0)
        {
            printf("Incorrect Withdrawals\n");
        }
        




        switch (account_type)
        {
        case 'C':
            bank_charge = 7.5;
            if(with_drawals > 4)
            {
                bank_charge += (with_drawals - 4) * 2.5;
            }
            break;
        case 'S':
            bank_charge = 5.0;
            if(with_drawals > 4)
            {
                bank_charge += (with_drawals - 4) * 2.5;
            }
            break;
        }

        if(account_count > 2)
        {
            bank_charge += 5.0;
        }
        if (cust_id <= 9999 && cust_id >= 1000)
        {
            printf("CustID: %d\n", cust_id);
        }
        printf("BankCharge: %.2f \n", bank_charge);
        printf("---End of output---\n\n");
    }
    return 1;
}
