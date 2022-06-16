// inheritance

// ex.

// #include <iostream>
// using namespace std;

// class Vehicle
// {
// public:
//     string brand = "Ford";
//     void honk()
//     {
//         cout << "Tuut, tuut!\n";
//     }
// };

// class Car : public Vehicle
// {
// public:
//     string model = "Mustang";
// };
// int main()
// {
//     Car car1;
//     cout << car1.brand << " " << car1.model << endl;
//     car1.honk();
//     return 0;
// }

// Realizovati klase Datum i Rodjendan.
// Klasa Datum ima javne atribute dan,mesec i godina.

// #include <iostream>
// using namespace std;
// class Datum
// {
// public:
//     int dan, mesec, godina;
//     Datum()
//     {
//         dan = 1;
//         mesec = 1;
//         godina = 2022;
//     }
//     Datum(int d, int m, int g)
//     {
//         dan = d;
//         mesec = m;
//         godina = g;
//     }
//     void ispis()
//     {
//         cout << "Danas je " << dan << "." << mesec << "." << godina << "." << endl;
//     }
//     Datum uporedi(Datum d)
//     {
//         Datum razlika = *this;
//         razlika.godina = godina - d.godina;
//         if (mesec >= d.mesec)
//             razlika.mesec = mesec - d.mesec;
//         else
//         {
//             razlika.mesec = mesec + 12 - d.mesec;
//             razlika.godina--;
//         }
//         if (dan >= d.dan)
//             razlika.dan = dan - d.dan;
//         else
//         {
//             razlika.dan = dan + 30 - d.dan;
//             razlika.mesec--;
//         }
//         return razlika;
//     }
// };
// // Metode: konstruktor sa i bez argumenata, ispis koja ispisuje u formatu Danas
// // je d.m.g,Datum uporedi(Datum d) metoda koja upoređuje trenutni datum i datum
// // koji dolazi kao argument (d) i vraća koliko dana, meseci  i godina ima između ova dva datuma.
// // Klasa Rodjendan nasledjuje javno klasu Datum i dodaje ime i prezime osobe.
// // Metode : konstruktor sa i bez argumenata, bool daLiJe(Datum d) koja vraća true ako
// // jeste rodjendan datuma d, odnosno false ako nije.void ispisSlavljenika(Datum dat)
// // koja ispisuje poruku ako je danas rodjendan osobi, a ako nije onda ispisuje jos koliko
// // dana i meseci ima do rodjendana(koristeći metodu klase Datum za nalaženje razlike – to je moguće
// // jer je klasa Rodjendan nasledila sve atribute i metode klase Datum), int godine(Datum dat) koja vraća
// // koliko godina ima osoba do datuma dat koji dolazi kao argument.

// class Rodjendan : public Datum
// {
//     string ime;
//     string prezime;

// public:
//     Rodjendan()
//     {
//         ime = "N/A";
//         prezime = "N/A";
//     }
//     Rodjendan(string i, string p, int d, int m, int g) : Datum(d, m, g)
//     {
//         ime = i;
//         prezime = p;
//     }
//     bool daLiJe(Datum d)
//     {
//         if (dan == d.dan && mesec == d.mesec && godina == d.godina)
//             return true;
//         return false;
//     }
//     void ispisSlavljenika(Datum dat)
//     {
//         if (daLiJe(dat))
//             cout << "Danas je rodjendan " << ime << " " << prezime << endl;
//         else
//         {
//             Datum d;
//             d = uporedi(dat);
//             cout << ime << " " << prezime << " rodjendan je za " << d.mesec << " meseci i " << d.dan << " dana " << endl;
//         }
//     }
//     int godine(Datum dat)
//     {
//         Datum d = uporedi(dat);
//         if (mesec >= dat.mesec && dan >= dat.dan)
//             return d.godina * (-1);
//         return d.godina * (-1) - 1;
//     }
// };

// int main()
// {
//     Rodjendan osoba1("John", "Johnson", 5, 11, 1994);
//     Datum danas(15, 6, 2022);
//     danas.ispis();
//     osoba1.ispisSlavljenika(danas);
//     cout << "Osoba1 ima " << osoba1.godine(danas) << " godina" << endl;
//     return 0;
// }

