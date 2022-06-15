// #include <iostream>
// using namespace std;

// main()
// {
//     cout << "Hello World\n";
//     cout << 10 << "\n";
//     cout << 010 << "\n";
//     cout << 0x54a2 << "\n";
//     return 0;
// }

// adding

// #include <iostream>
// using namespace std;

// main()
// {
//     int a, b;
//     cout << "Unesite dva broja: ";
//     cin >> a >> b;
//     cout << a << " + " << b << " = " << a + b;
//     return 0;
// }

// arithmetic opertaions

// #include <iostream>
// using namespace std;

// main()
// {
//     int i1 = 18, i2(12), i3(7), i4 = 9;
//     cout << i1 + i2 << "\n";
//     cout << i1 - i2 << "\n";
//     cout << i1 % i2 << "\n";
//     cout << i1 * i2 << "\n";
//     cout << i1 / i4 << "\n";
//     cout << ++i1 << "\n";
//     cout << --i1 << "\n";
// }

// if statements

// #include <iostream>
// using namespace std;

// main()
// {
//     int i1(false), i2(true), i3(true);
//     i1   ? cout << "i1"
//     : i2 ? cout << "i2"
//          : cout << "i3";
//     cout << '\n'
//          << (int)2.8;
//     return 0;
// }

// references

// #include <iostream>
// using namespace std;

// main()
// {
//     string h = "Pizza";
//     string &a = h;
//     cout << h << '\n';
//     cout << a << '\n';
//     int *q = new int(5);
//     cout << *q;
//     return 0;
// }

// classes

// #include <iostream>
// using namespace std;

// class person
// {
// public:
//     string fullName;
//     int age;
// };

// main()
// {
//     person person1;
//     person1.fullName = "John Johnson";
//     person1.age = 52;
//     cout << "Name: " << person1.fullName << '\n';
//     cout << "Age: " << person1.age;
//     return 0;
// }

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

// Reailzovati klasu Vektor koja ima privatni atribut niz od 3 elementa i metode:
// Konstruktor sa argumentom (argument je niz celih brojeva), set i get metode za
// x,y,z odnosno za elemente niza (za svaki element posebno), ispis() – metoda koja
// ispisuje x,y i z odnosno elemente niza, Vektor dodaj(Vektor v) – metoda koja na
// trenutni vektor dodaje Vektor koji dolazi kao argument (Vektor v), preklopiti
// operatore +, *(skalarom), =, ++ prefiksni,++(int) postfiksni operator, -,
// operator indeksiranja [], metode Vektor pomnozi(int k) koja je ekvivalentna operatoru * skalarom.

// #include <iostream>
// using namespace std;

// class Vektor
// {
//     int niz[3];

// public:
//     Vektor(int n[])
//     {
//         for (int i = 0; i < 3; i++)
//             niz[i] = n[i];
//     }
//     int getX() { return niz[0]; }
//     int getY() { return niz[1]; }
//     int getZ() { return niz[2]; }
//     void setX(int x) { niz[0] = x; }
//     void setY(int x) { niz[1] = x; }
//     void setZ(int x) { niz[2] = x; }
//     void ispis()
//     {
//         cout << "Niz = {" << niz[0] << ", " << niz[1] << ", " << niz[2] << "}" << endl;
//     }
//     Vektor operator+(Vektor v1);
//     Vektor operator*(int x);
//     const Vektor &operator=(const Vektor &v1);
//     Vektor operator++();
//     Vektor operator++(int);
//     Vektor operator-();
//     int &operator[](int i);
// };
// Vektor Vektor::operator+(Vektor v1)
// {
//     Vektor v2 = *this;
//     for (int i = 0; i < 3; i++)
//         v2.niz[i] += v1.niz[i];
//     return v2;
// }
// Vektor Vektor::operator*(int x)
// {
//     Vektor v2 = *this;
//     for (int i = 0; i < 3; i++)
//         v2.niz[i] *= x;
//     return v2;
// }
// const Vektor &Vektor::operator=(const Vektor &v1)
// {
//     if (&v1 == this)
//         return *this;
//     for (int i = 0; i < 3; i++)
//         niz[i] = v1.niz[i];
//     return *this;
// }
// Vektor Vektor::operator++(int)
// {
//     for (int i = 0; i < 3; i++)
//         niz[i]++;
//     return *this;
// }
// Vektor Vektor::operator++()
// {
//     for (int i = 0; i < 3; i++)
//         niz[i]++;
//     return *this;
// }
// Vektor Vektor::operator-()
// {
//     Vektor v = *this;
//     for (int i = 0; i < 3; i++)
//         v.niz[i] *= -1;
//     return v;
// }
// int &Vektor::operator[](int i)
// {
//     return niz[i];
// }
// int main()
// {
//     int n[] = {1, 2, 3};
//     Vektor v1(n), v2(n), v3(n);
//     v3.ispis();
//     v3 = v1 + v2;
//     v3.ispis();
//     v3 = v3 * 2;
//     v3.ispis();
//     v3 = v1;
//     v3.ispis();
//     v3++;
//     v3.ispis();
//     ++v3;
//     v3.ispis();
//     v3 = -v1;
//     v3.ispis();
//     cout << v3[2] << endl;
//     return 0;
// }

