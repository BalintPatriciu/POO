#include <iostream>
#include <string.h>
using namespace std;





void calculare_si_afisare_sex(char cnp[14])
{
    int sex;

    sex=cnp[0]-'0';

    if(sex%2==1)
        cout<<"Sex: Masculin"<<endl;
    else
        cout<<"Sex: Feminin"<<endl;

}

void calculare_si_afisare_data_nasterii(char cnp[14])
{
    int an,luna,zi;



    an=(cnp[1]-'0')*10+(cnp[2]-'0');
    luna=(cnp[3]-'0')*10+(cnp[4]-'0');
    zi=(cnp[5]-'0')*10+(cnp[6]-'0');



    if(an<=23)
        an+=2000;
    else
        an+=1900;

    cout<<"Data nasterii: ";
    if(zi<=9)
        cout<<"0"<<zi<<".";
    else
        cout<<zi<<".";
    if(luna<=9)
        cout<<"0"<<luna<<".";
    else
        cout<<luna<<".";
    cout<<an<<endl;






}
void calculare_si_afisare_varsta(char cnp[14])
{


    int varsta,an;


    an=(cnp[1]-'0')*10+(cnp[2]-'0');

    if(an<=23)
    varsta=23-an;
    else
        varsta=100-an+23;

    cout<<"Varsta: "<<varsta<<endl;




}





int main()
{char cnp[14];
cout<<"Scrieti exit pentru a iesi."<<endl<<endl;
while(strcmp(cnp,"exit")!=0)
{cnp[0]='\0';
cout<<"Introduceti cnp: ";cin.getline(cnp,14);
if(strcmp(cnp,"exit")!=0)
{
calculare_si_afisare_sex(cnp);
calculare_si_afisare_data_nasterii(cnp);
calculare_si_afisare_varsta(cnp);
cout<<endl<<endl;
}
}
    return 0;
}
