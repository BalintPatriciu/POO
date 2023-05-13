#include "pch.h"
#include "player.h"
#include <iostream>
#include <conio.h>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

player::player()
{
	username[0] = '\0';
	password[0] = '\0';
	email[0] = '\0';
	cod_secret = 0;
}
void player::afisare_username_si_parola(char _username[250],char _password[250])
{
	char x;
	cout << endl << endl << "username: " << username << "_username:   " << _username;
	cout << endl << endl << "password: " << password << "_password:    " << _password;

	cin >> x;
}
void player::salvare_username(char _username[250])
{
	strcpy(username, _username);
}
void player::salvare_email(char _email[250])
{
	strcpy(email, _email);
}
void player::salvare_password(char _password[250])
{
	strcpy(password, _password);
}
void player::afisare_username()
{
	cout << username;
}
bool player::verificare_username_existent(char _username[250])
{
	
	if (strcmp(username, _username) == 0)
		return 0;
	else
		return 1;
}
bool player::password_check(char _password[250],int lungime_parola)
{
	for (int i = 0; i < lungime_parola; i++)
		if (_password[i] != password[i])
			return 1;

		else return 0;
	
	
	
	}
bool player::verificare_email_existent(char _email[250])
{
	if (strcmp(email, _email) == 0)
		return 0;
	else
		return 1;
}
