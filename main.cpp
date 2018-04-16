#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <conio.h>

using namespace std;

int main(int arg, char *argumenty[])

{

    if (arg<2)
    {
            cout<<"¿aden plik nie zosta³ przeci¹gniêty"<<endl;
            getch();

    }
    else
    {
        cout<<"odczytano plik"<<endl;
        fstream plik;
        plik.open(argumenty[1]);
        int a=0;
        int odcztint =0;
        int suma=0;
        float srednia=0;
        while(plik>>odcztint)
            {
                suma=suma+odcztint;
                a++;
            }
            srednia=suma/a;
        cout<<"program ma: "<<a<<"linijek"<<endl;
        cout<<"suma liczb to: "<<suma<<endl;
        cout<<"srednia z liczb to: "<<srednia<<endl;
        getch();
    }

}
