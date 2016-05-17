#include "Header.h"
#include "Accounts.h"

int main()
{
	int menu, connected; // Local Variable
	char username[20], password[30]; // Local Variable
	do
	{ // Show the Menu
		clearscreen();
		printf (" ______________\n");
		printf ("|              |\n");
		printf ("| 1 - Sign In  |\n");
		printf ("| 2 - Sign Up  |\n");
		printf ("|              |\n");
		printf ("| 0 - Exit     |\n");
		printf ("|______________|\n");
		printf ("Choice:");
		scanf ("%d", &menu); // Choose the Option of the Menu
	}while (menu<0 || menu>2);

	if (menu == 0)
	{
		exit (EXIT_SUCCESS); // Exit the Program
	}

	if (menu == 1)
	{
		clearscreen(); // Clear the Screen
		printf ("Username:");
		scanf ("%s", &username[0]); // User enter the Username
		printf ("Password:");
		scanf ("%s", &password[0]); // User enter the Password
		connected = login (username, password); // Check if the Username and Password are Correct.
		if (connected == TRUE) // Check if the User is connected
		{
			system ("clear");
			printf ("You have Logged in as %s\n", username);
		}
	}

	if (menu == 2)
	{
		clearscreen(); // Clear the Screen
		printf ("Username:");
		scanf ("%s", &username[0]); // User enter the Username
		printf ("Password:");
		scanf ("%s", &password[0]); // User enter the Password
		newuser (username, password); // Create the new Username
	}
	#ifdef _WIN32
		system ("PAUSE");
	#endif
	return 0;
}
