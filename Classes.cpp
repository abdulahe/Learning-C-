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

/// classes in classes
// Realizovati klase Prava i Kvadrat.
//  Klasa Prava ima atribute x1,y1,x2,y2,d.
//  Metode: Konstruktor sa i bez argumenata,
//  set i get metode,
//  metoda racunajDuzinu() i metodu ispis().
//  Kvadrat ima atribute:Prava vrh,Prava dno
//  Metode:Konstruktor sa i bez argumenata, povrsina(),obim() i ispis().

// #include <math.h>
// #include <iostream>
// using namespace std;

// class Prava
// {
//     int x1, y1, x2, y2;
//     float d;

// public:
//     Prava();
//     Prava(int x1, int x2, int y1, int y2);
//     void set(int x1, int x2, int y1, int y2)
//     {
//         this->x1 = x1;
//         this->x2 = x2;
//         this->y1 = y1;
//         this->y2 = y2;
//         racunajDuzine();
//     }
//     int getX1() { return x1; }
//     int getX2() { return x2; }
//     int getY1() { return y1; }
//     int getY2() { return y2; }
//     int getd() { return d; }
//     void racunajDuzine();
//     void ispis();
// };
// class Kvadrat
// {
//     Prava vrh, dno;

// public:
//     int Povrsina();
//     int Obim();
//     void ispis();
// };

// Prava::Prava()
// {
//     cout << "Unesi tacku pocetka prave (x1,y1): ";
//     cin >> x1 >> y1;
//     cout << "Unesi tacku pocetka prave (x2,y2): ";
//     cin >> x2 >> y2;
//     racunajDuzine();
// }
// Prava::Prava(int x1, int x2, int y1, int y2)
// {
//     set(x1, x2, y1, y2);
// }
// void Prava::racunajDuzine()
// {
//     d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
// }
// void Prava::ispis()
// {
//     cout << "Prava: [(" << x1 << ", " << y1 << "), (" << x1 << ", " << y1 << ")]" << endl;
// }
// int Kvadrat::Povrsina()
// {
//     return vrh.getd() * dno.getd();
// }
// int Kvadrat::Obim()
// {
//     return 2 * vrh.getd() + 2 * dno.getd();
// }
// void Kvadrat::ispis()
// {
//     cout << "Kvadrat:\n";
//     cout << "[(" << vrh.getX1() << ", " << vrh.getY1() << "), "
//          << "(" << vrh.getX2() << ", " << vrh.getY2() << ")]\n";
//     cout << "[(" << dno.getX1() << ", " << dno.getY1() << "), "
//          << "(" << dno.getX2() << ", " << dno.getY2() << ")]\n";
// }

// int main()
// {
//     Kvadrat k1;
//     cout << "Povrsina datog kvadrata je: " << k1.Povrsina() << endl;
//     cout << "Obim datog kvadrata je: " << k1.Obim() << endl;
//     k1.ispis();
//     return 0;
// }

// Realizovati klasu Ocena koja ima tri privatna atributa:
// ime_predmeta, ocenu i datum.
// Metode: Konstruktor sa i bez argumenata, metodu jeLiPolozio() koja vraca true ako je student polozio ispit i false ako nije.
// Ispis() koja ispisuje podatke o oceni, set i get metode.
// Klasa Student ima privatne atribute: imeIprezime, brIndeksa, ocena1, ocena2 i ocena3 ( objekti klase ocena). set i get metode.
// int ukupnoPolozenih() - vraca broj polozenih ispita. float prosek() - vraca prosek studenta. ispis() - ispuje podatke o studentu i njegovim ocenama.

// #include <iostream>
// using namespace std;

// class Ocena
// {
// private:
//     string ime_predmeta;
//     int ocena;
//     string datum;

