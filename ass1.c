#include <stdio.h>

int  main()
{
    int totalbill;
    int finalamount;
    printf("Enter total bill amount: ");
    scanf("%d",&totalbill);
    if(totalbill>=500&&totalbill<=1000)
    {
         finalamount=totalbill-(totalbill*0.10);
         printf("Final Payable Amount: %d after 10 percentage discount \n",finalamount);
    }
    else if(totalbill>1000)
         {
             finalamount=totalbill-(totalbill*0.20);
             printf("Final Payable Amount: %d after 20 percentage discount \n",finalamount);
         }

    return 0;
}

