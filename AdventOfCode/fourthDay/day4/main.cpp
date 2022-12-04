#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream plik_dlugosc;
    plik_dlugosc.open("input.txt", ios::in | ios::app);
    if(plik_dlugosc.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }
    string linia_dlugosc;
    int dlugoscTab=0;
    while(getline(plik_dlugosc,linia_dlugosc))
    {
        dlugoscTab++;
    }
    plik_dlugosc.close();
    cout<<"dlugosc tab = "<<dlugoscTab<<endl;
    ifstream plik;
    plik.open("input.txt", ios::in | ios::app);
    if(plik.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }

    string linia;

    int t3,t4,t5,t6,i=0;
    int *tab3 = new int[dlugoscTab];
    int *tab4 = new int[dlugoscTab];
    int *tab5 = new int[dlugoscTab];
    int *tab6 = new int[dlugoscTab];

    string delimeter =",";
    string delimeter2 ="-";
    while(getline(plik,linia))
    {
        string tekst1;
        string tekst2;
        tekst1 = linia.substr(0,linia.find(delimeter));
        tekst2 = linia.substr(linia.find(delimeter)+1,linia.size());
        //cout<<tekst1<<" "<<tekst2<<endl;

        string tekst3;
        string tekst4;
        string tekst5;
        string tekst6;

        tekst3 = tekst1.substr(0,tekst1.find(delimeter2));
        tekst4 = tekst1.substr(tekst1.find(delimeter2)+1,tekst1.size());

        tekst5 = tekst2.substr(0,tekst2.find(delimeter2));
        tekst6 = tekst2.substr(tekst2.find(delimeter2)+1,tekst2.size());

        //cout<<"tekst1 = "<<tekst3<<" + "<<tekst4<<endl;
        //cout<<"tekst2 = "<<tekst5<<" + "<<tekst6<<endl;


        t3=stoi(tekst3);
        t4=stoi(tekst4);
        t5=stoi(tekst5);
        t6=stoi(tekst6);

        tab3[i]=t3;
        tab4[i]=t4;
        tab5[i]=t5;
        tab6[i]=t6;

        i++;


//        cout<<"t1 = "<<t3<<" + "<<t4<<endl;
//        cout<<"t2 = "<<t5<<" + "<<t6<<endl;



    }
    int fifaPoints = 0;


    for(int i=0; i<dlugoscTab; i++)
    {
        if(tab5[i]>=tab3[i])
        {
            if(tab5[i]<=tab4[i])
            {
                fifaPoints++;
                continue;
            }
            else
            {
                continue;
            }
        }
        else if(tab6[i]>=tab3[i])
        {
            fifaPoints++;
            continue;

        }
        else if(tab3[i]>=tab5[i])
        {
            if(tab3[i]<=tab6[i])
            {
                fifaPoints++;
                continue;
            }
            else
            {
                continue;
            }
        }
        else if(tab4[i]>=tab5[i])
        {
            fifaPoints++;
            continue;
        }
    }



    ///goldStarOne
//    for(int i=0; i<dlugoscTab; i++)
//    {
//        //t1 zawiera sie w t2
//        if(tab3[i]>=tab5[i])
//        {
//            //cout<<"poczatek t1 sie zawiera, badz sa takie same";
//            if(tab4[i]<=tab6[i])
//            {
//                //cout<<"koniec t1 sie zawiera";
//                cout<<tab3[i]<<"-"<<tab4[i]<<"->"<<tab5[i]<<"-"<<tab6[i]<<endl;
//                fifaPoints++;
//                continue;
//            }
//            else
//            {
//                //cout<<"koniec t2 sie nie zawiera";
//            }
//        }
//        //tab3[i] < tab5[i]
//        //czy t2 zawiera sie w t1
//        if(tab3[i]<=tab5[i])
//        {
//            //cout<<"poczatek t2 sie zawiera";
//            if(tab4[i]>=tab6[i])
//            {
//                //cout<<"koniec t2 sie zawiera";
//                cout<<tab3[i]<<"-"<<tab4[i]<<"<-"<<tab5[i]<<"-"<<tab6[i]<<endl;
//                fifaPoints++;
//            }
//            else
//            {
//               //cout<<"koniec sie nie zawiera";
//            }
//        }
//    }
    cout<<"pkt = "<<fifaPoints;



    plik.close();

    return 0;
}
