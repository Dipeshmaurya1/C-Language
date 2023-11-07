#include<stdio.h>

main()

{
	int option;
		printf("Hello Sir/Mam How Can i help you?\n");
		printf("Select Option '1'to End the Call:\n");
		printf("Select Option '2'to Continue the Call:\n");
		scanf("%d",&option);
	switch(option)
	{
		int Choose;
		case 1: printf("Call Ended !");
		break;
		case 2: printf("You've Selectecd Otion 2,Now Please Choose Your Language to Continue :)\n\n");
		printf("Choose Your Language to Continue:\n\n");
		printf("1. English\n");
		printf("2. Hindi\n");
		scanf("%d",&Choose);
		switch(Choose)
		{
			case 1:printf("You Selected English\n\n");
			
			printf("Enter your Services\n");
		    printf("1.talk to customer care\n");
		    printf("2.Register Complain\n");
		    printf("3.Inquiry for service\n");
			
			printf("Enter the number to choose service : ");
			scanf("%d",&Choose);
			
			switch(Choose)
			{
				case 1:printf("Connecting you to customer care\n");
				break;
				case 2:printf("Registering your Complain\n");
				break;
				case 3:printf("Inquiry has been noticed for your service\n");
				break;
				default: printf("Enter Valid Number!!");
			}
			break;
			case 2:printf("You Selected Hindi\n\n");
			
			printf("Apni seva bataye\n");
		    printf("1.Customer care se baat karna chate hai\n");
		    printf("2.Complain register karwana chate hai\n");
		    printf("3.Seva ko leke koi inquiry karwana chate hai\n");
			
			printf("Enter the number to choose service : ");
			scanf("%d",&Choose);
			
			switch(Choose)
			{
				case 1:printf("Apko Customer care se connect kiya ja raha hai \n");
				break;
				case 2:printf("Apki Complain reregister ki ja rahi hai\n");
				break;
				case 3:printf("Inquiry ko apki seva ke suchit kardiya gaya hai\n");
				break;
				default: printf("Enter Valid Number!!");
		    }
		break;
  	    }
	break;   
    }
}