// Realizovati klase Kvadar i Bazen (klasa Bazen nasleđuje klasu Kvadar).
// Klasa Kvadar ima zaštićene celobrojne atribute a,b i c.
// Metode: konstruktor sa i bez argumenata i metodu ispis().
// Klasa Bazen ima a,b,c i d (gde je d dubina vode u bazenu).
// Metode konstruktor bez argumenata, void ispis().
// Kako bi se smanjio kod gde je god moguće pozvati metode bazne klase (Kvadar).
// #include <iostream>
// using namespace std;

// class Kvadar
// {
// protected:
//     int a, b, c;

// public:
//     Kvadar()
//     {
//         a = 0;
//         b = 0;
//         c = 0;
//     }
//     Kvadar(int aa, int bb, int cc)
//     {
//         a = aa;
//         b = bb;
//         c = cc;
//     }
//     void ispis()
//     {
//         cout << "a = " << a << endl;
//         cout << "b = " << b << endl;
//         cout << "c = " << c << endl;
//     }
// };
// class Bazen : protected Kvadar
// {
//     int d;

// public:
//     Bazen()
//     {
//         d = 0;
//     }
//     void setA(int x) { a = x; }
//     void setB(int x) { b = x; }
//     void setC(int x) { c = x; }
//     void setD(int x) { d = x; }
//     void ispisb()
//     {
//         ispis();
//         cout << "d = " << d << endl;
//     }
// };
// int main()
// {
//     Bazen b1;
//     b1.setA(5);
//     b1.setB(3);
//     b1.setC(1);
//     b1.setD(2);
//     b1.ispisb();
//     return 0;
// }

// Multilevel inheritance
// ex.

// #include <iostream>
// using namespace std;

// class MyClass
// {
// public:
//     void myFunction()
//     {
//         cout << "Some content" << endl;
//     }
// };
// class MyChild : public MyClass
// {
// };
// class MyGrandchild : public MyChild
// {
// };
// int main()
// {
//     MyGrandchild gc;
//     gc.myFunction();
//     return 0;
// }

// Realizovati klase proizvod,radnik i prodavnica.
// Klasa Proizvod ima barKod,cena,kolicina.
// Metode:Konstruktor sa i bez argumenata,ispis.
// #include <iostream>
// using namespace std;
// class Proizvod
// {
// protected:
//     int barKod, kolicina;
//     float cena;
//     Proizvod()
//     {
//         barKod = 100000;
//         kolicina = 0;
//         cena = 0;
//     }
//     Proizvod(int kod, int kol, int c)
//     {
//         barKod = kod;
//         kolicina = kol;
//         cena = c;
//     }
//     void ispisProizvod()
//     {
//         cout << "Barkod: " << barKod << "\nkolicina: " << kolicina << "\ncena: " << cena << endl;
//     }
// };
// // Klasa Radnik ima ime,prezime.
// // Metode:Konstruktor sa i bez argumenata,ispis.
// class Radnik
// {
// protected:
//     string ime, prezime;
//     Radnik()
//     {
//         ime = "N/A";
//         prezime = "N/A";
//     }
//     Radnik(string i, string p)
//     {
//         ime = i;
//         prezime = p;
//     }
//     void ispisRadnik()
//     {
//         cout << "ime: " << ime << "\nprezime: " << prezime << endl;
//     }
// };
// // Klasa prodavnica nasledjuje klase radnik i proizvod
// // i dodaje brRadnih sati i cenaPoSatu.
// class Prodavnica : protected Radnik, protected Proizvod
// {
//     int brRadnihSati, cenaPoSatu;

// public:
//     Prodavnica()
//     {
//         brRadnihSati = 0;
//         cenaPoSatu = 10;
//     }
//     Prodavnica(int radnisati, int satnica, string i, string p, int kod, int kol, int c) : Radnik(i, p), Proizvod(kod, kol, c)
//     {
//         brRadnihSati = radnisati;
//         cenaPoSatu = satnica;
//     }
//     void ispis()
//     {
//         ispisRadnik();
//         cout << "Broj radnih sati: " << brRadnihSati << "\nCena po satu: " << cenaPoSatu << "\nPlata: " << plata() << endl;
//         ispisProizvod();
//     }
//     int plata()
//     {
//         return brRadnihSati * cenaPoSatu;
//     }
//     void prodaj(int kolicina)
//     {
//         cout << "Prodato je ";
//         if (this->kolicina < kolicina)
//         {
//             cout << this->kolicina;
//             this->kolicina = 0;
//         }
//         else
//         {
//             cout << kolicina;
//             this->kolicina -= kolicina;
//         }
//         cout << " primeraka ovog (bar kod: " << barKod << ") produkta" << endl;
//     }
// };
// // Metode:Konstruktor sa i bez argumenata,ispis,plata,
// // prodaj(int kolicina).
// // U main funkciji napravite dva objekta klase prodavnica
// // i testirati sve metode.

