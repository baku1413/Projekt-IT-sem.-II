#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdio>
#include <conio.h>
#include <list>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
class Student
{
   public:
    string imie;
    string nazwisko;
    string przedmiot;
    unsigned int srednia;
    //super u¿yteczna klasa polecam
};

class Liczeniesredniej
{
public:

string oceny;
float srednia;

float SrZeStringa(string x)

{
    float srednia=0;
    int j=0;
    float n = 0;
    char c='a';
    string mySt = x;
    int L = mySt.length()-1;
    for(int i=0;i<=L;i++)
    {
    c = mySt.at(i);

    if(isdigit(c))
    {
        n+=(c - '0');
        j++;
    }
    }
    srednia = n/j;
    return srednia;
}

};

int main(int arg, char *argumenty[])
{



    if(0)
    //if (arg<2)
    {
            cout<<"zaden plik nie zostal przeciagniety"<<endl;
            getch();
    }
    else
    {
            int x=0;
            float flaga =0;
            string oceny;
            string line;
            ifstream myfile ("C:\\Users\\Bartek\\Desktop\\lmeo\\Projekt-IT-sem.-II-master\\Nowy dokument tekstowy.txt");
            //ifstream myfile (argumenty[1]);
            system("Color 7D");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<right<<"                    Podaj srednia od ktorej jest zaliczenie"<<endl<<endl;
            cout<<right<<"                                      ";
            cin>>flaga;
            system("CLS");
            system("Color 3A");
            cout.width( 10 );
            cout<<"|IMIE|";
            cout.width( 13 );
            cout<<"|NAZWISKO|";
            cout.width( 13 );
            cout<<"|PRZEDM|";
            cout.width( 17 );
            cout<<"|OCENY|";
            cout.width( 20 );
            cout<<"|SREDNIA|"<<endl;
            cout<<endl;

            Liczeniesredniej srednia;

        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                if(line!="")
                {
                    vector<string> s;
                    istringstream iss(line);
                    for(string line; iss >> line;)
                    {

                        s.push_back(line);
                        x++;
                    }
                            x=x-1;
                            cout.precision(3);
                            cout.width( 10 );
                            cout<<left<<s[0]<<" ";
                            cout.width( 13 );
                            cout<<s[1]<<" ";
                            cout.width( 13 );
                            cout<<s[2]<<" ";
                            cout.width( 17 );

                            cout<<s[x]<<" ";
                            cout.width( 3 );
                            cout.setf( ios::showpoint );
                            cout<<"Sr:"<<srednia.SrZeStringa(s[x]);

                                if (srednia.SrZeStringa(s[x]) < flaga)
                                    {

                                        cout.width( 12 );
                                        cout<<right<<" Niezaliczone"<<endl;
                                        x=0;
                                    }
                                else

                                    {
                                        cout.width( 12 );
                                        cout<<right<<" Zaliczone"<<endl;
                                        x=0;
                                    }
                }
            }
        }

        myfile.close();
        getch();
        return 1;
    }

}




