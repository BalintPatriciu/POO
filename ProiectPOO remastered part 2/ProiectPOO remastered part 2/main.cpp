#include "pch.h"
#include "player.h"
#include <iostream>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "Game.h"
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
using namespace std::this_thread;
using namespace std::chrono;
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

/// Proiect realizat de :Balint Patriciu si Postolache David
///spanzuratoare ------ De la linia 20 Pana la linia 756 este proiectul la structuri de date (+inca cateva librarii de mai 
/// sus). Mai exista o singura linie de cod si anume  linia 1780 in care este pusa functia care pune in functiune tot 
/// proiectul de la SD si anume jocul spanzuratoarea. La linia 149 este structura struct folosita pentru proiectul de la SD
void start()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                                   Spanzuratoare.";
	cout << endl << "                                                             (Press any key to contiune)";
	getch();
}
char lista_cuvinte[250][250] = {
" ",
"electroglotospectrografie",
"pneumonoultramicroscopicsilicovolcaniconicoza",
"difosfopiridinnucleotidpirofosfataza",
"encefalomielopoliradiculonevrita",
"gastropiloroduodenojejunostomie",
"euroobligatiune",
"semiautopropulsatie",
"bildungsromanesc",
"treieratoarei",
"protocromozom",
"degenerescrentele",
"citomegalovirusuri",
"supercalifragilisticexpialidocious",
"dinozaur",
"castan",
"carioci",
"ochelari",
"icoana",
"darapanat",
"castron",
"exteriorizare",
"curtezan",
"parmezan",
"lichior",
"rasina",
"papaia",
"piper",
"irigare",
"depresiv",
"xilofon",
"saxofon",
"cartuse",
"grajdi",
"decenii",
"lucerna",
"patrula",
"telenciclopedie",
"oxigen",
"solidaritate",
"impacientat",
"funingina",
"bibliografie",
"neinteligibil",
"telenciclopedie",
"televiziune",
"streang",
"trunchi",
"ghiont",
"stramt",
"strans",
"strict",
"zbenghi",
"sfincsi",
"prompt",
"transplant",
"masina",
"casa",
"salvare",
"temperament",
"schizofrenic",
"alfabeticeste",
"sternocleidomastoidian",
"electrocardiograma",
"xilofon",
"pneumatic",
"zbenghi",
"transplant",
"coincidenta",
"pupaza",
"destrabalare",
"monetarie",
"latifundiar",
"autoinsamantare",
"opiaceu",
"darapanatura",
"arbitrarietate",
"pneumogastric",
"stupefiant",
"soios",
"bibliologie",
"necuvantatoare",
"complexitate",
"metalurgie",
"electroglotospectrografie",
"feromicroazotombohidric",
"neologism",
"spectru",
"radiografie",
"neindemanatic",
"jargon",
"sintaxa",
"sintagma",
"incapabil",
"necooperant",
"falanga",
"metacarpiene",
"ciclic",
"fotosinteza",
"clorofila",
"neinfricat",
"licarire",
"trapezoid",
"pisiform",
"aureola",
"bolerou",
"nostalgie",
"elocvent",
"regenerator",
"crizantema",
"ombrogen",
"hemocrom",
"romanizare",
"dermatovenerologie",
"memorandum",
"pozomoc",
"pneumatic",
"homodiegetic",
"carburator",
};
struct cuvinte
{
	char cuvant[250], cuvant_litere_lipsa[250];
	int contor_greseli = 0, dimensiune_cuvant_litere_lipsa = -1;

}Cuvinte[120];
void spanzuratoare(int contor_greseli)
{
	char desen[100][100];
	cout << endl << endl << endl << endl << endl << endl;


	int i, j, x;
	///                                                0123456789ABCDEFGHIJ
	   ///                                            0   __________
		  ///                                         1  |          |
			 ///                                      2  |         _|_
				///                                   3  |        |0_0|
				   ///                                4  |         | |
	///                                               5  |       __| |__
	   ///                                            6  |      /  | |  \
	      ///                                         7  |         | |
			 ///                                      8  |        /   \
	            ///                                   9  |       /     \
	               ///                               10  |
					  ///                            11__|__


	for (i = 0; i <= 12; i++)
		for (j = 0; j <= 18; j++)
			desen[i][j] = ' ';



	desen[11][0] = '_'; desen[11][1] = '_';
	desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
	desen[0][3] = '_'; desen[11][3] = '_';
	desen[0][4] = '_'; desen[11][4] = '_';
	desen[0][5] = '_';
	desen[0][6] = '_';
	desen[0][7] = '_';
	desen[0][8] = '_';
	desen[0][9] = '_'; desen[6][9] = '/';
	desen[0][10] = '_'; desen[5][10] = '_'; desen[9][10] = '/';///A
	desen[0][11] = '_'; desen[3][11] = '|'; desen[5][11] = '_'; desen[8][11] = '/';///B
	desen[0][12] = '_'; desen[2][12] = '_'; desen[3][12] = 'X'; desen[4][12] = '|'; desen[5][12] = '|'; desen[6][12] = '|'; desen[7][12] = '|';///C
	desen[1][13] = '|'; desen[2][13] = '|'; desen[3][13] = '_';///D
	desen[2][14] = '_'; desen[3][14] = 'X'; desen[4][14] = '|'; desen[5][14] = '|'; desen[6][14] = '|'; desen[7][14] = '|';///E
	desen[3][15] = '|'; desen[5][15] = '_'; desen[8][15] = 92;///F
	desen[5][16] = '_'; desen[9][16] = 92;///G
	desen[6][17] = 92;///H

	if (contor_greseli == 0)
	{

		for (i = 0; i <= 12; i++)
			for (j = 0; j <= 18; j++)
				desen[i][j] = ' ';
		desen[0][10] = '_'; desen[0][9] = '_';
		desen[1][13] = '|'; desen[2][13] = '|'; desen[0][11] = '_'; desen[0][12] = '_';
		desen[11][0] = '_'; desen[11][1] = '_';
		desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
		desen[0][3] = '_'; desen[11][3] = '_';
		desen[0][4] = '_'; desen[11][4] = '_';
		desen[0][5] = '_';
		desen[0][6] = '_';
		desen[0][7] = '_';
		desen[0][8] = '_';
		for (i = 0; i <= 11; i++)
		{
			for (x = 1; x <= 70; x++)///51///70
				cout << " ";
			for (j = 0; j <= 17; j++)
				cout << desen[i][j];
			cout << endl;
		}


	}

	if (contor_greseli == 1)
	{

		for (i = 0; i <= 12; i++)
			for (j = 0; j <= 18; j++)
				desen[i][j] = ' ';

		desen[2][12] = '_';  desen[2][14] = '_'; desen[3][11] = '|'; desen[3][12] = '0'; desen[3][13] = '_'; desen[3][14] = '0'; desen[3][15] = '|';


		desen[0][10] = '_'; desen[0][9] = '_';
		desen[1][13] = '|'; desen[2][13] = '|'; desen[0][11] = '_'; desen[0][12] = '_';
		desen[11][0] = '_'; desen[11][1] = '_';
		desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
		desen[0][3] = '_'; desen[11][3] = '_';
		desen[0][4] = '_'; desen[11][4] = '_';
		desen[0][5] = '_';
		desen[0][6] = '_';
		desen[0][7] = '_';
		desen[0][8] = '_';
		for (i = 0; i <= 11; i++)
		{
			for (x = 1; x <= 70; x++)
				cout << " ";
			for (j = 0; j <= 17; j++)
				cout << desen[i][j];
			cout << endl;
		}
	}

	if (contor_greseli == 2)
	{
		for (i = 0; i <= 12; i++)
			for (j = 0; j <= 18; j++)
				desen[i][j] = ' ';

		desen[4][12] = '|'; desen[5][12] = '|'; desen[6][12] = '|'; desen[7][12] = '|';

		desen[4][14] = '|'; desen[5][14] = '|'; desen[6][14] = '|'; desen[7][14] = '|';

		desen[2][12] = '_';  desen[2][14] = '_'; desen[3][11] = '|'; desen[3][12] = '0'; desen[3][13] = '_'; desen[3][14] = '0'; desen[3][15] = '|';


		desen[0][10] = '_'; desen[0][9] = '_';
		desen[1][13] = '|'; desen[2][13] = '|'; desen[0][11] = '_'; desen[0][12] = '_';
		desen[11][0] = '_'; desen[11][1] = '_';
		desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
		desen[0][3] = '_'; desen[11][3] = '_';
		desen[0][4] = '_'; desen[11][4] = '_';
		desen[0][5] = '_';
		desen[0][6] = '_';
		desen[0][7] = '_';
		desen[0][8] = '_';
		for (i = 0; i <= 11; i++)
		{
			for (x = 1; x <= 70; x++)
				cout << " ";
			for (j = 0; j <= 17; j++)
				cout << desen[i][j];
			cout << endl;
		}
	}


	if (contor_greseli == 3)
	{
		for (i = 0; i <= 12; i++)
			for (j = 0; j <= 18; j++)
				desen[i][j] = ' ';

		desen[4][12] = '|'; desen[5][12] = '|'; desen[6][12] = '|'; desen[7][12] = '|';

		desen[4][14] = '|'; desen[5][14] = '|'; desen[6][14] = '|'; desen[7][14] = '|';

		desen[2][12] = '_';  desen[2][14] = '_'; desen[3][11] = '|'; desen[3][12] = '0'; desen[3][13] = '_'; desen[3][14] = '0'; desen[3][15] = '|';
		desen[6][9] = '/';
		desen[5][10] = '_'; desen[5][11] = '_';
		desen[0][10] = '_'; desen[0][9] = '_';
		desen[1][13] = '|'; desen[2][13] = '|'; desen[0][11] = '_'; desen[0][12] = '_';
		desen[11][0] = '_'; desen[11][1] = '_';
		desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
		desen[0][3] = '_'; desen[11][3] = '_';
		desen[0][4] = '_'; desen[11][4] = '_';
		desen[0][5] = '_';
		desen[0][6] = '_';
		desen[0][7] = '_';
		desen[0][8] = '_';
		for (i = 0; i <= 11; i++)
		{
			for (x = 1; x <= 70; x++)
				cout << " ";
			for (j = 0; j <= 17; j++)
				cout << desen[i][j];
			cout << endl;
		}
	}


	if (contor_greseli == 4)
	{
		for (i = 0; i <= 12; i++)
			for (j = 0; j <= 18; j++)
				desen[i][j] = ' ';

		desen[4][12] = '|'; desen[5][12] = '|'; desen[6][12] = '|'; desen[7][12] = '|'; desen[5][16] = '_';

		desen[4][14] = '|'; desen[5][14] = '|'; desen[6][14] = '|'; desen[7][14] = '|'; desen[6][17] = 92;

		desen[2][12] = '_';  desen[2][14] = '_'; desen[3][11] = '|'; desen[3][12] = '0'; desen[3][13] = '_'; desen[3][14] = '0'; desen[3][15] = '|';
		desen[6][9] = '/';
		desen[5][10] = '_'; desen[5][11] = '_'; desen[5][15] = '_';
		desen[0][10] = '_'; desen[0][9] = '_';
		desen[1][13] = '|'; desen[2][13] = '|'; desen[0][11] = '_'; desen[0][12] = '_';
		desen[11][0] = '_'; desen[11][1] = '_';
		desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
		desen[0][3] = '_'; desen[11][3] = '_';
		desen[0][4] = '_'; desen[11][4] = '_';
		desen[0][5] = '_';
		desen[0][6] = '_';
		desen[0][7] = '_';
		desen[0][8] = '_';
		for (i = 0; i <= 11; i++)
		{
			for (x = 1; x <= 70; x++)
				cout << " ";
			for (j = 0; j <= 17; j++)
				cout << desen[i][j];
			cout << endl;
		}
	}


	if (contor_greseli == 5)
	{
		for (i = 0; i <= 12; i++)
			for (j = 0; j <= 18; j++)
				desen[i][j] = ' ';

		desen[4][12] = '|'; desen[5][12] = '|'; desen[6][12] = '|'; desen[7][12] = '|'; desen[5][16] = '_'; desen[8][11] = '/';

		desen[4][14] = '|'; desen[5][14] = '|'; desen[6][14] = '|'; desen[7][14] = '|'; desen[6][17] = 92;

		desen[2][12] = '_';  desen[2][14] = '_'; desen[3][11] = '|'; desen[3][12] = '0'; desen[3][13] = '_'; desen[3][14] = '0'; desen[3][15] = '|'; desen[9][10] = '/';
		desen[6][9] = '/';
		desen[5][10] = '_'; desen[5][11] = '_'; desen[5][15] = '_';
		desen[0][10] = '_'; desen[0][9] = '_';
		desen[1][13] = '|'; desen[2][13] = '|'; desen[0][11] = '_'; desen[0][12] = '_';
		desen[11][0] = '_'; desen[11][1] = '_';
		desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
		desen[0][3] = '_'; desen[11][3] = '_';
		desen[0][4] = '_'; desen[11][4] = '_';
		desen[0][5] = '_';
		desen[0][6] = '_';
		desen[0][7] = '_';
		desen[0][8] = '_';
		for (i = 0; i <= 11; i++)
		{
			for (x = 1; x <= 70; x++)
				cout << " ";
			for (j = 0; j <= 17; j++)
				cout << desen[i][j];
			cout << endl;
		}
	}

	if (contor_greseli == 6)
	{
		for (i = 0; i <= 12; i++)
			for (j = 0; j <= 18; j++)
				desen[i][j] = ' ';

		desen[4][12] = '|'; desen[5][12] = '|'; desen[6][12] = '|'; desen[7][12] = '|'; desen[5][16] = '_'; desen[8][11] = '/'; desen[9][16] = 92;

		desen[4][14] = '|'; desen[5][14] = '|'; desen[6][14] = '|'; desen[7][14] = '|'; desen[6][17] = 92;

		desen[2][12] = '_';  desen[2][14] = '_'; desen[3][11] = '|'; desen[3][12] = 'X'; desen[3][13] = '_'; desen[3][14] = 'X'; desen[3][15] = '|'; desen[9][10] = '/';
		desen[6][9] = '/'; desen[8][15] = 92;
		desen[5][10] = '_'; desen[5][11] = '_'; desen[5][15] = '_';
		desen[0][10] = '_'; desen[0][9] = '_';
		desen[1][13] = '|'; desen[2][13] = '|'; desen[0][11] = '_'; desen[0][12] = '_';
		desen[11][0] = '_'; desen[11][1] = '_';
		desen[1][2] = '|'; desen[2][2] = '|'; desen[3][2] = '|'; desen[4][2] = '|'; desen[5][2] = '|'; desen[6][2] = '|'; desen[7][2] = '|'; desen[8][2] = '|'; desen[9][2] = '|'; desen[10][2] = '|'; desen[11][2] = '|';
		desen[0][3] = '_'; desen[11][3] = '_';
		desen[0][4] = '_'; desen[11][4] = '_';
		desen[0][5] = '_';
		desen[0][6] = '_';
		desen[0][7] = '_';
		desen[0][8] = '_';
		for (i = 0; i <= 11; i++)
		{
			for (x = 1; x <= 70; x++)
				cout << " ";
			for (j = 0; j <= 17; j++)
				cout << desen[i][j];
			cout << endl;
		}
	}
	//for(i=0;i<=11;i++)
	 //   {cout<<"                                                                             ";
	 //       for( j=0;j<=17;j++)
	//    cout<<desen[i][j];
	//cout<<endl;}


}
int random()
{
	int random;
	srand(time(NULL));
	random = rand() % 118 + 1;

	return random;
}
void initializare_cuvant_litere_lipsa_si_modificare_cuvant_original(int contor_cuvinte, cuvinte Cuvinte[120])
{
	char prima_litera, ultima_litera;
	int i;
	prima_litera = Cuvinte[contor_cuvinte].cuvant[0];
	ultima_litera = Cuvinte[contor_cuvinte].cuvant[strlen(Cuvinte[contor_cuvinte].cuvant) - 1];
	Cuvinte[contor_cuvinte].cuvant_litere_lipsa[0] = prima_litera;
	Cuvinte[contor_cuvinte].cuvant_litere_lipsa[1] = ' ';
	Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa += 2;
	for (i = 1; i < strlen(Cuvinte[contor_cuvinte].cuvant) - 1; i++)
		if (Cuvinte[contor_cuvinte].cuvant[i] == prima_litera)
		{
			Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
			Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa] = prima_litera;
			Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
			Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa] = ' ';
		}
		else if (Cuvinte[contor_cuvinte].cuvant[i] == ultima_litera)
		{
			Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
			Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa] = ultima_litera;
			Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
			Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa] = ' ';
		}
		else
		{
			Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
			Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa] = '_';
			Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
			Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa] = ' ';

		}

	Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa++;
	Cuvinte[contor_cuvinte].cuvant_litere_lipsa[Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa] = ultima_litera;


	///modificare cuvant original a.i. sa fie mai usoara verificarea


	int dimensiune;
	dimensiune = strlen(Cuvinte[contor_cuvinte].cuvant);
	char copie[250];
	int dim = 0;
	for (i = 0; i < dimensiune; i++)
	{
		copie[dim++] = Cuvinte[contor_cuvinte].cuvant[i];
		if (i != dimensiune - 1)
			copie[dim++] = ' ';
	}
	strcpy(Cuvinte[contor_cuvinte].cuvant, copie);


}
void initializare_cuvant(int contor_cuvinte, cuvinte Cuvinte[120])
{

	strcpy(Cuvinte[contor_cuvinte].cuvant, lista_cuvinte[random()]);



}
void afisare_cuvant_litere_lipsa(cuvinte Cuvinte[120], int contor_cuvinte, char litera, bool corect,bool existent)
{
	int dimensiune, i;
	dimensiune = Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
	if (dimensiune % 2 == 1)
		for (i = 1; i <= 72 - (dimensiune - 1) / 2; i++)
			cout << " ";
	else
		for (i = 1; i <= 72 - (dimensiune) / 2; i++)
			cout << " ";
	for (i = 0; i <= dimensiune; i++)
		if (corect == 1 && Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i] == litera)
		{

			SetConsoleTextAttribute(h, 1);
			cout << Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i];
			SetConsoleTextAttribute(h, 7);
		}
		else if (existent == 1 && Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i] == litera)
	{
		SetConsoleTextAttribute(h, 2);
		cout << Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i];
		SetConsoleTextAttribute(h, 7);

		}
		else
			cout << Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i];

}
bool eroare_citire_litera(char litera)
{

	if (litera < 'a' || litera>'z')
		return 0;

	return 1;


}
void citire_litera(char& litera)
{
	int x;
	x = getch();

	litera = x;
}
bool litera_nu_se_afla_in_cuvant(char litera, cuvinte Cuvinte[120], int contor_cuvinte)
{
	int dimensiune;
	dimensiune = Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
	int i;

	for (i = 0; i <= dimensiune; i++)
		if (Cuvinte[contor_cuvinte].cuvant[i] == litera)
			return 1;


	return 0;



}
bool litera_deja_existenta(char litera, cuvinte Cuvinte[120], int contor_cuvinte)
{
	int dimensiune;
	dimensiune = Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
	int i;

	for (i = 0; i <= dimensiune; i++)
		if (Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i] == litera)
			return 0;

	return 1;


}
void inlocuire(char litera, cuvinte Cuvinte[120], int contor_cuvinte)
{
	int dimensiune;
	dimensiune = Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
	int i;
	for (i = 0; i <= dimensiune; i++)
		if (litera == Cuvinte[contor_cuvinte].cuvant[i])
			Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i] = litera;
}
bool complet(char litera, cuvinte Cuvinte[120], int contor_cuvinte)
{
	int dimensiune;
	dimensiune = Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
	int i;
	for (i = 0; i <= dimensiune; i++)
		if (Cuvinte[contor_cuvinte].cuvant[i] != Cuvinte[contor_cuvinte].cuvant_litere_lipsa[i])
			return 0;


	return 1;
}
void spanzuratoare_int_main()
{
	int contor_cuvinte = 1, decizie = -1, scor = 0, i, dimensiune;
	char litera;
	bool corect,existent=0;
	start();
	while (contor_cuvinte <= 119 && litera != 27 && decizie != 27)
	{
		system("cls");
		cout << "Scor: " << scor;
		/// enter pentru urmatorul cuvant, space pentru a incepe din nou, esc pentru a inchide
		initializare_cuvant(contor_cuvinte, Cuvinte);
		initializare_cuvant_litere_lipsa_si_modificare_cuvant_original(contor_cuvinte, Cuvinte);
		cout << endl;
		spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
		cout << endl << endl;
		afisare_cuvant_litere_lipsa(Cuvinte, contor_cuvinte, litera, corect,existent);
		cout << endl << endl;
		citire_litera(litera);

		while (complet(litera, Cuvinte, contor_cuvinte) == 0 && Cuvinte[contor_cuvinte].contor_greseli < 6 && litera != 27 && decizie != 27)
		{
			if (eroare_citire_litera(litera) == 0)
			{
				system("cls");
				cout << "Scor: " << scor;
				cout << endl;
				spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
				cout << endl << endl;
				afisare_cuvant_litere_lipsa(Cuvinte, contor_cuvinte, litera, corect,existent);
				cout << endl << endl;

				SetConsoleTextAttribute(h, 14);
				cout << "                                                 Nu puteti introduce alt ceva in afara de litere mici!";
				SetConsoleTextAttribute(h, 7);


			}

			else if (litera_deja_existenta(litera, Cuvinte, contor_cuvinte) == 0)
			{
				system("cls");
				existent = 1;
				cout << "Scor: " << scor;
				cout << endl;
				spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
				cout << endl << endl;
				afisare_cuvant_litere_lipsa(Cuvinte, contor_cuvinte, litera, corect,existent);
				cout << endl << endl;
				SetConsoleTextAttribute(h, 2);
				cout << "                                                          Litera se afla deja in cuvant!";///cu galben si literele cu albastru
				SetConsoleTextAttribute(h, 7);
				existent = 0;

				///  citire_litera(litera);
				 /// cout<<endl<<endl;
				 /// afisare_cuvant_litere_lipsa(Cuvinte,contor_cuvinte);
			}

			else if (litera_nu_se_afla_in_cuvant(litera, Cuvinte, contor_cuvinte) == 0)///cu rosu (mesajul)
			{
				Cuvinte[contor_cuvinte].contor_greseli++;
				system("cls");
				cout << "Scor: " << scor;
				cout << endl;
				spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
				cout << endl << endl;
				afisare_cuvant_litere_lipsa(Cuvinte, contor_cuvinte, litera, corect,existent);
				cout << endl << endl;
				SetConsoleTextAttribute(h, 4);
				cout << "                                                           Litera nu se afla in cuvant!";
				SetConsoleTextAttribute(h, 7);




			}


			else if (complet(litera, Cuvinte, contor_cuvinte) == 0 && Cuvinte[contor_cuvinte].contor_greseli < 6)
			{
				inlocuire(litera, Cuvinte, contor_cuvinte);
				corect = 1;
				system("cls");
				cout << "Scor: " << scor;
				cout << endl;
				spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
				cout << endl << endl;
				afisare_cuvant_litere_lipsa(Cuvinte, contor_cuvinte, litera, corect,existent);
				cout << endl << endl;
			}
			corect = 0;
			if (complet(litera, Cuvinte, contor_cuvinte) == 0 && Cuvinte[contor_cuvinte].contor_greseli < 6)
				citire_litera(litera);
		}
		decizie = -1;
		if (complet(litera, Cuvinte, contor_cuvinte) == 1)
		{
			system("cls");
			cout << "Scor: " << ++scor;
			cout << endl;
			spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
			cout << endl << endl;
			afisare_cuvant_litere_lipsa(Cuvinte, contor_cuvinte, litera, corect,existent);
			cout << endl << endl;
			cout << "Press Enter to contiune or Esc to exit.";
			while (decizie != 13 && decizie != 27)
			{
				decizie = getch();
			}
			contor_cuvinte++;
		}
		else if (Cuvinte[contor_cuvinte].contor_greseli == 6)
		{
			scor = 0;
			system("cls");
			cout << "Scor: " << scor;
			cout << endl;
			spanzuratoare(Cuvinte[contor_cuvinte].contor_greseli);
			cout << endl << endl;
			afisare_cuvant_litere_lipsa(Cuvinte, contor_cuvinte, litera, corect,existent);
			cout << endl << endl << endl << endl;
			dimensiune = Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa;
			dimensiune += 14;
			if (dimensiune % 2 == 1)
				for (i = 1; i <= 72 - (dimensiune - 1) / 2; i++)
					cout << " ";
			else
				for (i = 1; i <= 72 - (dimensiune) / 2; i++)
					cout << " ";
			cout << "Cuvantul era: ";
			for (i = 0; i <= Cuvinte[contor_cuvinte].dimensiune_cuvant_litere_lipsa; i++)
				cout << Cuvinte[contor_cuvinte].cuvant[i];
			cout << endl << endl;
			cout << "                                                      Press space to restart or Esc to exit.";
			while (decizie != 32 && decizie != 27)
			{
				decizie = getch();
			}

			contor_cuvinte++;
		}

	}

	for (i = 1; i <= contor_cuvinte; i++)
	{
		Cuvinte[i].contor_greseli = 0;
		Cuvinte[i].cuvant[0] = '\0';
		Cuvinte[i].cuvant_litere_lipsa[0] = '\0';
		Cuvinte[i].dimensiune_cuvant_litere_lipsa = -1;
	}









}
/// Aici se termina proiectul de la Structuri de Date