// int main()
// {
//     Prodavnica prod1(10, 5, "Jack", "Jackson", 58922321, 7, 24);
//     prod1.ispis();
//     cout << endl;
//     prod1.prodaj(5);
//     cout << endl;
//     prod1.ispis();
//     cout << endl;
//     prod1.prodaj(5);
//     cout << endl;
//     prod1.ispis();
//     return 0;
// }

// // Realizovati klase Dosije,Predmet i Ispit.
// #include <iostream>
// using namespace std;
// // Klasa dosije ima sledece zasticene atribute:
// // ime,prezime,index
// // Metode:Konstruktor sa i bez argumenata,predstaviSe()
// class Dosije
// {
// protected:
//     string ime, prezime;
//     int index;

// public:
//     static int availableIndex;
//     Dosije()
//     {
//         ime = "N/A";
//         prezime = "N/A";
//         index = availableIndex++;
//     }
//     Dosije(string i, string p)
//     {
//         ime = i;
//         prezime = p;
//         index = availableIndex++;
//     }
//     void predstaviSe() { cout << "Ime Studenta: " << ime << "\nPrezime studenta: " << prezime << endl; }
// };
// int Dosije::availableIndex = 0;
// // Klasa Predmet ima sledece zasticene atribute:
// // imeProfesora,prezimeProfesora,nazivPredmeta
// // Metode:Konstruktor sa i bez argumenata,opisPredmeta()
// class Predmet
// {
// protected:
//     string imeProf, prezimeProf, nazivPred;

// public:
//     Predmet()
//     {
//         imeProf = "N/A";
//         prezimeProf = "N/A";
//         nazivPred = "N/A";
//     }
//     Predmet(string iP, string pP, string nP)
//     {
//         imeProf = iP;
//         prezimeProf = pP;
//         nazivPred = nP;
//     }
//     void opisPredmeta()
//     {
//         cout << "Naziv predmeta: " << nazivPred << endl;
//         cout << "Ime profesora: " << imeProf << endl;
//         cout << "Prezime profesora: " << prezimeProf << endl;
//     }
// };
// // Klasa Ispit nasledjuje zasticeno Dosije i Predmet.
// // Dodaje atribute ocena i datum.
// // Metode:Konstruktor sa i bez argumenata,ispis(),
// // JeLiPolozio() - vraca 1 ako je student polozio,
// // 0 u suprotnom.
// class Ispit : protected Dosije, protected Predmet
// {
//     int ocena;
//     string datum;

// public:
//     Ispit()
//     {
//         ocena = 6;
//         datum = "15.06.2022";
//     }
//     Ispit(int ocena, string datum, string i, string p, string iP, string pP, string nP) : Dosije(i, p), Predmet(iP, pP, nP)
//     {
//         this->ocena = ocena;
//         this->datum = datum;
//     }
//     void ispis()
//     {
//         predstaviSe();
//         opisPredmeta();
//         cout << "Ocena studenta " << ime << " " << prezime << " na ispitu " << nazivPred << " je " << ocena << endl;
//         cout << "Datum upisa ocene: " << datum << endl;
//     }
//     int jeLiPolozio()
//     {
//         if (ocena > 5 && ocena <= 10)
//             return 1;
//         return 0;
//     }
// };
// // U main funkciji napraviti 2 studenta i testirati sve metode
// int main()
// {
//     Ispit student1(7, "03.02.2022", "Jack", "Jackson", "John", "Johnson", "OET");
//     student1.ispis();
//     return 0;
// }

// Polymorphism
// ex.
// #include <iostream>
// using namespace std;

// // Base class
// class Animal
// {
// public:
//     virtual void animalSound()
//     {
//         cout << "The animal makes a sound \n";
//     }
// };

// // Derived class
// class Pig : public Animal
// {
// public:
//     void animalSound()
//     {
//         cout << "The pig says: wee wee \n";
//     }
// };

