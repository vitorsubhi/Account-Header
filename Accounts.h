#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#define TRUE 1
#define FALSE 0

	char username[20], password[30], checkpass[30], newpassword[30];

	void clearscreen(void);
	void authenticate(void);
	int login(char user[20], char pass[30]);
	int checkuser(char user[20]);
	int newuser(char user[20], char pass[30]);
	int deluser(char user[20], char pass[30]);
	int edituser(char user[20], char pass[30], char newpass[30]);
#endif
