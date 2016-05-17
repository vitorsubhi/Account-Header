int login(char user[20], char pass[30])
{
	FILE *fp;
	char checkpass[20];
	char local[50]="Files/Users/";
	strcat (local, user);
	fp = fopen (local, "r");
	if (fp == NULL)
	{
		printf ( "Username or/and Password is/are Incorrect.\n");
	}
	else
	{
		while (fgets(checkpass, 20, fp) != NULL)
		{
		}
		fscanf (fp, "%s", pass);
		if (strcmp(checkpass, pass) != 0)
		{
			printf ("Username or/and Password is/are Incorrect.\n");
		}
		else
		{
			return 1;
		}
	}
}

int newuser(char user[20], char pass[30])
{
	FILE *fp;
	char local[50]="Files/Users/";
        strcat (local, user);
	fp = fopen (local, "r");
	if (fp == NULL)
	{
		fp = fopen (local, "w");
		fprintf (fp, "%s", pass);
		printf ("Your Account has been created successfully\n");
	}
	else
	{
		printf ("Account already exists, try another Username\n");
	}
//fclose (fp);
}
