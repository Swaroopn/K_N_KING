/********************************
 * PROGRAM NAME:  checkbook.c   *
 * AUTHOR:            SWAROOP   *
 * PAGE NUMBER:           113   *
 ********************************/

#include <stdio.h>

int main(void)
{
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** SWK checkbook-balancing programming ***\n");
    printf("Commands:\n\t\t0 = clear\t1 = credit\n\t\t2 = debit\t3 = balance\n\t\t4 = exit\n\n");

    for (;;)
    {
        printf("Enter a command: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current Balance: $%.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0 = clear\t1 = credit\t2:debit\t3 = balance\t4 = exit\n\n");
                break;
        }
    }

    return 0;
}
