#include "pch.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include "Game.h"
#include <iostream>

using namespace std;

void game::type(char* txt)
{
	if (txt == NULL)
	{
		return;
	}
	else
	{
		while (*txt)
		{
			printf("%c\xDB", *txt++);
			::Sleep(60);
			printf("\b \b");
			::Sleep(60);
		}
		::Sleep(300);
	}
}
void game::typef(char* txt)
{

	if (txt == NULL)
	{
		return;
	}
	else
	{
		while (*txt)
		{
			printf("%c\xDB", *txt++);
			::Sleep(30);
			printf("\b \b");
			::Sleep(30);
		}
		::Sleep(300);
	}
}
int game::start()
{
	char nume[250];
	int alg;

	type("Bine ai venit ");std::cout<<player<<'!'<<endl;
	type("Scopul tau este sa te lupti in aceasta padure"); std::cout << endl;
	typef("1.Da 2.Nu"); cin >> alg;
	switch (alg) {
	case 1:
		break;
	case 2:
		type("La revedere!");
		return 0;
		break;
	}
	type("Perfect!");
	typef("In acest joc va fi nevoie sa te lupti cu animalele padurii: ursi si lupi"); std::cout << endl;
	typef("Castigarea unui nivel iti va oferi cate un punct si 50 de galbeni"); std::cout << endl;
	type("Acum este timpul sa alegi una dintre urmatoarele rase: "); std::cout << endl;
	type("Pitic:"); std::cout << endl;
	typef("Statisticile acestei rase sunt:\n 1.Viata: 100\n 2.Putere: 100\n 3.Viclenie: 20\n 4.Carisma: 50\n 5.Inteligenta: 50"); std::cout << endl;
	type("Super abilitatea acestei clase se numeste \"Imbogatire\" si te poate ajuta sa faci rost de 50 de galbeni atunci cand ai nevoie."); std::cout << endl;
	type("Om:"); std::cout << endl;
	typef("Statisticile acestei rase sunt:\n 1.Viata: 100\n 2.Putere: 60\n 3.Viclenie: 40\n 4.Carisma: 80\n 5.Inteligenta: 100"); std::cout << endl;
	type("Super abilitatea acestei rase se numeste \"Vindecare\", datorita inteligentei lor oamenii au dezvoltat fel si fel de medicamente"); std::cout << endl;
	type("ce te vor ajuta sa te vindeci in lupta!"); std::cout << endl;
	type("Elf:"); std::cout << endl;
	typef("Statisticile acestei rase sunt:\n 1.Viata: 200\n 2.Putere: 30\n 3.Viclenie: 100\n 4.Carisma: 70\n 5.Inteligenta: 70"); std::cout << endl;
	type("Super Abilitatea acestei rase se numeste \"Disparitie\", datorita vicleniei lor elfii pot disparea pentru scurt timp din fata inamicului!"); std::cout << endl;

	typef("Tasteaza 1 pentru a alege pitic, 2 pentru a alege om sau 3 pentru a alege elf!"); cin >> alg;

	switch (alg) {
	case 1:
		strcpy(rasa, "pitic");
		nrrasa = 1;
		hp = 100;
		putere = 100;
		stealth = 20;
		charisma = 50;
		inteligenta = 40;
		abilitate = 1;
		break;
	case 2:
		strcpy(rasa, "om");
		nrrasa = 2;
		hp = 100;
		putere = 60;
		stealth = 40;
		charisma = 80;
		inteligenta = 100;
		abilitate = 2;
		break;
	case 3:
		strcpy(rasa, "elf");
		nrrasa = 3;
		hp = 200;
		putere = 30;
		stealth = 100;
		charisma = 70;
		inteligenta = 70;
		abilitate = 3;
		break;
	}
	type("Acum este timpul sa iti incepi aventura!"); std::cout << endl;

	std::cout << "Apasati tasta \"enter\" pentru a continua..." << endl;
	getch();
	system("cls");

	return 1;
}
int r()
{
	srand(time(NULL));
	int x = rand() % 10 + 1;
	return x;
}
int game::fereste()
{
	srand(time(NULL));
	int x = rand() % 3 + 1;
	int reusita1 = stealth / 2;
	int reusita2 = stealth * x;

	return reusita2;
}
int game::atac_surpriza()
{
	srand(time(NULL));
	int x = rand() % 3 + 1;
	int reusita1 = inteligenta / 2;
	int reusita2 = reusita1 * x;

	return reusita2;
}
int game::damage()
{
	srand(time(NULL));
	int x = rand() % 10 + 1;
	::Sleep(1000);

	return putere / x;
}
int game::random()
{
	srand(time(NULL));
	int a = rand() % 2 + 1;

	return a;
}
int apower()
{
	srand(time(NULL));
	int dmg = rand() % 100 + 40;

	return dmg;
}
int animal_damage1(int power)
{
	srand(time(NULL));
	int x = rand() % 3 + 1;
	::Sleep(1000);

	return power / x;
}
int animal_damage2(int power)
{
	srand(time(NULL));
	int x = rand() % 5 + 1;
	::Sleep(1000);

	return power / x;
}
int animal_damage3(int power)
{
	srand(time(NULL));
	int x = rand() % 7 + 1;
	::Sleep(1000);

	return power / x;
}
int game::lupta()
{
	int x = random();
	if (x == 1)
	{
		type("Te-ai intalnit cu un urs!"); std::cout << endl;

	}
	else
	{
		type("Te-ai intalnit cu un lup!"); std::cout << endl;
		x = 100;
	}

	int ahp = 100, atac, dmg, alg, block, win;
	int ferit = 0, abilitate = 0;
	int aputere = apower();

	srand(time(NULL));
	atac = rand() % 3 + 1;
	::Sleep(1000);

	atac = atac + x;


	while (ahp > 0 && hp > 0)
	{
		if (ferit == 1)
		{
			typef("Te-ai ferit!"); std::cout << endl;
			goto shield;
		}
		switch (atac) {
		case 2:
			typef("Ursul te loveste cu gheara!"); std::cout << endl;
			dmg = animal_damage1(aputere);
			typef("Lovitura ursului ti-a scazut "); std::cout << dmg; typef(" puncte de viata!"); std::cout << endl;
			hp = hp - dmg;
			break;
		case 3:
			typef("Ursul te-a msucat!"); std::cout << endl;
			dmg = animal_damage2(aputere);
			typef("Muscatura ursului ti-a scazut "); std::cout << dmg; typef(" puncte de viata!"); std::cout << endl;
			hp = hp - dmg;
			break;
		case 4:
			typef("Ursul a sarit pe tine!"); std::cout << endl;
			dmg = animal_damage3(aputere);
			typef("Ai pierdut "); std::cout << dmg; typef(" puncte de viata!"); std::cout << endl;
			hp = hp - dmg;
			break;
		case 101:
			typef("Lupul te loveste cu gheara!"); std::cout << endl;
			dmg = animal_damage1(aputere);
			typef("Lovitura lupului ti-a scazut "); std::cout << dmg; typef(" puncte de viata!"); std::cout << endl;
			hp = hp - dmg;
			break;
		case 102:
			typef("Lupul te-a msucat!"); std::cout << endl;
			dmg = animal_damage2(aputere);
			typef("Muscatura lupului ti-a scazut "); std::cout << dmg; typef(" puncte de viata!"); std::cout << endl;
			hp = hp - dmg;
			break;
		case 103:
			typef("Lupul a sarit pe tine!"); std::cout << endl;
			dmg = animal_damage3(aputere);
			typef("Ai pierdut "); std::cout << dmg; typef(" puncte de viata!"); std::cout << endl;
			hp = hp - dmg;
			break;

		}

	shield:

		if (hp <= 0)
		{
			typef("Ai fost infrant!");
			win = 0;
			return win;
		}
		else
		{
			typef("Mai ai "); std::cout << hp; typef(" puncte de viata!"); std::cout << endl;
		}
		::Sleep(5000);

		system("cls");

	Abilitate:


		typef("Este randul tau! Alege una din urmatoarele actiuni!:"); std::cout << endl;
		typef(" 1.Atac (Putere)\n 2.Atac surpriza (Inteligenta)\n 3.Ferestete (Viclenie)\n");
		if (nrrasa == 2)
		{
			typef("4. Vindecare (Abilitate speciala)"); std::cout << endl;
		}
		else if (nrrasa == 3)
		{
			typef("4. Disparitie (Abilitate speciala)"); std::cout << endl;
		}
		cin >> alg;

		switch (alg) {
		case 1:
			block = r();
			if (block == 1)
			{
				typef("Inamicul s-a ferit!"); std::cout << endl;
			}
			else
			{
				dmg = damage();
				ahp = ahp - dmg;
				typef("Ai lovit inamicul si i-au fost scazute "); std::cout << dmg; typef(" puncte de viata"); std::cout << endl;
			}
			break;
		case 2:
			if (atac_surpriza() > 50)
			{
				dmg = damage() * 2;
				ahp = ahp - dmg;
				typef("Ai efectuat un atac surpriza asupra inamicului si i-ai scazut "); std::cout << dmg; typef(" puncte de viata!"); std::cout << endl;
			}
			else
			{
				typef("Atacul a esuat!"); std::cout << endl;
			}
			break;
		case 3:
			if (fereste() > 50)
			{
				typef("Ai reusit sa iti dai seama cum sa te feresti! Esti imun la urmatorul atac al inamicului"); std::cout << endl;
				ferit = 1;
			}
			else
			{
				typef("Nu ai reusit sa te feresti!"); std::cout << endl;
			}
			break;
		case 4:
			if (nrrasa == 2 && abilitate == 0)
			{
				typef("Ti-ai folosit abilitatea de om si ai primit 50 de puncte de viata!"); std::cout << endl;
				hp = hp + 50;
				abilitate = 1;
				goto FINAL;
			}
			else if (nrrasa == 2 && abilitate == 1)
			{
				typef("Ti-ai folosit deja abilitatea!"); std::cout << endl;
				goto Abilitate;
			}
			else if (nrrasa == 3 && abilitate == 0)
			{
				typef("Felicitari ai reusit sa fugi din fata inamicului"); std::cout << endl;
				ahp = 0;
				abilitate = 1;
				goto FINAL;
			}
			else if (nrrasa == 3 && abilitate == 1)
			{
				typef("Ti-ai folosit deja abilitatea!"); std::cout << endl;
				goto Abilitate;
			}
		FINAL:
			break;
		case 5:
			ahp = 0;
			break;

		}

		system("cls");
	}
	if (hp == 0)
	{
		typef("Ai pierdut batalia!"); std::cout << endl;
		win = 0;
	}
	else
	{
		typef("Ai invins!"); std::cout << endl;
		typef("Ai primit 50 de galbeni!"); std::cout << endl;
		bani = bani + 50;
		win = 1;
		scor = scor + 1;
	}
	system("cls");

	typef("Acum este timpul pentru cumparatauri!"); std::cout << endl;
	if (nrrasa == 1)
	{
		typef("Doresti sa iti folosesti abilitatea si sa primesti 50 de galbeni?\n1.Da\n2.Nu"); cin >> alg;
		switch (alg)
		{
		case 1:
			bani = bani + 50;
			break;
		case 2:
			typef("Nu ti-ai folosit abilitatea."); std::cout << endl;
			break;
		}
	}

MAGAZIN:

	typef("Bine ai venit la magazin! Ce doresti sa achizitionezi?:\n1.Potiune de vindecare(+30pv) - 50 galbeni\n2.Imbunatatire sabie(+5 putere) - 50 galbeni\n3.Carte(+10 inteligenta) - 150 galbeni\n4. Nu doresc sa cumpar nimic\n");
	cin >> alg;

	switch (alg) {
	case 1:
		if (bani < 50)
		{
			typef("Nu ai destui galbeni!"); std::cout << endl;
			goto MAGAZIN;
		}
		else
		{
			typef("Ai fost vindecat!"); std::cout << endl;
			hp = hp + 30;
			bani = bani - 50;
			goto MAGAZIN;
		}
		break;
	case 2:
		if (bani < 50)
		{
			typef("Nu ai destui galbeni!"); std::cout << endl;
			goto MAGAZIN;
		}
		else
		{
			typef("Ti-a fost imbunatatita sabia"); std::cout << endl;
			putere = putere + 5;
			bani = bani - 50;
			goto MAGAZIN;
		}
		break;
	case 3:
		if (bani < 150)
		{
			typef("Nu ai destui galbeni!"); std::cout << endl;
			goto MAGAZIN;
		}
		else
		{
			typef("Ai primit cartea!"); std::cout << endl;
			inteligenta = inteligenta + 10;
			bani = bani - 150;
			goto MAGAZIN;
		}
		break;
	case 4:
		typef("Ai parasit magazinul"); std::cout << endl;
		break;
	}
	system("cls");

	if (nrrasa < 3 && hp > 100)
	{
		hp = 100;
	}


	return win;
}
void game::joc()
{
	int win = 1;
	int start_finalizat = start();
Loop:

	if (win == 1 && start_finalizat == 1 )
	{
		typef("Scorul tau este de "); std::cout << scor << endl; typef(" puncte!"); std::cout << endl;
		win = lupta();
		goto Loop;
	}
	else
	{
		type("Jocul s-a incheiat!"); std::cout << endl;
	}

}