// public:
//     Ocena();
//     Ocena(string ime_predmeta, int ocena, string datum);
//     int jeLiPolozio() { return ocena > 5 && ocena <= 10 ? true : false; }
//     void ispis();
//     void setIme_Predmeta(string x) { ime_predmeta = x; }
//     void setOcena(int x) { ocena = x; }
//     void setDatum(string x) { datum = x; }
//     string getIme_Predmeta() { return ime_predmeta; }
//     int getOcena() { return ocena; }
//     string getDatum() { return datum; }
// };
// Ocena::Ocena()
// {
//     ime_predmeta = "N/A";
//     ocena = 0;
//     datum = "N/A";
// }
// Ocena::Ocena(string ime_predmeta, int ocena, string datum)
// {
//     this->ime_predmeta = ime_predmeta;
//     this->ocena = ocena;
//     this->datum = datum;
// }
// void Ocena::ispis()
// {
//     cout << "ime predmeta: " << ime_predmeta << "\nOcena: " << ocena << "\nDatum: " << datum << endl;
// }
// class Student
// {
// private:
//     string imeIPrezime, brIndeksa;
//     Ocena ocena1, ocena2, ocena3;

// public:
//     void setImeIPrezime(string x) { imeIPrezime = x; }
//     void setBrIndeksa(string x) { brIndeksa = x; }
//     void setOcena1(string ime_predmeta, int ocena, string datum)
//     {
//         ocena1.setIme_Predmeta(ime_predmeta);
//         ocena1.setDatum(datum);
//         ocena1.setOcena(ocena);
//     }
//     void setOcena2(string ime_predmeta, int ocena, string datum)
//     {
//         ocena2.setIme_Predmeta(ime_predmeta);
//         ocena2.setDatum(datum);
//         ocena2.setOcena(ocena);
//     }
//     void setOcena3(string ime_predmeta, int ocena, string datum)
//     {
//         ocena3.setIme_Predmeta(ime_predmeta);
//         ocena3.setDatum(datum);
//         ocena3.setOcena(ocena);
//     }
//     string getImeIPrezime() { return imeIPrezime; }
//     string getBrIndeksa() { return brIndeksa; }
//     Ocena getOcena1() { return ocena1; }
//     Ocena getOcena2() { return ocena2; }
//     Ocena getOcena3() { return ocena3; }
//     int ukupnoPolozenih();
//     float prosek();
//     void ispis();
// };

// int Student::ukupnoPolozenih()
// {
//     int brPolozenih = 0;
//     ocena1.jeLiPolozio() ? brPolozenih++ : brPolozenih;
//     ocena2.jeLiPolozio() ? brPolozenih++ : brPolozenih;
//     ocena3.jeLiPolozio() ? brPolozenih++ : brPolozenih;
//     return brPolozenih;
// }

// float Student::prosek()
// {
//     return (ocena1.getOcena() + ocena2.getOcena() + ocena3.getOcena()) / 3;
// }

// void Student::ispis()
// {
//     cout << "Ime i Prezime: " << imeIPrezime << "\nBr. Indeksa: " << brIndeksa << endl;
//     ocena1.ispis();
//     ocena2.ispis();
//     ocena3.ispis();
// }

// int main()
// {
//     Student s1;
//     s1.setImeIPrezime("Harun Eminovic");
//     s1.setBrIndeksa("036062/22");
//     s1.setOcena1("ORT", 7, "02.03.2022.");
//     s1.setOcena2("OET", 9, "11.11.2021.");
//     s1.setOcena3("Programiranje", 10, "15.05.2022.");
//     s1.ispis();
//     cout << "Prosek studenta: " << s1.prosek() << endl;
//     return 0;
// }

// Klasa poklon ima cena, jedinstven automatski generisani celobrojni identifikator.
//  Svi atributi su zaštićeni od pristupa (ne može im se pristupiti – znači da trebaju da budu private i da nemaju set i get metode).
//  Metode: konstruktor sa argumentima, kopi konstruktor, ispis() koja ispisuje id poklona i cenu u formatu “id(cena)”.

// #include <cmath>
// #include <iostream>
// using namespace std;

// class Poklon
// {
//     int id;
//     float cena;

// public:
//     static int posID;
//     Poklon(float cena);
//     Poklon(const Poklon &p);
//     void ispis()
//     {
//         cout << id << "($" << ceil(cena * 100) / 100 << ")\n";
//     }
// };
// Poklon::Poklon(float cena)
// {
//     this->cena = cena;
//     id = ++posID;
// }
// Poklon::Poklon(const Poklon &p)
// {
//     this->cena = p.cena;
//     id = ++posID;
// }
// int Poklon::posID = 0;
// int main()
// {
//     Poklon poklon(55.3567), poklon2(poklon);
//     poklon.ispis();
//     poklon2.ispis();
//     Poklon pok3(100);
//     pok3.ispis();
//     return 0;
// }