//  Realizovati klasu Razlomak koja ima dva privatna atributa broj,imen-celobrojnog tipa
// i metode: konstruktor sa argumentima (a,b), set i get metode, ispis() u formatu broj/imen, preklopiti operatore +, * skalarom, =, ++ prefiksni, ++(int) postfiksni,-, <<,  >>.

// #include <string>
// #include <iostream>
// using namespace std;

// class Razlomak
// {
//     int broj, imen;

// public:
//     Razlomak(int a, int b)
//     {
//         broj = a;
//         imen = b;
//     }
//     void setBroj(int x) { broj = x; }
//     void setImen(int x) { imen = x; }
//     int getBroj() { return broj; }
//     int getImen() { return imen; }
//     void ispis()
//     {
//         cout << broj << "/" << imen << endl;
//     }
//     Razlomak operator+(Razlomak r1);
//     Razlomak operator*(int x);
//     const Razlomak &operator=(const Razlomak &r);
//     Razlomak operator++();
//     Razlomak operator++(int);
//     Razlomak operator-();
//     // ostream &operator<<(ostream &out);
//     // istream &operator>>(istream &in);
//     Razlomak operator<<(ostream &out);
//     Razlomak operator>>(istream &in);
// };
// Razlomak Razlomak::operator+(Razlomak r1)
// {
//     Razlomak r2 = *this;
//     if (r1.imen == r2.imen)
//         r2.broj += r1.broj;
//     else
//     {
//         int i;
//         for (i = (r2.imen > r1.imen ? r2.imen : r1.imen); i < r1.imen * r2.imen; i++)
//             if (i % r1.imen == 0 && i % r2.imen == 0)
//                 break;
//         r2.broj = (i / r2.imen) * r2.broj + (i / r1.imen) * r1.broj;
//         r2.imen = i;
//     }
//     return r2;
// }
// Razlomak Razlomak::operator*(int x)
// {
//     Razlomak r = *this;
//     r.broj *= x;
//     return r;
// }
// const Razlomak &Razlomak::operator=(const Razlomak &r)
// {
//     if (&r == this)
//         return *this;
//     broj = r.broj;
//     imen = r.imen;
//     return *this;
// }
// Razlomak Razlomak::operator++()
// {
//     broj += imen;
//     return *this;
// }
// Razlomak Razlomak::operator++(int)
// {
//     broj += imen;
//     return *this;
// }
// Razlomak Razlomak::operator-()
// {
//     Razlomak r = *this;
//     r.broj *= -1;
//     return r;
// }
// // ostream &Razlomak::operator<<(ostream &out)
// // {
// //     out << broj << "/" << imen;
// //     return out;
// // }
// // istream &Razlomak::operator>>(istream &in)
// // {
// //     cout << "Unesite razlomak ";
// //     in >> broj >> imen;
// //     return in;
// // }
// Razlomak Razlomak::operator<<(ostream &out)
// {
//     out << broj << "/" << imen;
//     return *this;
// }
// Razlomak Razlomak::operator>>(istream &in)
// {
//     cout << "Unesite razlomak ";
//     in >> broj >> imen;
//     return *this;
// }
// int main()
// {
//     Razlomak r1(5, 6), r2(7, 8), r(1, 2);
//     r.ispis();
//     r = r1;
//     r.ispis();
//     r = r1 + r2;
//     r.ispis();
//     r = r * 2;
//     r.ispis();
//     r++;
//     r.ispis();
//     ++r;
//     r.ispis();
//     r = -r;
//     r.ispis();
//     r << cout;
//     cout << endl;
//     r >> cin;
//     r << cout;
// }
