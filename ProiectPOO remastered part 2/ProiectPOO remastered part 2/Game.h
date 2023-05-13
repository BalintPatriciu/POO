#pragma once
#ifndef Game_h
#define Game_h
#include "pch.h"
#include <iostream>

using namespace std;

class game {
public:
    char player[250], clasa[250], rasa[250], gen[250];
    int scor, level, hp, putere, stealth, charisma, inteligenta, abilitate, nrrasa, bani;
    //Pentru abilitate valoarea 1 = pitic, 2 = om, 3 = elf;

    int start();
    void type(char* txt);
    void typef(char* txt);
    int damage();
    int lupta();
    int random();
    int atac_surpriza();
    int fereste();
    void joc();
    void transfer_nume();
};












#endif