#include<stdio.h>
#include<string.h>

void mainmenu(void);
void display_menu(void);
void bill (void);
void contact(void);
void about_us(void);
void exit_it(void);
void menucard(void);
struct info
{
	char name[50];
	int age;
	char gender;
} s[1];

struct invoice
{
	int qty;
	int code;
} k[1];




main()
{
	int a;
	for (a=0;a<1;a++)
	printf ("\nHello! Please enter your name: ");
	scanf ("%s",&s[a].name);
	printf ("\nPlease enter your age: ");
	scanf ("%d",&s[a].age);
	printf ("\nPlease mention your gender (M/F): ");
	scanf ("%s",&s[a].gender);
	
	if (s[a].gender=='M'||s[a].gender=='m')
	{
		printf ("\n\n\t<----WELCOME TO NOMAN RESTAURANT Mr.%s---->\n\t",s[a].name);
	}
	else 
	{
		printf ("\n\n\t<----WELCOME TO NOMAN RESTAURANT Miss %s---->\n\t",s[a].name);
	}
	
	mainmenu();
	
int select;
printf ("\n\n1.Select your order \n0.Go Back");
printf ("\nChoose your preffered option: ");
scanf ("%d",&select);

switch (select)
{
	case 0:
	mainmenu();
	break;
	case 1:
	menucard();
}
	

}


void mainmenu(void)
{
	int choice;
	printf ("\n1.Display Menu \n2.Contact \n3.About Us \n4.Exit");
	printf ("\nChoose your preffered option: ");
	scanf ("%d",&choice);
switch (choice)
{
	case 1:
	display_menu();
	break;
	case 2:
	contact();
	break;
	case 3:
	about_us();
	break;
	case 4:
	exit_it();
	break;
	default:
		printf ("\nINVALID! Please select correct option.");
	}
}

void contact(void)
{
	printf ("\n\n\tFOR DELIVERY\n\n\t");
	printf ("\nCall us at 090-078-601");
	printf ("\n\nor Visit our website:");
	printf ("\nwww.abcrestaurant.com");
	printf ("\n\n");
	mainmenu();
}

void about_us(void)
{
	printf ("\n\n\t**ABC Restaurant**\t");
	printf ("\n\nEstablished in 2014. Trusted worldwide :)");
	printf ("\t\n\nTIMINGS\n");
	printf ("\nMon to Fri:	11AM-12AM");
	printf ("\nSat & Sun:	11AM-4AM");
	printf ("\n\n(Branches all over Karachi)");
	printf ("\n\n");
	mainmenu();
}

void exit_it(void)
{
	printf ("\nBYE BYE, See you again :)");
}

void display_menu(void)
{
	printf ("\n\n\t****MENU****\n\n\t");
	printf ("\n\nS#		Item			Price");
	printf ("\n1.	French Fries		Rs.100/-");
	printf ("\n2.	Salad			Rs.200/-");
	printf ("\n3.	Club Sandwich		Rs.240/-");
	printf ("\n4.	Zinger Burger		Rs.260/-");
	printf ("\n5.	Chk Shawarma		Rs.190/-");
	printf ("\n6.	Mayo Garlic Roll	Rs.180/-");
	printf ("\n7. 	Bihari Boti		Rs.200/-");
	printf ("\n8.	Chk Tikka (Chest)	Rs.380/-");
	printf("\n9.	Chk Tikka (Leg)		Rs.340/-");
}
void menucard(void)
{

int total=0;
	char ch;
	int qty;
	int code;
	int n,b;


	printf ("\nPlease enter the number of items you want to order: ");
     scanf ("%d",&n);
do{
    
	for (int i=0;i<n;i++)
	{
	
	printf ("\nPlease enter the Serial number of your item %d:\t",i+1);
	scanf ("%d",&code);
     printf ("\nPlease enter the quantity: ");
	scanf ("%d",&qty);
	if (code==1)
	{total= total+100*qty;}
	else if (code==2)
	{total= total+200*qty;}
	else if (code==3)
	{total= total+240*qty;}
	else if (code==4)
	{total= total+260*qty;}
	else if (code==5)
	{total= total+190*qty;}
	else if (code==6)
	{total= total+180*qty;}
	else if (code==7)
	{total= total+200*qty;}
	else if (code==8)
	{total= total+380*qty;}
	else if (code==9)
	{total= total+340*qty;}
     else 
     {
     printf("\nChoose correct option please!");
	}

}
     printf ("\nDo you want to order more [Y/N]: ");
	scanf(" %c",&ch);
	
}
while(ch=='y' || ch=='Y');

     printf("\n########################################");
     printf("\n Your Bill is : Total =	%d ",total);
     printf("\n########################################");

printf("\n\n\n\n\nThank you for Order Have a Good Day :)\n");

}





