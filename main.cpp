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
    string imie;
    string nazwisko;
    string przedmiot;
    unsigned int srednia;
    //....
    //std::list<float>
};



float SrZeStringa(string x)

{
    int k=0;
    float srednia=0;
    int j=0;
    int n = 0;
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
        ifstream myfile ("C:\\Users\\Bartek\\Desktop\\IT project\\ProjectIT\\Nowy dokument tekstowy.txt");
        //ifstream myfile (argumenty[1]);
        cout<<"IMIE|NAZWISKO|PRZEDM|OCENY       |SREDNIA"<<endl;
        /*
        string b = "1001";
        int wynik = atoi( b.c_str() );
        cout<<wynik+100<<endl;
        */
        string oceny;
        int kol=3;
        int i=0;
        int odcztint =0;
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
                    std::cout<<s[0]<<" ";
                    std::cout<<s[1]<<" ";
                    std::cout<<s[2]<<" ";
                    std::cout<<s[3]<<" ";
                    //if (kol==3)
                    //{

                    cout<<"      Srednia:"<<SrZeStringa(s[3])<<endl;

                    //}
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




