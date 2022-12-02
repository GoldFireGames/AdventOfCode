#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik_dlugosc;
    plik_dlugosc.open("input.txt", ios::in | ios::app);
    if(plik_dlugosc.good() == false)
    {
        cout<<"Nie udalo sie otworzyc pliku";
        exit(0);
    }
    string linia2;
    int n=0;
    while(getline(plik_dlugosc,linia2))
    {
        if(linia2 != "")
            n++;
    }
    cout<<"n = "<<n<<endl;
    plik_dlugosc.close();

    int *Elf1 = new int[n];
    int *Elf2 = new int[n];

    if(!Elf1 || !Elf2)
    {
        cout<<"Memory allocation failed"<<endl;
    }

    ifstream plik;
    plik.open("input.txt", ios::in | ios::app);
    if(plik.good() == false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }

    string linia; /// A rock, B Paper, C Scissor
    /// X rock, Y Paper, Z Scissor
    /// rock 1-point, paper 2-point, scissor 3-point
    /// 0 if you lost, 3 if draw, 6 if win
    int i=0;
    while(getline(plik,linia))
    {
        if(linia == "A X")
        {
            Elf1[i]=1+3;
            Elf2[i]=1+3;
            i++;
        }
        else if(linia == "A Y")
        {
            Elf1[i] =1+0;
            Elf2[i] =2+6;
            i++;
        }
        else if(linia == "A Z")
        {
            Elf1[i] =1+6;
            Elf2[i] =3+0;
            i++;
        }
        else if(linia == "B X")
        {
            Elf1[i] =2+6;
            Elf2[i] =1+0;
            i++;
        }
        else if(linia == "B Y")
        {
            Elf1[i] =2+3;
            Elf2[i] =2+3;
            i++;
        }
        else if(linia == "B Z")
        {
            Elf1[i] =2+0;
            Elf2[i] =3+6;
            i++;
        }
        else if(linia == "C X")
        {
            Elf1[i] =3+0;
            Elf2[i] =1+6;
            i++;
        }
        else if(linia == "C Y")
        {
            Elf1[i] =3+6;
            Elf2[i] =2+0;
            i++;
        }
        else if(linia == "C Z")
        {
            Elf1[i] =3+3;
            Elf2[i] =3+3;
            i++;
        }

    }
    int suma1=0, suma2=0;

    for(int k=0; k<n; k++)
    {
    suma1=suma1+Elf1[k];
    suma2=suma2+Elf2[k];
    }


    cout<<"Elf1 = "<<suma1<<endl;
    cout<<"Elf2 = "<<suma2<<endl;
    plik.close();
    return 0;
}
