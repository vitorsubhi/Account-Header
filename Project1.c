#include "Header.h"
#include "Accounts.h"

int main()
{
	int menu, connected;
	char username[20], password[30];
	do
	{
		system ("clear");
		printf (" ______________\n");
		printf ("|              |\n");
		printf ("| 1 - Login    |\n");
		printf ("| 2 - Cadastro |\n");
		printf ("| 3 - Editar   |\n");
		printf ("|              |\n");
		printf ("| 0 - Sair     |\n");
		printf ("|______________|\n");
		scanf ("%d", &menu);
	}while (menu<0 || menu>3);

	if (menu == 1)
	{
		system ("clear");
		printf ("Username:");
		scanf ("%s", &username[0]);
		printf ("Password:");
		scanf ("%s", &password[0]);
		connected = login (username, password);
		if (connected == TRUE)
		{
			system ("clear");
			printf ("You have Logged in as %s\n", username);
		}
	}

	if (menu == 2)
	{
		system ("clear");
		printf ("Username:");
		scanf ("%s", &username[0]);
		printf ("Password:");
		scanf ("%s", &password[0]);
		newuser (username, password);
	}
	return 0;
}