// // Derived class
// class Dog : public Animal
// {
// public:
//     void animalSound()
//     {
//         cout << "The dog says: bow wow \n";
//     }
// };

// int main()
// {
//     Animal myAnimal, *bptr;
//     Pig myPig;
//     Dog myDog;
//     bptr = &myPig;
//     bptr->animalSound();
//     myAnimal.animalSound();
//     return 0;
// }

// Realizovati nasledjivanje Linearna->Kvadratna sa virtuelnim metodama resenje i ispis
// Klasa Linarna(2x+3=0, resenja :1) x=-b/c za c?0 2) inace nema resenja )   sadrzi polja (b i c) .
// Klasa Kvadratna(ax2+bx+c=0, resenja: 1) x1/2=(-b+/-sqrt(D))/2a , D>0,D=b2-4ac
// 2) D<0 nema realnih resenja
// 3) D=0 x=-b/2a
// sadrzi dodatno polje a.
// Napraviti odgovarajuce konstruktore sa i bez argumenata za obe klase ,destruktore i metodu  za ispis jednacine.Realizovati metodu resenje za obe jednacine tako da ispisuje poruku o resenju jednacine i vraca koliko resenja ima jednacina 0-nema resenja, 1-jedno resenje ,2-dva resenja.
// Fomirati polimorfne metode:
// A) ispis koja ispisuje jednacinu i njeno resenje
// B) ima_resenja koja vraca tacno ako jednacina ima resenja netacno ako nema.
// Testirati klasu u main f-ji.

// #include <math.h>
// #include <iostream>
// using namespace std;

// class Linearna
// {
// protected:
//     float b, c;

// public:
//     Linearna()
//     {
//         b = 2;
//         c = 3;
//     }
//     Linearna(float b, float c)
//     {
//         this->b = b;
//         this->c = c;
//     }
//     virtual int resenje()
//     {
//         float x = (float)-c / b;
//         if (x)
//         {
//             cout << "Resenje linearne jednacine:\nx = " << x << endl;
//             return 1;
//         }
//         else
//         {
//             cout << "Jednacina nema resenja!!" << endl;
//             return 0;
//         }
//     }
//     virtual void ispis()
//     {
//         cout << b << "x ";
//         if (c >= 0)
//             cout << "+";
//         cout << c << " = 0" << endl;
//     }
// };
// class Kvadratna : public Linearna
// {
//     float a;

// public:
//     Kvadratna()
//     {
//         a = 1;
//     }
//     Kvadratna(float a, float b, float c) : Linearna(b, c)
//     {
//         this->a = a;
//     }
//     int resenje()
//     {
//         float x1, x2, D;
//         D = b * b - 4 * a * c;
//         if (D > 0)
//         {
//             x1 = (float)(-b + sqrt(D)) / (2 * a);
//             x2 = (float)(-b - sqrt(D)) / (2 * a);
//             cout << "Resenja kvadratne jednacine:\nx1 = " << x1 << "\nx2 = " << x2 << endl;
//             return 2;
//         }
//         else if (D = 0)
//         {
//             x1 = (float)-b / (2 * a);
//             cout << "Resenje kvadratne jednacine:\nx = " << x1 << endl;
//             return 1;
//         }
//         else
//         {
//             cout << "Jednacina nema realnih resenja." << endl;
//             return 0;
//         }
//     }
//     void ispis()
//     {
//         cout << a << "x^2 ";
//         if (b > 0)
//             cout << "+";
//         cout << b << "x ";
//         if (b > 0)
//             cout << "+";
//         cout << c << " = 0" << endl;
//     }
// };

// int main()
// {
//     Linearna Ljed1(3, -4);
//     Kvadratna Kjed1(1, 7, 6);
//     Ljed1.ispis();
//     Ljed1.resenje();
//     Kjed1.ispis();
//     Kjed1.resenje();
//     return 0;
// }

// Napraviti program koji ce realizovati klase izraz1 i izraz2.
// Izraz1 se sastoji od sledecih obelezja:
// char op1  - promenljiva znakovnog tipa koja obelezava operaciju (+,-,*,/)
// operand1 - celobrojna promenljiva prvi operand
// operand2 - celobrojna promenljiva drugi operand
// Metode konstruktor bez argumenata postavlja operaciju na + a operande na 2 i 5;
// Konstruktor sa argumentima (operand1, operancd2, operacija1)
// set i get metode;
// polimorfna metoda double izracunaj() - racuna rezultat na osnovu operacije (sabiranje, mnozenje, deljenje ili oduzimanje)
// metoda ispis() - ispisuje operand1 operand2 i operaciju.
// #include <iostream>
// using namespace std;
// class izraz1
// {
// protected:
//     char op1;
//     int operand1;
//     int operand2;