///De aici incepe proiectul la POO:(incluzand si o linie (1780) care pune in functiune jocul facut pentru SD)
//sistemul de logare:
void afisare_meniu()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                                          Bine ati venit!" << endl;
	cout << "                                                          1.Conectare" << endl;
	cout << "                                                          2.Creare cont" << endl;
	cout << "                                                          3.Iesire" << endl;
	cout << "                                                          (Tastati cifra corespunzatoare actiunii)";





}
void citire_optiune(int& optiune)
{
	optiune = getch() - '0';
}
void password_strength(char _password[250], bool& putere_parola, int c, int lungime_parola, char _password_strength[250])
{

	int caractere_speciale = 0, litere_mici = 0, litere_mari = 0, cifre = 0;
	if (lungime_parola == -1)
	{
		cout << " "; putere_parola = 0;
	}


	else
	{
		for (int i = 0; i <= lungime_parola; i++)
		{
			if ((_password[i] >= 32 && _password[i] <= 47) || (_password[i] >= 58 && _password[i] <= 64) || (_password[i] >= 91 && _password[i] <= 96) || (_password[i] >= 123 && _password[i] <= 126))
				caractere_speciale++;
			if (_password[i] >= 'a' && _password[i] <= 'z')
				litere_mici++;
			if (_password[i] >= 'A' && _password[i] <= 'Z')
				litere_mari++;
			if (_password[i] >= '0' && _password[i] <= '9')
				cifre++;
		}
		/// de la 5 caractere incolo
		///(caractere_speciale >= 2 || litere_mici >= 2 || litere_mari >= 2 || cifre >= 2) ||

		if (caractere_speciale >= 2 && litere_mari >= 2 && litere_mici >= 2 && cifre >= 2 && lungime_parola >= 13)
		{
			SetConsoleTextAttribute(h, 2);
			cout << "strong";
			SetConsoleTextAttribute(h, 7);
			putere_parola = 1;
			strcpy(_password_strength, "strong");
		}
		else if (((caractere_speciale != 0 && litere_mari != 0) || (caractere_speciale != 0 && litere_mici != 0) || (caractere_speciale != 0 && cifre != 0) || (litere_mici != 0 && litere_mari != 0) || (litere_mici != 0 && cifre != 0) || (litere_mari != 0 && litere_mici != 0)) && lungime_parola >= 5 && (caractere_speciale >= 2 || litere_mari >= 2 || cifre >= 2))
		{
			SetConsoleTextAttribute(h, 6);
			cout << "medium";
			SetConsoleTextAttribute(h, 7);
			putere_parola = 1;
			strcpy(_password_strength, "medium");
		}
		else
		{
			SetConsoleTextAttribute(h, 4);
			cout << "weak";
			SetConsoleTextAttribute(h, 7);
			putere_parola = 0;
			strcpy(_password_strength, "weak");
		}

	}



}
bool password_match(char _password[250], char _repassword[250], int lungime_parola, int lungime_reparola)
{
	if (lungime_parola != lungime_reparola)
		return 0;
	for (int i = 0; i <= lungime_parola; i++)
		if (_password[i] != _repassword[i])
			return 0;
	return 1;
}
bool password_check(char _password[250], player jucator[100], int contor_jucatori, char _username[250],int lungime_parola)
{
	for (int i = 1; i <= contor_jucatori; i++)
		if (jucator[i].verificare_username_existent(_username) == 0 && jucator[i].password_check(_password,lungime_parola) == 0)
			return 0;
	return 1;
}


