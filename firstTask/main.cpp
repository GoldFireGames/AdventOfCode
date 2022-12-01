#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream plik;
    plik.open("input2.txt", ios::in | ios::app);

    if(plik.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku";
        exit (0);
    }

    string linia;
    int n=0;

    while(getline(plik,linia))///zliczam ilosc pustych linii, w celu znalezienia rozmiaru tablicy
    {
        if(linia == "")
        {
            //cout<<"pusta linia";
            n++;
        }
        else
        {
            //cout<<linia<<endl; /// wyswietlanie zawartosci pliku tekstowego
        }

    }
    cout<<"ilosc elfow: "<<n<<endl;


    int *array = new int[n]; ///dynamiczna alokacja pamieci
    if(!array)
    {
        cout<<"Memory allocation failed"<<endl;
    }


    plik.close(); /// nie wiem jak dac wskaznik(linia) na poczatek wiec otwieram jeszcze raz


    ifstream plik2;
    plik2.open("input2.txt", ios::in | ios::app);

    if(plik2.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku";
        exit (0);
    }
    string linia2;
    int k=0;
    int suma=0;
    while(getline(plik2,linia2))
    {
        if(linia2=="") ///jesli linia jest pusta zapisuje sume do tablicy
        {
            array[k]=suma;
            k++;
            suma=0;
        }
        else
        {
            int i = stoi(linia2); /// zliczam kalorie
            suma=suma+i;
        }
    }
    int max=0;
    int max2=0;
    int max3=0;

    sort(array, array + n);
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<endl;
    }
    for(int j=0; j<n; j++) /// maks z tablicy
    {
        //cout<<array[j]<<endl;
        if(array[j]>=max)
        {
            max3=max2;
            max2=max;
            max=array[j];
            continue;

        }
        if(array[j]>=max2)
        {
           max3=max2;
           max2=array[j];
           continue;
        }
        if(array[j]>=max3)
        {
            max3=array[j];
        }
    }

    int sumka;
    sumka= max+max2+max3;
    cout<<"suma trzech = "<<sumka<<endl;


    plik2.close();



    return 0;
}
