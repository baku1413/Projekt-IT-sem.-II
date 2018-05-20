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
/*class Student
{
    private std::string imie;
    //....
    //std::list<float>
};*/
int main(int arg, char *argumenty[])

{
    if(0)
    //if (arg<2)
    {
            cout<<"¿aden plik nie zosta³ przeci¹gniêty"<<endl;
            getch();

    }
    else
    {
        ifstream myfile ("C:\\Users\\Teresa\\Desktop\\IT project\\ProjectIT\\Nowy dokument tekstowy.txt");
        //
        cout<<"odczytano plik"<<endl;
        string b = "1001";
        int wynik = atoi( b.c_str() );
        cout<<wynik+100<<endl;
        //
        int a=0;
        int odcztint =0;
        int suma=0;
        float srednia=0;
        std::string line;
        if (myfile.is_open())
        {
            while (std::getline(myfile, line))
            {
                if(line!="")
                {
                    vector<string> s;
                    std::istringstream iss(line);
                    for( std::string line; iss >> line; )
                    {
                        s.push_back(line);
                    }
                    //new Student(result[0])
                    std::cout<<s[1]<<endl;
                }
            }
        }
        //cout<<"program ma: "<<a<<"linijek"<<endl;
        //cout<<"suma liczb to: "<<suma<<endl;
        //cout<<"srednia z liczb to: "<<srednia<<endl;
        //getch();
        myfile.close();
        getch();
        return 1;
    }

}
