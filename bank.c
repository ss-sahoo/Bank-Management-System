#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int list();
void deposit();
void withdraw();
void trans();
void cheak();
void last();
int amount,totalamount=1000,amo,tr,totaldeposit=0,totalwith=0,totaltr=0,acc;
char a[50];
void main()
{
	
	printf("****************************WELCOM TO IFFCCS BANK*************************");
	printf("\nEnter your Name:\n");
	gets(a);
	printf("Enter your Account No.\n");
	scanf("%d",&acc);
	while(1)
	{
		
		switch(list())
		{
			case 1:
				 deposit();
				 totaldeposit+=amount;
				 break;
			case 2:
		       	 withdraw();
		     	 if(amo<=totalamount)
					{
				 		totalwith+=amo;
			    	}
			     break;
			case 3:
		    	 trans();
			     if(tr<=totalamount)
					{
			     		totaltr+=tr;	
			    	}	
			     break;
			case 4:
				 cheak();
				 break;
			case 5:
				 system("cls");
				 last();
				 getch();
			     exit(0);
			defult:
			   printf("invalid choice\n");	 
    	}
    	getch();
	}
}
int list()
{
	int ch;
	printf("\n1. Deposit Amount:");
	printf("\n2. Withdraw Amount:");
	printf("\n3. Transfer Amaunt:");
	printf("\n4.  Account Datails:");
	printf("\n5. EXIT");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	return (ch);
}

void deposit()
{
	printf("\nEnter the Amount you want to deposit:(6 Digit)");
	scanf("%d",&amount);
	totalamount+=amount;
}
void withdraw()
{
	printf("\nEnter the Amount to Withdraw:");
	scanf("%d",&amo);
	if(amo<=totalamount){
	totalamount-=amo;
    }
    else{
    	printf("\nLess Amount. Withdraw not possible ");
	}
}
void trans()
{
	printf("\nEnter the Tranfer Amount:");
	scanf("%d",&tr);
	if(tr<=totalamount){
		totalamount-=tr;
	}
	else{
		printf("\nLess amount. Transfer is not possible");
	}
}
void cheak()
{
	printf("\nTotal Amount=%d",totalamount);
	printf("\nTotal Diposite=%d",totaldeposit);
	printf("\nTotal Withdraw=%d",totalwith);
	printf("\nTotal Transfer=%d",totaltr);
}
void last()
{
	printf("\n**********************************************\n");
	printf("Your Name=%s",a);
	printf("\nAccount No.:%d",acc);
	printf("\nTotal Amount=%d",totalamount);
	printf("\nTotal Diposite=%d",totaldeposit);
	printf("\nTotal Withdraw=%d",totalwith);
	printf("\nTotal Transfer=%d",totaltr);
	printf("\n\n****************THANK YOU********************");
}
