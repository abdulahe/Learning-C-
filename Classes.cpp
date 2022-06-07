/*
    Realizovati klasu Tacka sa privatnim atributima x i y.
    Metode: inicijalizacija(a,b) koja postavlja vrednosti atributa na vrednosti koje dolazi kao
    argumenti, translacija(int dx,int dy) koja translira tacku za vrednosti dx po x, odnosno dy po y osi;
    pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu (njene x i y koordinate)
*/

// #include <iostream>
// using namespace std;

// class Tacka
// {
//     int x, y;

// public:
//     void inicijalizacija(int a, int b);
//     void translacija(int dx, int dy);
//     void pozicija();
// };

// void Tacka::inicijalizacija(int a, int b)
// {
//     x = a;
//     y = b;
// }

// void Tacka::translacija(int dx, int dy)
// {
//     x += dx;
//     y += dy;
// }

// void Tacka::pozicija()
// {
//     cout << "x: " << x << '\n';
//     cout << "y: " << y << '\n';
// }

// main()
// {
//     Tacka tacka1;
//     tacka1.inicijalizacija(5, 4);
//     tacka1.translacija(3, 2);
//     tacka1.pozicija();
//     return 0;
// }

/*
    Realizovati klasu Student koja ima privatne atribute ime,prezime i broj indeksa.
    Metode: inicijalizacija(char* i,char* p,int b) postavlja vrednosti atribute na vrednosti
    koje dolazi kao argumenti i ispis koja ispisuje vrednosti atributa.
*/

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Student
// {
//     char ime[10], prezime[20];
//     int brIndeksa;

// public:
//     void inicijalizacija(char *i, char *p, int b);
//     void ispis();
// } student1, student2, student3;

// void Student::inicijalizacija(char *i, char *p, int b)
// {
//     strcpy(ime, i);
//     strcpy(prezime, p);
//     brIndeksa = b;
// }

// void Student::ispis()
// {
//     cout << "ime: " << ime << '\n';
//     cout << "prezime: " << prezime << '\n';
//     cout << "br. Indeksa: " << brIndeksa << '\n';
// }

// main()
// {
//     student1.inicijalizacija((char *)"Hasan", (char *)"Hasanagic", 33456);
//     student2.inicijalizacija((char *)"Emin", (char *)"Eminovic", 35423);
//     student3.inicijalizacija((char *)"Hajrudin", (char *)"Hajrovic", 36043);
//     student1.ispis();
//     student2.ispis();
//     student3.ispis();
//     return 0;
// }

/**
 * unutar metode adresa objekta koji je pozvao  je dostupna preko  kljucne reci this
 * this- adresa ojekta koji je pozvao metodu
 * *this-sam objekat
 **/

/*
    Realizovati klasu Automobil sa javnim atributima rezervoar i potrosnja
    Metode: inicijalizacija(gorivo,potrosnja),predji(km) koja pokrece automobil i prelazi km kilometara,
    pri cemu se smanjuje nivo gorivo u zavinosti od potrosnje i predjenih km
    ispis() ispisuje podatke o Automobilu;adresa() ispisuje adresu objekta koji je pozvao ovu metodu
*/

// #include <iostream>
// using namespace std;

// class Automobile
// {
// public:
//     int rezervoar, potrosnja;
//     void inic(int gorivo, int potrosnja);
//     void predji(int km);
//     void ispis();
//     void adresa();
// };

// void Automobile::inic(int gorivo, int potrosnja)
// {
//     rezervoar = gorivo;
//     this->potrosnja = potrosnja;
// }

// void Automobile::predji(int km)
// {
//     rezervoar = rezervoar - (km * potrosnja);
// }

// void Automobile::ispis()
// {
//     cout << "rezervoar: " << rezervoar << '\n';
//     cout << "potrosnja: " << potrosnja << '\n';
// }

// void Automobile::adresa()
// {
//     cout << this;
// }

// main()
// {
//     Automobile dzip;
//     dzip.inic(20, 9);
//     cout << "Objekat dzip se nalazi na adresi " << &dzip << endl;
//     cout << "Ovo ptvrdjuje i nasa metoda adresa :";
//     dzip.adresa();
//     return 0;
// }

/*
    Reazlivati klasu DvaZnaka koja ima dva javna atributa koji su tipa karakteri
    Metode: inicijalizacija(z1,z2),uvecaj() koja uvecava znakove tj dobijamo sledece karaktere u ASCII tabeli;
    ispis() metoda koja ispisuje koji su trenutni znaci
    adresaoObjekta() ispisuje adresu objekta koji je pozvao
*/

// #include <iostream>
// using namespace std;

// class DvaZnaka
// {
// public:
//     char a, b;
//     void inic(char z1, char z2);
//     void uvecaj();
//     void ispis();
//     void adressaObj();
// };

// void DvaZnaka::inic(char z1, char z2)
// {
//     this->a = z1;
//     this->b = z2;
// }

// void DvaZnaka::uvecaj()
// {
//     cout << "ASCII value of " << a << " is " << (int)a << '\n';
//     cout << "ASCII value of " << b << " is " << (int)b << '\n';
// }

// void DvaZnaka::ispis()
// {
//     cout << "znak1 = " << a << '\n';
//     cout << "znak2 = " << b << '\n';
// }

// void DvaZnaka::adressaObj()
// {
//     cout << this << endl;
// }

// main()
// {
//     DvaZnaka znaci;
//     znaci.inic('g', 'h');
//     znaci.ispis();
//     znaci.uvecaj();
//     cout << "adresa obj: " << &znaci << endl;
//     znaci.adressaObj();
//     return 0;
// }

/*
   Realizovati klasu Trougao koja ima tri privatna atributa a,b i c (realne vrednosti)
   i metode: inicijalizacija(a,b,c) postavlja vrednosti atributa na vrednosti argumenata;
   pisi - metoda koja ispisuje podatke o atributima a,b i c;
   P() - metoda koja racuna povrsinu trougla; O() racuna i vraca obim trougla;
*/

// #include <iostream>
// #include <math.h>
// using namespace std;

// class Trougao
// {
//     double a, b, c;

// public:
//     void inic(double a, double b, double c);
//     void pisi();
//     double P();
//     double O()
//     {
//         return a + b + c;
//     }
// };

// void Trougao::inic(double a, double b, double c)
// {
//     this->a = a;
//     this->b = b;
//     this->c = c;
// }

// void Trougao::pisi()
// {
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
// }

// double Trougao::P()
// {
//     double s, p;
//     s = (a + b + c) / 2;
//     p = sqrt(s * (s - a) * (s - b) * (s - c));
//     return p;
// }

// main()
// {
//     Trougao t1;
//     t1.inic(2.3, 4.6, 3.7);
//     t1.pisi();
//     cout << "povrsina trougla t1 = " << t1.P() << endl;
//     cout << "Obim trougla t1 = " << t1.O() << endl;
//     return 0;
// }
