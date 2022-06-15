// friend class primer(example)

// #include <iostream>
// using namespace std;

// class A
// {
//     int x;
//     friend class B;

// public:
//     A()
//     {
//         x = 53;
//     }
// };

// class B
// {
// public:
//     void ispis(A &p)
//     {
//         cout << "x = " << p.x << endl;
//     }
// };

// int main()
// {
//     A a;
//     B b;
//     b.ispis(a);
//     return 0;
// }

// friend function

// #include <iostream>
// using namespace std;

// class largest
// {
//     int a, b, c;
//     int l;

// public:
//     void setData(int a, int b, int c);
//     friend void find_largest(largest);
// };
// void largest::setData(int a, int b, int c)
// {
//     this->a = a;
//     this->b = b;
//     this->c = c;
// }
// void find_largest(largest p)
// {
//     p.l = p.a;
//     p.b > p.l ? p.l = p.b : p.c > p.l ? p.l = p.c
//                                       : p.l;
//     cout << "l = " << p.l << endl;
// }
// int main()
// {
//     largest h;
//     h.setData(5, 4, 2);
//     find_largest(h);
//     return 0;
// }

// enumeration

// #include <iostream>
// using namespace std;

// enum week
// {
//     Sunday,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// };

// int main()
// {
//     week today;
//     today = Wednesday;
//     cout << "Day " << today + 1;
//     return 0;
// }

// Kreirati klasu Izvođač koja ima privatno zadato ime i zadat muzički žanr.
// Žanr može biti POP, REP ili ROK (odraditi pomoću enumeracije) i može se dohvatiti,
// ali se ne može menjati. Metode konstruktor sa argumentima (naziv, zanr),
// metoda ispis() koja ispisuje podatke o izvođaču u obliku ime (žanr).
// Klasa Pesma ima privatne atribute naziv, trajanje izraženo brojem minuta i brojem sekundi i maksimalni broj izvođača.
// Svi podaci se zadaju prilikom stvaranja kroz konstruktor sa argumentina(naziv, minuta, sekundi, brIzvodjaca).
// Može da se dohvati broj minuta i broj sekundi trajanja pesme ali ne mogu da se menjaju.
// Pomoću prijateljske funkcije može da se proveri koja od dve zadate pesme traje duže.
// Metoda za dodavanje pojedinačnog izvođača (dodavanje ne uspeva u slučaju prekoračenja kapaciteta).
// Metoda ispis koja na glavnom izlazu ispisuje u obliku: P(naziv – minuti : sekundi),
// a zatim se pojedinačni izvođači ispisuju u zasebnim redovima.

// #include <iostream>
// using namespace std;

// enum Zanr
// {
//     POP,
//     REP,
//     ROK
// };

// class izvodac
// {
//     Zanr zanr;
//     string naziv;
//     string nadjiZanr()
//     {
//         switch (zanr)
//         {
//         case 0:
//             return "POP";
//         case 1:
//             return "REP";
//         case 2:
//             return "ROK";
//         default:
//             return "N/A";
//         }
//     }
//     static string string_zanr[];

// public:
//     izvodac(string naz, Zanr zan) : naziv(naz), zanr(zan) {}
//     void ispis()
//     {
//         cout << naziv << "(" << string_zanr[zanr] << ")" << endl;
//     }
// };
// string izvodac::string_zanr[] = {"POP", "REP", "ROK"};
// class Pesma
// {
//     string naziv;
//     int min, sek;
//     izvodac *izv;
//     int br, kap;

// public:
//     Pesma(string naziv, int minuti, int sekunde, int brIzvodaca);
//     friend int kojaTrajeDuze(Pesma a, Pesma b)
//     {
//         if (a.min > b.min || (a.min == b.min && a.sek > b.sek))
//             return 1;
//         else if (a.min == b.min && a.sek == b.sek)
//             return 0;
//         else
//             return -1;
//     }
//     void dodajIzvodaca(izvodac *p);
//     void ispis()
//     {
//         cout << "P(" << naziv << " - " << min << ":" << sek << ")\nIzvodjaci:" << endl;
//         for (int i = 0; i < br; i++)
//             izv[i].ispis();
//     }
// };
// Pesma::Pesma(string naziv, int minuti, int sekunde, int brIzvodaca)
// {
//     this->naziv = naziv;
//     min = minuti;
//     sek = sekunde;
//     kap = brIzvodaca;
//     br = 0;
// }
// void Pesma::dodajIzvodaca(izvodac *p)
// {
//     if (kap > br)
//         izv[br++] = *p;
// }

// int main()
// {
//     izvodac izv1("Mitko", POP), izv2("Hako", REP), izv3("Laki", ROK);
//     Pesma pes1("Neka Pesma", 3, 24, 3);
//     pes1.dodajIzvodaca(&izv1);
//     pes1.dodajIzvodaca(&izv2);
//     pes1.dodajIzvodaca(&izv3);
//     pes1.ispis();
//     return 0;
// }