bool verificare_username_existent(char _username[250], player jucator[100], int contor_jucatori)
{
	char s[250];
	for (int i = 1; i < contor_jucatori; i++)
		if (jucator[i].verificare_username_existent(_username) == 0)
			return 0;

	return 1;

}
bool verificare_username_existent2(char _username[250], player jucator[100], int contor_jucatori)
{
	for (int i = 1; i <= contor_jucatori; i++)
		if (jucator[i].verificare_username_existent(_username) == 0)
			return 0;

	return 1;
}
bool verificare_email_existent(char _email[250], player jucator[100], int contor_jucatori)
{
	char s[250];
	for (int i = 1; i < contor_jucatori; i++)
		if (jucator[i].verificare_email_existent(_email) == 0)
			return 0;

	return 1;
}
bool verificare_email_existent2(char _email[250], player jucator[100], int contor_jucatori)
{
	for (int i = 1; i <= contor_jucatori; i++)
		if (jucator[i].verificare_email_existent(_email) == 0)
			return 0;

	return 1;
}
bool verificare_email_vaild(char _email[250])
{
	int lungime = strlen(_email) - 1;
	bool exista_arond = 0, final = 0;
	for (int i = 0; i < strlen(_email); i++)
		if (_email[i] == '@')
			exista_arond = 1;
	if (_email[lungime - 2] == '.' && _email[lungime - 1] == 'r' && _email[lungime] == 'o')
		final = 1;
	if (final == 0)
		if (_email[lungime - 3] == '.' && _email[lungime - 2] == 'c' && _email[lungime - 1] == 'o' && _email[lungime] == 'm')
			final = 1;
	if (exista_arond == 0 || final == 0)
		return 0;
	else return 1;


}
void creare_cont(int& contor_jucatori, player jucator[100])
{
	char _username[250], _password[250], _email[250], _repassword[250], _password_strength[250];
	_password[0] = '\0';
	bool afisare_mesaj = 0, putere_parola = 0;
	int lungime_parola = -1, c = 97, lungime_reparola = -1;
	contor_jucatori++;
	bool email_valid = 1;
	//email
	do {

		system("cls");
		if (email_valid == 0)
		{
			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti un email valid!" << endl;
			SetConsoleTextAttribute(h, 7);

		}
		else	if (afisare_mesaj == 1)
		{
			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Exista deja un cont creat pe aceasta adresa de email!" << endl;
			SetConsoleTextAttribute(h, 7);

		}
		if (afisare_mesaj == 0)
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Password strength:" << endl;
		cout << "                                                          email:"; cin.getline(_email, 250);
		cout << "                                                          username:" << endl;
		afisare_mesaj = 1;
		email_valid = verificare_email_vaild(_email);
	} while (verificare_email_existent(_email, jucator, contor_jucatori) == 0 || verificare_email_vaild(_email) == 0);
	jucator[contor_jucatori].salvare_email(_email);




	//username
	afisare_mesaj = 0;
	do {
		system("cls");
		if (afisare_mesaj == 1)
		{
			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Acest username exista deja!" << endl;
			SetConsoleTextAttribute(h, 7);

		}
		if (afisare_mesaj == 0)
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Password strength:" << endl;
		cout << "                                                          email:" << _email << endl;
		cout << "                                                          username:"; cin.getline(_username, 250);
		afisare_mesaj = 1;

	} while (verificare_username_existent(_username, jucator, contor_jucatori) == 0);
	jucator[contor_jucatori].salvare_username(_username);


	//parola
	while (c != 13 || putere_parola != 1 || lungime_parola < 4)
	{
		system("cls");
		if (c == 13)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                     Parola trebuie sa contina minim 6 caractere dintre care minim 2 trebuie sa fie cifre,litere mari sau caractere speicale!!!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
		}
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Password strength:"; password_strength(_password, putere_parola, c, lungime_parola, _password_strength); cout << endl;
		cout << "                                                          email:" << _email << endl;
		cout << "                                                          username:"; cout << _username << endl;
		cout << "                                                          password:";
		if (lungime_parola == 0)
		{
			cout << _password[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:"; password_strength(_password, putere_parola, c, lungime_parola, _password_strength); cout << endl;
			cout << "                                                          email:" << _email << endl;
			cout << "                                                          username:"; cout << _username << endl;
			cout << "                                                          password:";
			cout << '*';
		}
		else if (lungime_parola > 0)
		{
			for (int i = 0; i <= lungime_parola - 1; i++)
				cout << '*';
			cout << _password[lungime_parola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:"; password_strength(_password, putere_parola, c, lungime_parola, _password_strength); cout << endl;
			cout << "                                                          email:" << _email << endl;
			cout << "                                                          username:"; cout << _username << endl;
			cout << "                                                          password:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';



		}

		c = getch();

		if (lungime_parola != -1 && c == 8)
		{
			lungime_parola--;
			_password[strlen(_password)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_parola++;
			_password[lungime_parola] = c;

		}



	}
	
	


	///repeat password
	c = 97;
	afisare_mesaj = 0;
	do
	{
		system("cls");
		if (c == 13 && afisare_mesaj == 1)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                                                          Parolele nu se potrivesc!!!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
			lungime_reparola = -1;
			_repassword[0] = '\0';
		}
		afisare_mesaj = 1;

		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Password strength:";
		if (strcmp(_password_strength, "medium") == 0)
		{
			SetConsoleTextAttribute(h, 6);
			cout << "medium" << endl;
			SetConsoleTextAttribute(h, 7);
		}
		if (strcmp(_password_strength, "strong") == 0)
		{
			SetConsoleTextAttribute(h, 2);
			cout << "strong" << endl;
			SetConsoleTextAttribute(h, 7);
		}
		cout << "                                                          email:" << _email << endl;
		cout << "                                                          username:"; cout << _username << endl;
		cout << "                                                          password:";
		for (int i = 0; i <= lungime_parola; i++)
			cout << '*';
		cout << endl;
		cout << "                                                   repeat password:";








		if (lungime_reparola == 0)
		{
			cout << _repassword[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:";
			if (strcmp(_password_strength, "medium") == 0)
			{
				SetConsoleTextAttribute(h, 6);
				cout << "medium" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			if (strcmp(_password_strength, "strong") == 0)
			{
				SetConsoleTextAttribute(h, 2);
				cout << "strong" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			cout << "                                                          email:" << _email << endl;
			cout << "                                                          username:"; cout << _username << endl;
			cout << "                                                          password:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';
			cout << endl;
			cout << "                                                   repeat password:"; cout << '*';



		}
		else if (lungime_reparola > 0)
		{
			for (int i = 0; i <= lungime_reparola - 1; i++)
				cout << '*';
			cout << _repassword[lungime_reparola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:";
			if (strcmp(_password_strength, "medium") == 0)
			{
				SetConsoleTextAttribute(h, 6);
				cout << "medium" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			if (strcmp(_password_strength, "strong") == 0)
			{
				SetConsoleTextAttribute(h, 2);
				cout << "strong" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			cout << "                                                          email:" << _email << endl;
			cout << "                                                          username:"; cout << _username << endl;
			cout << "                                                          password:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';
			cout << endl;
			cout << "                                                   repeat password:";
			for (int i = 0; i <= lungime_reparola; i++)
				cout << '*';



		}

		c = getch();

		if (lungime_reparola != -1 && c == 8)
		{
			lungime_reparola--;
			_repassword[strlen(_repassword)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_reparola++;
			_repassword[lungime_reparola] = c;

		}

		/*if (c == 13)
		{
			cout << endl << "prima: " << _password;
			cout << endl << "doi: " << _repassword;
			sleep_for(nanoseconds(3500000000));
		}*/

	} while (password_match(_password, _repassword, lungime_parola, lungime_reparola) == 0 || c != 13);
jucator[contor_jucatori].salvare_password(_password);

}
void schimbare_parola(char _username[250], player jucator[100], int contor_jucatori)
{
	char _password[250];
	int c = 97, lungime_parola = -1;
	bool afisare_mesaj = 0;
	do
	{
		system("cls");
		if (c == 13 && afisare_mesaj == 1)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                                                          Ati introdus o parola gresita!!!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
			lungime_parola = -1;
			_password[0] = '\0';
		}
		afisare_mesaj = 1;
		    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Introduceti parola actuala:";

		if (lungime_parola == 0)
		{
			cout << _password[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti parola actuala:";
				cout << '*';
			




		}
		else if (lungime_parola > 0)
		{
			for (int i = 0; i <= lungime_parola - 1; i++)
				cout << '*';
			cout << _password[lungime_parola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti parola actuala:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';
			



		}

		c = getch();

		if (lungime_parola != -1 && c == 8)
		{
			lungime_parola--;
			_password[strlen(_password)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_parola++;
			_password[lungime_parola] = c;

		}

	} while (password_check(_password, jucator, contor_jucatori, _username,lungime_parola) != 0||c!=13);




	
_password[0]='\0'; c = 97, lungime_parola = -1;
 afisare_mesaj = 0;
 bool putere_parola = 0; char _password_strength[250], _repassword[250], lungime_reparola = -1;



	while (c != 13 || putere_parola != 1 || lungime_parola < 4)
	{
		system("cls");
		if (c == 13)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                     Parola trebuie sa contina minim 6 caractere dintre care minim 2 trebuie sa fie cifre,litere mari sau caractere speicale!!!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
		}
		    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl <<endl;
		cout << "                                                          Password strength:"; password_strength(_password, putere_parola, c, lungime_parola, _password_strength); cout << endl;
		cout << "                                                          new password:";
		if (lungime_parola == 0)
		{
			cout << _password[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:"; password_strength(_password, putere_parola, c, lungime_parola, _password_strength); cout << endl;
			cout << "                                                          new password:";		
			cout << '*';
		}
		else if (lungime_parola > 0)
		{
			for (int i = 0; i <= lungime_parola - 1; i++)
				cout << '*';
			cout << _password[lungime_parola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:"; password_strength(_password, putere_parola, c, lungime_parola, _password_strength); cout << endl;
			cout << "                                                          new password:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';



		}

		c = getch();

		if (lungime_parola != -1 && c == 8)
		{
			lungime_parola--;
			_password[strlen(_password)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_parola++;
			_password[lungime_parola] = c;

		}



	}
	

	///repeat password
	c = 97;
	afisare_mesaj = 0;
	do
	{
		system("cls");
		if (c == 13 && afisare_mesaj == 1)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                                                          Parolele nu se potrivesc!!!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
			lungime_reparola = -1;
			_repassword[0] = '\0';
		}
		afisare_mesaj = 1;

		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Password strength:";
		if (strcmp(_password_strength, "medium") == 0)
		{
			SetConsoleTextAttribute(h, 6);
			cout << "medium" << endl;
			SetConsoleTextAttribute(h, 7);
		}
		if (strcmp(_password_strength, "strong") == 0)
		{
			SetConsoleTextAttribute(h, 2);
			cout << "strong" << endl;
			SetConsoleTextAttribute(h, 7);
		}
		cout << "                                                          new password:";
		for (int i = 0; i <= lungime_parola; i++)
			cout << '*';
		cout << endl;
		cout << "                                                   repeat new password:";








		if (lungime_reparola == 0)
		{
			cout << _repassword[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:";
			if (strcmp(_password_strength, "medium") == 0)
			{
				SetConsoleTextAttribute(h, 6);
				cout << "medium" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			if (strcmp(_password_strength, "strong") == 0)
			{
				SetConsoleTextAttribute(h, 2);
				cout << "strong" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			cout << "                                                          new password:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';
			cout << endl;
			cout << "                                                   repeat new password:";
			cout << '*';



		}
		else if (lungime_reparola > 0)
		{
			for (int i = 0; i <= lungime_reparola - 1; i++)
				cout << '*';
			cout << _repassword[lungime_reparola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Password strength:";
			if (strcmp(_password_strength, "medium") == 0)
			{
				SetConsoleTextAttribute(h, 6);
				cout << "medium" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			if (strcmp(_password_strength, "strong") == 0)
			{
				SetConsoleTextAttribute(h, 2);
				cout << "strong" << endl;
				SetConsoleTextAttribute(h, 7);
			}
			cout << "                                                          new password:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';
			cout << endl;
			cout << "                                                   repeat new password:";
			for (int i = 0; i <= lungime_reparola; i++)
				cout << '*';



		}

		c = getch();

		if (lungime_reparola != -1 && c == 8)
		{
			lungime_reparola--;
			_repassword[strlen(_repassword)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_reparola++;
			_repassword[lungime_reparola] = c;

		}

		

	} while (password_match(_password, _repassword, lungime_parola, lungime_reparola) == 0 || c != 13);
	jucator[contor_jucatori].salvare_password(_password);


	jucator[contor_jucatori].salvare_password(_password);

}
void schimbare_email(char _username[250], player jucator[100], int contor_jucatori)
{
	char _password[250];
	int c = 97, lungime_parola = -1;
	bool afisare_mesaj = 0;
	do
	{
		system("cls");
		if (c == 13 && afisare_mesaj == 1)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                                                          Ati introdus o parola gresita!!!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
			lungime_parola = -1;
			_password[0] = '\0';
		}
		afisare_mesaj = 1;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Introduceti parola actuala:";

		if (lungime_parola == 0)
		{
			cout << _password[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti parola actuala:";
			cout << '*';





		}
		else if (lungime_parola > 0)
		{
			for (int i = 0; i <= lungime_parola - 1; i++)
				cout << '*';
			cout << _password[lungime_parola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti parola actuala:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';




		}

		c = getch();

		if (lungime_parola != -1 && c == 8)
		{
			lungime_parola--;
			_password[strlen(_password)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_parola++;
			_password[lungime_parola] = c;

		}

	} while (password_check(_password, jucator, contor_jucatori, _username,lungime_parola) != 0 || c != 13);

	afisare_mesaj = 0;
	char _email[250];
	bool email_valid = 1;
	//email
	do {

		system("cls");
		if (email_valid == 0)
		{
			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti un email valid!" << endl;
			SetConsoleTextAttribute(h, 7);

		}
		else	if (afisare_mesaj == 1)
		{
			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Exista deja un cont creat pe aceasta adresa de email!" << endl;
			SetConsoleTextAttribute(h, 7);

		}
		if (afisare_mesaj == 0)
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          email:"; cin.getline(_email, 250);
	
		afisare_mesaj = 1;
		email_valid = verificare_email_vaild(_email);
	} while (verificare_email_existent2(_email, jucator, contor_jucatori) == 0 || verificare_email_vaild(_email) == 0);
	jucator[contor_jucatori].salvare_email(_email);








}
void schimbare_username(char _username[250], player jucator[100], int contor_jucatori)
{
	char _password[250], new_username[250];
	int c = 97, lungime_parola = -1;
	bool afisare_mesaj = 0;
	do
	{
		system("cls");
		if (c == 13 && afisare_mesaj == 1)
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                                                          Ati introdus o parola gresita!!!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
			lungime_parola = -1;
			_password[0] = '\0';
		}
		afisare_mesaj = 1;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Introduceti parola actuala:";

		if (lungime_parola == 0)
		{
			cout << _password[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti parola actuala:";
			cout << '*';





		}
		else if (lungime_parola > 0)
		{
			for (int i = 0; i <= lungime_parola - 1; i++)
				cout << '*';
			cout << _password[lungime_parola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Introduceti parola actuala:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';




		}

		c = getch();

		if (lungime_parola != -1 && c == 8)
		{
			lungime_parola--;
			_password[strlen(_password)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_parola++;
			_password[lungime_parola] = c;

		}

	} while (password_check(_password, jucator, contor_jucatori, _username,lungime_parola) != 0 || c != 13);


	afisare_mesaj = 0;
	do {
		system("cls");
		if (afisare_mesaj == 1)
		{
			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl ;
			cout << "                                                          Acest username exista deja!" << endl;
			SetConsoleTextAttribute(h, 7);

		}
		if (afisare_mesaj == 0)
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                         new username:"; cin.getline(_username, 250);
		afisare_mesaj = 1;

	} while (verificare_username_existent2(_username, jucator, contor_jucatori) == 0);
	jucator[contor_jucatori].salvare_username(_username);


}
void setari_cont(char _username[250], player jucator[100], int contor_jucatori)
{

	
	bool afisare_mesaj = 0;
	int optiune = 2;
	while (optiune != 4)
	{
		system("cls");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Alegeti o optiune:" << endl;
		cout << "                                                          1.Schimbare parola" << endl;
		cout << "                                                          2.Schimbare adresa de email" << endl;
		cout << "                                                          3.Schimbare username" << endl;
		cout << "                                                          4.Iesire";

		do {
			if (afisare_mesaj == 1&&(optiune<1||optiune>4))
			{
				system("cls");
				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				SetConsoleTextAttribute(h, 4);
				cout << "                                                          Introduceti o optiune valida!";
				SetConsoleTextAttribute(h, 7);
				sleep_for(nanoseconds(3500000000));
				system("cls");
				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "                                                          Alegeti o optiune:" << endl;
				cout << "                                                          1.Schimbare parola" << endl;
				cout << "                                                          2.Schimbare adresa de email" << endl;
				cout << "                                                          3.Schimbare username" << endl;
				cout << "                                                          4.Iesire";
			}
			citire_optiune(optiune);
			afisare_mesaj = 1;
		} while (optiune < 1 || optiune>4);

		switch (optiune)
		{
		case 1:schimbare_parola(_username, jucator, contor_jucatori);
			break;
		case 2:schimbare_email(_username,jucator,contor_jucatori);
			break;
		case 3:schimbare_username(_username,jucator,contor_jucatori);
			break;
		case 4:
			break;
		}

	}

	



}
int returnare_indice(char _username[250], player jucator[100], int contor_jucatori)
{

	for (int i = 1; i <= contor_jucatori; i++)
		if (jucator[i].verificare_username_existent(_username) == 0)
			return i;
	




}
void intrare_in_meniu_cont_conectat(char _username[250], player jucator[100], int contor_jucatori,game jucator2[100])
{
	bool afisare_mesaj = 0;
	int optiune = 2, x;
	
	while (optiune != 4)
	{
		system("cls");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          Bine ai venit!" << _username << endl;
		cout << "                                                          Alege una din urmatoarele optiuni:" << endl;
		cout << "                                                          1.Joaca Spanzuratoarea" << endl;
		cout << "                                                          2.World of Warcreft" << endl;
		cout << "                                                          3.Setari cont" << endl;
		cout << "                                                          4.Deconectare";
		

		do {
			if (afisare_mesaj == 1&& (optiune < 1 || optiune>4))
			{
				system("cls");
				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				SetConsoleTextAttribute(h, 4);
				cout << "                                                          Introduceti o optiune valida!";
				SetConsoleTextAttribute(h, 7);
				sleep_for(nanoseconds(3500000000));
				system("cls");
				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout << "                                                          Bine ai venit!" << _username << endl;
				cout << "                                                          Alege una din urmatoarele optiuni:" << endl;
				cout << "                                                          1.Joaca Spanzuratoarea" << endl;
				cout << "                                                          2.World of Warcreft" << endl;
				cout << "                                                          3.Setari cont" << endl;
				cout << "                                                          4.Deconectare";
			}
			citire_optiune(optiune);
			afisare_mesaj = 1;
		} while (optiune < 1 || optiune>4);
		x = returnare_indice(_username, jucator, contor_jucatori);

		switch (optiune)
		{
		case 1:///AICI SE INTRA IN JOC
			system("cls");
			spanzuratoare_int_main();
			break;
		case 2:system("cls");
			strcpy(jucator2[x].player, _username);
			jucator2[x].joc();
			break;
		case 3:setari_cont(_username, jucator, contor_jucatori);
			break;
		case 4:
			break;
		}
	}
}
void conectare_cont(player jucator[100], int contor_jucatori,game jucator2[100])
{
	int lungime_parola = -1, c = 97;
	bool afisare_mesaj = 0;
	char _username[250], _password[250];
	//username
	do {
		system("cls");
		if (afisare_mesaj == 1)
		{

			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Ati introdus un username gresit!" << endl;
			SetConsoleTextAttribute(h, 7);

		}
		if (afisare_mesaj == 0)
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          username:"; cin.getline(_username, 250);
		afisare_mesaj = 1;

	} while (verificare_username_existent2(_username, jucator, contor_jucatori) != 0);
	afisare_mesaj = 0;
	//password
	do
	{
		system("cls");
		if (c == 13)
		{
			cout << "contor" << contor_jucatori;
			jucator[1].afisare_username_si_parola(_username,_password);
			char x;
			cin >> x;

			SetConsoleTextAttribute(h, 4);
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          Ati introdus o parola gresita!" << endl;
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
			lungime_parola = -1;
			_password[0] = '\0';
		}

		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "                                                          username:"; cout << _username << endl;
		cout << "                                                          password:";
		if (lungime_parola == 0)
		{
			cout << _password[0];
			sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          username:"; cout << _username << endl;
			cout << "                                                          password:";
			cout << '*';
		}
		else if (lungime_parola > 0)
		{
			for (int i = 0; i <= lungime_parola - 1; i++)
				cout << '*';
			cout << _password[lungime_parola];
			if (c != 8)
				sleep_for(nanoseconds(100000000));
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "                                                          username:"; cout << _username << endl;
			cout << "                                                          password:";
			for (int i = 0; i <= lungime_parola; i++)
				cout << '*';



		}

		c = getch();

		if (lungime_parola != -1 && c == 8)
		{
			lungime_parola--;
			_password[strlen(_password)] = '\0';
		}
		else if (c != 13 && c != 8)
		{
			lungime_parola++;
			_password[lungime_parola] = c;

		}


		afisare_mesaj = 1;
		

	} while (password_check(_password, jucator, contor_jucatori, _username,c) != 0 || c != 13);

	


	intrare_in_meniu_cont_conectat(_username, jucator, contor_jucatori,jucator2);




}
void procesare_optiune(int optiune, player jucator[100], int& contor_jucatori,game jucator2[100])
{
	switch (optiune)
	{
	case 1:conectare_cont(jucator, contor_jucatori,jucator2);
		break;
	case 2: creare_cont(contor_jucatori, jucator);
		break;
	case 3:
		break;

	}
}
void sfarsit()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<<endl<<endl;
	cout << "                                                          Sfarsit!" << endl;

}


int main()
{
	game jucator2[100];
	player jucator[100];
	int optiune = 2, contor_jucatori = 0;
	while (optiune != 3)
	{
		afisare_meniu();
		citire_optiune(optiune);
		system("cls");/// de verificat
		if (optiune >= 1 && optiune <= 3)
			procesare_optiune(optiune, jucator, contor_jucatori,jucator2);
		else
		{
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			SetConsoleTextAttribute(h, 4);
			cout << "                                                          Introduceti o optiune valida!";
			SetConsoleTextAttribute(h, 7);
			sleep_for(nanoseconds(3500000000));
			system("cls");
		}
	}
	sfarsit();




	return 0;
}