// public:
//     izraz1()
//     {
//         op1 = '+';
//         operand1 = 2;
//         operand2 = 5;
//     }
//     izraz1(int operand1, int operand2, char operacija1)
//     {
//         op1 = operacija1;
//         this->operand1 = operand1;
//         this->operand2 = operand2;
//     }
//     void setop1(char x) { op1 = x; }
//     void setoperand1(int x) { operand1 = x; }
//     void setoperand2(int x) { operand2 = x; }
//     char getop1() { return op1; }
//     int setoperator1() { return operand1; }
//     int setoperator2() { return operand2; }
//     virtual double izracunaj()
//     {
//         float rezultat;
//         switch (op1)
//         {
//         case '+':
//             rezultat = operand1 + operand2;
//             break;
//         case '*':
//             rezultat = operand1 * operand2;
//             break;
//         case '-':
//             rezultat = operand1 - operand2;
//             break;
//         case '/':
//             rezultat = (float)operand1 / operand2;
//             break;
//         default:
//             cout << "GRESKA!!" << endl;
//         }
//         return rezultat;
//     }
//     void ispis()
//     {
//         cout << operand1 << op1 << operand2 << endl;
//     }
// };
// // Klasa izraz2 nasledjuje klasu izraz1 i dodaje jos op2 - operacija 2
// // i operand3 - celobrojna promenljiva koja predstavlja treci operand.
// // Metode:Konstruktor bez argumenata (postavlja operande na 2, 5 i 3 a operacija na + i *)
// // Konstruktor sa argumentima.set i get metode.
// // polimorfnu metodu double izracunaj() koja racuna rezultat ali sada vodi racuna o prioritetu koja operacija se prva izvodi (* i /) pa tek onda (+ i -);
// // void ispis() ispisuje obelezja();
// // Testirate sve metode u glavom programu.
// int prijoritet(int x)
// {
//     if (x == '*' || x == '/')
//         return 2;
//     else if (x == '+' || x == '-')
//         return 1;
//     else
//         return 0;
// }
// float IZRACUNAJ(char znak, float opr1, float opr2)
// {
//     float rezultat;
//     switch (znak)
//     {
//     case '+':
//         rezultat = opr1 + opr2;
//         break;
//     case '*':
//         rezultat = opr1 * opr2;
//         break;
//     case '-':
//         rezultat = opr1 - opr2;
//         break;
//     case '/':
//         rezultat = (float)opr1 / opr2;
//         break;
//     }
//     return rezultat;
// }
// class izraz2 : public izraz1
// {
//     char op2;
//     int operand3;

// public:
//     izraz2()
//     {
//         operand3 = 3;
//         op2 = '*';
//     }
//     izraz2(char op1, char op2, int operand1, int operand2, int operand3) : izraz1(operand1, operand2, op1)
//     {
//         this->op2 = op2;
//         this->operand3 = operand3;
//     }
//     void setop2(char x) { op2 = x; }
//     void setoperand3(int x) { operand3 = x; }
//     char getop2() { return op2; }
//     int setoperator3() { return operand3; }
//     double izracunaj()
//     {
//         float rezultat;
//         if (prijoritet(op1) == 0 || prijoritet(op2) == 0)
//             cout << "GRESKA!!" << endl;
//         else if (prijoritet(op1) >= prijoritet(op2))
//         {
//             rezultat = izraz1::izracunaj();
//             rezultat = IZRACUNAJ(op2, rezultat, (float)operand3);
//         }
//         else
//         {
//             rezultat = IZRACUNAJ(op2, (float)operand2, (float)operand3);
//             rezultat = IZRACUNAJ(op1, (float)operand1, rezultat);
//         }
//         return rezultat;
//     }
//     void ispis()
//     {
//         cout << operand1 << op1 << operand2 << op2 << operand3 << endl;
//     }
// };
// int main()
// {
//     izraz2 izr1('*', '*', 4, 5, 2);
//     izr1.ispis();
//     cout << izr1.izracunaj() << endl;
//     return 0;
// }
