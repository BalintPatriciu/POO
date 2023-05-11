#pragma once
#ifndef player_h
#define player_h
#include <iostream>
#include "Game.h"
#include <string.h>

using namespace std;


class player
{
private:
	char username[250], password[250], email[250];
	int cod_secret;
public:
	player();
	void afisare_username_si_parola(char _username[250],char _password[250]);
	void salvare_username(char _username[250]);
	void salvare_email(char _email[250]);
	void salvare_password(char _password[250]);
	void afisare_username();
	bool verificare_username_existent(char _username[250]);
	bool password_check(char _password[250],int lungime_parola);
	bool verificare_email_existent(char _email[250]);
	friend void game::transfer_nume();





};































#endif