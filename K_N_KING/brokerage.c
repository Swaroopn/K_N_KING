/* PROBLEM 2 - BROKERAGE */

#include <stdio.h>
#include <math.h>

#define SERVICE_TAX .1036f
#define STT .00025f
#define STAMP_TURNOVER .00002f
#define REG_CHARGE .00004f

int main(void)
{
    float brokerage_rate, buying_amt, selling_amt,pro_loss,buying_amt1,selling_amt1, quantity,total_amount, total_buy, servicetax_brokerage_rate, brokerage_rate2, stt,on_selling, total, turn_over, stamp_duty, brokerage_rate1;

    printf("Enter brokerage rate: ");
    scanf("%f", &brokerage_rate);

    printf("Enter buying amount: ");
    scanf("%f", &buying_amt);

    printf("Enter selling amount: ");
    scanf("%f", &selling_amt);

    printf("Enter quantity: ");
    scanf("%f", &quantity);

    buying_amt = 1.2;
    if ((isdigit(buying_amt)))
        printf("True");
/*
	if (!(isdigit(brokerage_rate) && isdigit(buying_amt) && isdigit(selling_amt) && isdigit(quantity)))
	{
		printf("INVALID!");
		exit(1);
	}
	/*
    buying_amt1 = buying_amt;
    selling_amt1 = selling_amt;
    brokerage_rate /= 100;

    buying_amt *= quantity;
    brokerage_rate1 = brokerage_rate * buying_amt;
    servicetax_brokerage_rate = brokerage_rate1 * SERVICE_TAX;

    total_buy = (brokerage_rate1 + servicetax_brokerage_rate);


    selling_amt *= quantity;

    brokerage_rate2 = brokerage_rate * selling_amt;

    stt = STT * selling_amt;

    on_selling = servicetax_brokerage_rate + stt + brokerage_rate2;

    total = on_selling + total_buy;

    turn_over = (buying_amt1 + selling_amt1)*100;

    stamp_duty = (.006/100) * turn_over;

    total_amount = total + stamp_duty;


    pro_loss = (selling_amt1 - buying_amt1)*100;

    pro_loss -= total_amount;

    if (pro_loss > 0)
    {
        printf("\n\nProfit: %.2f\n", pro_loss);
    }
    else
        printf("\n\nLOSS: %.2f\n", fabs(pro_loss));
*/
    return 0;
}
