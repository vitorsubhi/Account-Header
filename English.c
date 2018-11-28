#include "Header.h"
#include "Accounts.h"

int main()
{
	int menu, connected; // Local Variable
	do
	{ // Show the Menu
		printf (" ______________\n");
		printf ("|              |\n");
		printf ("| 1 - Sign In  |\n");
		printf ("| 2 - Sign Up  |\n");
		printf ("| 3 - Delete   |\n");
		printf ("| 4 - Modify   |\n");
		printf ("|              |\n");
		printf ("| 0 - Exit     |\n");
		printf ("|______________|\n");
		printf ("Choice:");
		scanf ("%d", &menu); // Choose the Option of the Menu
	}while (menu<0 || menu>4);

	if (menu != 0)
		authenticate();
	switch (menu)
	{
		case 0:
			exit (EXIT_SUCCESS);
		break;
		case 1:
			connected = login (username, password); // Check if the Username and Password are Correct.
			if (connected == TRUE) // Check if the User is connected
			{
				printf ("You have Logged in as %s\n", username);
			}
		break;
		case 2:
			newuser (username, password); // Create the new Username
		break;
		case 3:
			deluser (username, password); // Delete the typed Username
		break;
		case 4:
			printf ("New password:");
			scanf ("%s", &newpassword[0]);
			edituser (username, password, newpassword); // Change User Password
		break;
	}
	#ifdef _WIN32
		system ("PAUSE");
	#endif
	return 0;
}
