
#include <stdio.h>

struct Account
{
    int accNo;
    char name[30];
    float balance;
};

int main()
{
    struct Account a;
    FILE *fp;
    int choice, number;
    float amount;

    do
    {
        printf("\n--- BANK MANAGEMENT SYSTEM ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Balance Enquiry\n");
        printf("0. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            fp = fopen("bank.txt", "a");

            if (fp == NULL)
            {
                printf("File Error!\n");
                continue;
            }

            printf("Enter Account Number: ");
            scanf("%d", &a.accNo);

            printf("Enter Name: ");
            scanf("%29s", a.name);

            printf("Enter Initial Balance: ");
            scanf("%f", &a.balance);

            if (a.balance < 0)
            {
                printf("Invalid Balance!\n");
                fclose(fp);
                continue;
            }

            fprintf(fp, "%d %s %.2f\n",
                    a.accNo, a.name, a.balance);

            fclose(fp);
            printf("Account Created Successfully!\n");
        }

        else if (choice >= 2 && choice <= 4)
        {
            fp = fopen("bank.txt", "r");

            if (fp == NULL)
            {
                printf("No Account Found!\n");
                continue;
            }

            printf("Enter Account Number: ");
            scanf("%d", &number);

            FILE *temp = fopen("temp.txt", "w");

            if (temp == NULL)
            {
                printf("File Error!\n");
                fclose(fp);
                continue;
            }

            int found = 0;

            while (fscanf(fp, "%d %29s %f",
                          &a.accNo, a.name, &a.balance) == 3)
            {
                if (a.accNo == number)
                {
                    found = 1;

                    if (choice == 2 || choice == 3)
                    {
                        printf("Enter Amount: ");
                        scanf("%f", &amount);

                        if (amount <= 0)
                            printf("Invalid Amount!\n");

                        else if (choice == 2)
                        {
                            a.balance += amount;
                            printf("Money Deposited!\n");
                        }
                        else if (amount <= a.balance)
                        {
                            a.balance -= amount;
                            printf("Money Withdrawn!\n");
                        }
                        else
                            printf("Insufficient Balance!\n");
                    }

                    if (choice == 4 || choice == 2 || choice == 3)
                        printf("Current Balance: %.2f\n", a.balance);
                }

                fprintf(temp, "%d %s %.2f\n",
                        a.accNo, a.name, a.balance);
            }

            fclose(fp);
            fclose(temp);

            remove("bank.txt");
            rename("temp.txt", "bank.txt");

            if (!found)
                printf("Account Not Found!\n");
        }

        else if (choice == 0)
            printf("Thank You!\n");

        else
            printf("Invalid Choice!\n");

    } while (choice != 0);

    return 0;
}
