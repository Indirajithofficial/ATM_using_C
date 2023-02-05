#include<stdio.h>
void main()
{
	int temp,deposit,withdraw,pin1,balance,pin_change,pin2,
	choise;

int x,pin=1712,amount=5000;
printf("\tWelcome to an ATM servise\n \t-----------------------");
h:
printf("\n\n Please enter your pin :\t");
scanf("%d",&pin1);
a:
while(pin1!=pin)
{
	printf(" \nPlease enter correct pin ");
	scanf("%d",&pin1);

}
 d:
 printf("\nFor,\nDeposit         : press 1 \nWithdrawal      : press 2 \nBalance check   : press 3 \nPin change      : press 4\nEXIT            : press 5\n\n");
    scanf("%d",&choise);
//  DEPOSITE
	if(choise==1)
	{
		printf("\nPlease insert an amount ");
		scanf("%d",&deposit);
    amount=deposit+amount;
	
		printf("\nYour current balance is = %d",amount);
		printf("\n\nfor back    : press 0\n \nfor exit    : press 5\n\n");
		scanf("%d",&choise);
		if(choise == 5)
		{
			goto e;
		}
		else
	goto d;
	}

//   WITHDRAW
	if(choise==2)
	{
		printf("\nPlease enter an amount = ");
		scanf("%d",&withdraw);

	if(withdraw>amount)
	{
		while(withdraw>amount)
	{
			printf("\nInsufficient amount");
		printf("\nplease enter a sufficient amount :  ");
	scanf("%d",&temp);
	if(temp<amount)
	{
		amount=amount-temp;
		goto c;
	}
} 
}
	else
				{
					amount=amount-withdraw;
					c:
					printf("\nPlease collect your cash \n\nyour current balance = %d",amount);
						printf("\n\nfor back    : press 0\n \nfor exit    : press 5\n\n");
		scanf("\n%d",&choise);
		if(choise == 5)
		{
			goto e;
		}
		else
	goto d;
					
				}
}

			

				if(choise==3)//balance
				{
					printf("\nyour current balance is %d ",amount);
				printf("\n\nfor back    : press 0\n \nfor exit    : press 5\n\n");
		scanf("\n%d",&choise);
		if(choise == 5)
		{
			goto e;
		}
		else
	goto d;
				}
				if(choise==4)//pin change
				{
					
					printf("enter your old pin ");
					scanf("%d",&pin2);
					while(pin2!=pin)
				{
			    	printf("Please enter a correct pin : ");
					scanf("%d",&pin2);
			}
					printf("please enter a new pin : ");
					scanf("%d",&pin);
					printf("your pin has been changed successfully : ");
					printf("\n\nfor back    : press 6\n \nfor exit      : press 5\n\n");
		scanf("\n%d",&choise);
		if(choise == 5)
		{
			goto e;
		}
		else 
		goto h;
		
				}
			
				
	e:
		printf("\n  THANK YOU FOR USING OUR ATM SERVICE\n         HAVE A NICE DAY\n");
					
getch();
}
