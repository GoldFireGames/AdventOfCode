#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    char tab[2000];

    ifstream plik;
    plik.open("input.txt", ios::in | ios::app);
    if(plik.good() == false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }


    string linia1;
    string linia2;
    string linia3;
    int h=0;
    int c=0;

    while(getline(plik,linia1))
    {
        c=0;
        getline(plik,linia2);
        getline(plik,linia3);

        int dlugosc1;
        int dlugosc2;
        int dlugosc3;

        dlugosc1=linia1.size();
        dlugosc2=linia2.size();
        dlugosc3=linia3.size();

        for(int i=0; i<dlugosc1; i++)
        {
            for(int j=0; j<dlugosc2; j++)
            {
                for(int k=0; k<dlugosc3; k++)
                {
                    if(linia1[i]==linia2[j] && linia1[i]==linia3[k])
                    {
                        tab[h]=linia1[i];
                        h++;
                        c=1;
                    }
                    if(c==1)
                    {
                        break;
                    }
                }
                if(c==1)
                {
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }

    }


//    string linia;
//    char stala;
//    int dlugosc,k=0;
//    int c=0;
//    while(getline(plik,linia))
//    {
//        c=0;
//        dlugosc=linia.size();
//        cout<<"dlugosc tekstu: "<<dlugosc<<endl;
//        cout<<"linia = "<<linia<<endl;
//        for(int i=0; i<(dlugosc/2); i++)
//        {
//            for(int j=(dlugosc/2); j<dlugosc; j++)
//            {
//                if(linia[i]==linia[j])
//                {
//                    tab[k]=linia[i];
//                    cout<<"tab["<<k<<"]="<<tab[k]<<endl;
//                    k++;
//                    c=1;
//                }
//                if(c==1)
//                {
//                    break;
//                }
//            }
//            if(c==1)
//            {
//                break;
//            }
//        }
//    }



    int *pkt = new int[h];
    for(int i=0; i<h; i++)
    {
        if(tab[i]=='a')
        {
            pkt[i]=1;
        }
        else if(tab[i]=='b')
        {
            pkt[i]=2;
        }
        else if(tab[i]=='c')
        {
            pkt[i]=3;
        }
        else if(tab[i]=='d')
        {
            pkt[i]=4;
        }
        else if(tab[i]=='e')
        {
            pkt[i]=5;
        }
        else if(tab[i]=='f')
        {
            pkt[i]=6;
        }
        else if(tab[i]=='g')
        {
            pkt[i]=7;
        }
        else if(tab[i]=='h')
        {
            pkt[i]=8;
        }
        else if(tab[i]=='i')
        {
            pkt[i]=9;
        }
        else if(tab[i]=='j')
        {
            pkt[i]=10;
        }
        else if(tab[i]=='k')
        {
            pkt[i]=11;
        }
        else if(tab[i]=='l')
        {
            pkt[i]=12;
        }
        else if(tab[i]=='m')
        {
            pkt[i]=13;
        }
        else if(tab[i]=='n')
        {
            pkt[i]=14;
        }
        else if(tab[i]=='o')
        {
            pkt[i]=15;
        }
        else if(tab[i]=='p')
        {
            pkt[i]=16;
        }
        else if(tab[i]=='q')
        {
            pkt[i]=17;
        }
        else if(tab[i]=='r')
        {
            pkt[i]=18;
        }
        else if(tab[i]=='s')
        {
            pkt[i]=19;
        }
        else if(tab[i]=='t')
        {
            pkt[i]=20;
        }
        else if(tab[i]=='u')
        {
            pkt[i]=21;
        }
        else if(tab[i]=='v')
        {
            pkt[i]=22;
        }
        else if(tab[i]=='w')
        {
            pkt[i]=23;
        }
        else if(tab[i]=='x')
        {
            pkt[i]=24;
        }
        else if(tab[i]=='y')
        {
            pkt[i]=25;
        }
        else if(tab[i]=='z')
        {
            pkt[i]=26;
        }
        else if(tab[i]=='A')
        {
            pkt[i]=27;
        }
        else if(tab[i]=='B')
        {
            pkt[i]=28;
        }
        else if(tab[i]=='C')
        {
            pkt[i]=29;
        }
        else if(tab[i]=='D')
        {
            pkt[i]=30;
        }
        else if(tab[i]=='E')
        {
            pkt[i]=31;
        }
        else if(tab[i]=='F')
        {
            pkt[i]=32;
        }
        else if(tab[i]=='G')
        {
            pkt[i]=33;
        }
        else if(tab[i]=='H')
        {
            pkt[i]=34;
        }
        else if(tab[i]=='I')
        {
            pkt[i]=35;
        }
        else if(tab[i]=='J')
        {
            pkt[i]=36;
        }
        else if(tab[i]=='K')
        {
            pkt[i]=37;
        }
        else if(tab[i]=='L')
        {
            pkt[i]=38;
        }
        else if(tab[i]=='M')
        {
            pkt[i]=39;
        }
        else if(tab[i]=='N')
        {
            pkt[i]=40;
        }
        else if(tab[i]=='O')
        {
            pkt[i]=41;
        }
        else if(tab[i]=='P')
        {
            pkt[i]=42;
        }
        else if(tab[i]=='Q')
        {
            pkt[i]=43;
        }
        else if(tab[i]=='R')
        {
            pkt[i]=44;
        }
        else if(tab[i]=='S')
        {
            pkt[i]=45;
        }
        else if(tab[i]=='T')
        {
            pkt[i]=46;
        }
        else if(tab[i]=='U')
        {
            pkt[i]=47;
        }
        else if(tab[i]=='V')
        {
            pkt[i]=48;
        }
        else if(tab[i]=='W')
        {
            pkt[i]=49;
        }
        else if(tab[i]=='X')
        {
            pkt[i]=50;
        }
        else if(tab[i]=='Y')
        {
            pkt[i]=51;
        }
        else if(tab[i]=='Z')
        {
            pkt[i]=52;
        }
    }

    int suma3=0;
    for(int r=0; r<h; r++)
    {
        suma3=suma3+pkt[r];
    }
    cout<<suma3;

//    int suma=0;
//    for(int i=0; i<k; i++)
//    {
//        suma=suma+pkt[i];
//    }
//    cout<<"suma = "<<suma;
    plik.close();
    return 0;
}
