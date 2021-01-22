#include <stdio.h>

int Draw (int account)

{
	int a;
	printf("How much do you want to draw: ");
	scanf("%d",&a);
	
	if (a <= account)
	{
		account = account - a;
		printf ("You drew %d",a);
		return account;
    }
	
	else 
	{
		printf("You don't have enough money 🙁");
	}
	
}

int Put (int account)
{
	int a;
	printf("How much do you want to put: ");
	scanf("%d",&a);
	account = account + a;
	return account;	
}

int Transfer (int account1,int account2)
{
	int b;
	printf("How much would you like to transfer? ");
	scanf("%d",&b);
	
	if (b <= account1)
	{ 
		account1 = account1 - b;
		account2 = account2 + b;
		printf ("You sucsessfuly transfered %d",b);
		return account2;
	}
}

int Info (int account) 
{
	printf("your balance is: %d",account);
	return account;
}

int main () {
		
int id[3];
id[0] = 0;
id[1] = 1;
id[2] = 2;
int pass0 = 100000;
int pass1 = 111111;
int pass2 = 222222;
int idd;
int pass;
int command;
int account[3];

for (int i = 0;i < 3 ;i++)
{
	printf ("Enter money in %d account: ",i+1); 
	scanf ("%d",&account[i]);
}	
	top:
	printf ("Enter id: ");
	scanf ("%d",&idd);
	printf ("Enter password: ");
	scanf ("%d",&pass);
	
	if (idd == id[0] && pass == pass0)
	{
		printf("You logged in account 1");
		
		do {
			printf("\nPick a command: \n\n1 - Exit\n2 - Draw\n3 - Put\n4 - Transfer\n5 - Info\n6 - Logout \n");
			scanf("%d",&command);
			
			switch (command)
			{
				case 2:
				account[0] = Draw(account[0]);
					break;
					
				case 3:
				account[0] = Put(account[0]);
					break;
					
				case 4:
					
				int a;
				printf("Please enter account id: ");
				scanf("%d",&a);
				for (int i = 0; i < 3; i++)
				{
			
				if (a == id[i])
				
					{
						account[a] = Transfer(account[0],account[a]);
						account[0] = account[0] * 2
					 - account[a];
					}
				}
					break;
						
				case 5:
				account[0] = Info(account[0]);
					break;	
				
				case 6:
					printf("You logged out of account 1\n\n");
					goto top;
			}	
		}
		
		while (command!=1);
	}
	
	else if (idd == id[1] && pass == pass1)
	{
		printf("You logged in account 2");
			
		do {
		
			printf("\nPick a command: \n\n1 - Exit\n2 - Draw\n3 - Put\n4 - Transfer\n5 - Info\n6 - Logout \n");
			scanf("%d",&command);
			
			switch (command)
			{
				case 2:
				account[0] = Draw(account[1]);
					break;
					
				case 3:
				account[0] = Put(account[1]);
					break;
				
				case 4:
					
				int a;
				printf("Please enter account id: ");
				scanf("%d",&a);
				for (int i = 0; i < 3; i++)
				{
			
				if (a == id[i])
				
					{
						account[a] = Transfer(account[1],account[a]);
						account[1] = account[1] * 2 - account[a];
					}
				}
					break;
					
				case 5:
				account[0] = Info(account[1]);
					break;
									
				case 6:
					printf("You logged out of account 2\n\n");
					goto top;	
			}	
		}
		
		while (command!=1);
	}
	
	else if (idd == id[2] && pass == pass2)
	{
		printf("You logged in account 3");
		
		do {
		
			printf("\nPick a command: \n\n1 - Exit\n2 - Draw\n3 - Put\n4 - Transfer\n5 - Info\n6 - Logout \n");
			scanf("%d",&command);
			
			switch (command)
			{
				case 2:
				account[0] = Draw(account[2]);
					break;
					
				case 3:
				account[0] = Put(account[2]);
					break;
					
				case 4:
					
				int a;
				printf("Please enter account id: ");
				scanf("%d",&a);
				for (int i = 0; i < 3; i++)
				{
			
				if (a == id[i])
				
					{
						account[a] = Transfer(account[2],account[a]);
						account[2] = account[2] * 2 - account[a];
					}
				}
					break;		
					
				case 5:
				account[0] = Info(account[2]);
					break;
									
				case 6:
					printf("You logged out of account 3\n\n");
					goto top;	
			}	
		}
		while (command!=1);
	}
	
	else printf("Wrong id or password please try again!");
	
return 0;
}