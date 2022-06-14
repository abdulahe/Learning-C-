// #include <iostream>
// using namespace std;

// class Tacka
// {
//     int x, y;

// public:
//     Tacka(int a, int b);
//     void translacija(int dx, int dy);
//     void pozicija();
// };

// Tacka::Tacka(int a, int b)
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
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
// }

// main()
// {
//     Tacka t1(3, 4);
//     t1.translacija(3, -5);
//     t1.pozicija();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Tacka
// {
//     int x;
//     int y;

// public:
//     Tacka();                          // prototip  konstruktora bez argumenata
//     Tacka(int a, int b);              // prototip  konstruktora sa parametrima za inicijalizaciju koordinata
//     void translacija(int dx, int dy); // prototip funkcije za translaciju
//     void pozicija();                  // prototip f-je za ispis  pozicije
//     ~Tacka();                         // prototip destruktora
// };

// Tacka::Tacka()
// {
//     x = 0;
//     y = 0;
// }

// Tacka::Tacka(int a, int b)
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
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
// }

// Tacka::~Tacka()
// {
//     cout << "Destructor - metoda koja uklanja element sa pozicije " << this << endl;
// }

// main()
// {
//     Tacka t1(2, 5), t2;
//     t1.translacija(3, 4);
//     t2.translacija(4, 3);
//     t1.pozicija();
//     t2.pozicija();
//     return 0;
// }

// Opisati klasu stack koja sadrži niz znakova duzinu i vrh kao i realizovane sledece metode:
// stack-konstruktor sa podrazumevajućom dužinom
// stack-konstruktor sa datim stringom i dužinom
// push –stavlja znak u stek
// pop-uzima vrednost sa vrha steka
// top_of vraca vrednost sa vrha steka
// empty-proverava da li je stek prazan
// full-proverava da li je stek pun

// #include <iostream>
// #include <string.h>
// using namespace std;

// class stack
// {
//     char *s;
//     int top, max_size;

// public:
//     stack(int size);
//     stack(char str[], int size);
//     void push(char x);
//     char pop();
//     char top_of();
//     int empty();
//     int full();
//     ~stack() { delete[] s; }
// };

// int stack::full()
// {
//     if (top + 1 == max_size)
//         return 1;
//     return 0;
// }

// int stack::empty()
// {
//     if (top == -1)
//         return 1;
//     return 0;
// }

// stack::stack(int size)
// {
//     s = new char(size);
//     max_size = size;
//     top = -1;
// }

// stack::stack(char str[], int size)
// {
//     s = new char(size);
//     strcpy(s, str);
//     max_size = size;
//     s = str;
//     top = size - 1;
// }

// void stack::push(char x)
// {
//     if (full())
//         cout << "OVERFLOW!!" << endl;
//     else
//         s[++top] = x;
// }

// char stack::pop()
// {
//     int x;
//     if (empty())
//         cout << "UNDERFLOW!!" << endl;
//     else
//         x = s[top--];
//     return x;
// }

// char stack::top_of()
// {
//     if (empty())
//         cout << "Stack is empty!" << endl;
//     else
//         return s[top];
// }

// main()
// {
//     stack s1(5), s2((char *)"Hello", 5);
//     s1.push('h');
//     s1.push('e');
//     s1.push('y');
//     s1.push('b');
//     s1.push('r');
//     s1.push('o');
//     cout << s1.pop() << endl;
//     cout << s2.top_of() << endl;
//     cout << s2.pop() << endl;
//     cout << s2.pop() << endl;
//     cout << s2.pop() << endl;
//     cout << s2.pop() << endl;
//     cout << s2.pop() << endl;
//     return 0;
// }

// copy constructor

// #include <iostream>
// using namespace std;

// class Point
// {
//     int x, y;

// public:
//     Point(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     Point(const Point &p)
//     {
//         x = p.x;
//         y = p.y;
//     }
//     int getX() { return x; }
//     int getY() { return y; }
// };

// int main()
// {
//     Point p1(5, 2), p2(p1);
//     cout << "p1.x = " << p1.getX() << endl;
//     cout << "p1.y = " << p1.getY() << endl;
//     cout << "p2.x = " << p2.getX() << endl;
//     cout << "p2.y = " << p2.getY() << endl;
//     return 0;
// }

//  Realizovati klasu Fibonaci koja ima dva javna atributa
//  n - ceo broj koji oznacava koliko elemenata Fibonacijevog
//  niza zelimo da izracunamo i *niz - niz elemenata koji
//  predstavljaju elemente Fibonacijevog niza. niz[0] = 1,niz[1] = 1...niz[i]=niz[i-1]+niz[i-2] Metode:
//  Konstruktor sa i bez argumenata,Kopi konstruktor
//  int suma() - metoda koja vraca sumu elemenata Fibonacijevog
//  niza.
//  int vrednost(int i) - metoda koja vraca vrednost i-tog elementa
//  fibonacijevog niza (ako je moguce)
//  void prosiri(int x) - metoda koja prosiruje niz elemenata Fibonacievog
//  niza za x novih elemenata.
//  void ispis() - metoda koja ispisuje elemente Fibonacijevog niza
//  Destruktor

// #include <iostream>
// using namespace std;

// class Fibonacci
// {
//     int n;
//     int *niz;

// public:
//     Fibonacci();
//     Fibonacci(int n);
//     Fibonacci(const Fibonacci &p);
//     ~Fibonacci() { delete[] niz; }
//     int suma();
//     int vrednost(int i)
//     {
//         return (i < n ? niz[i] : -1);
//     }
//     void prosiri(int x);
//     void ispis();
// };

// Fibonacci::Fibonacci()
// {
//     cout << "Unesite n: ";
//     cin >> n;
//     niz = new int[n];
//     niz[0] = 1;
//     niz[1] = 1;
//     for (int i = 2; i < n; i++)
//     {
//         niz[i] = niz[i - 1] + niz[i - 2];
//     }
// }

// Fibonacci::Fibonacci(int n)
// {
//     this->n = n;
//     niz = new int[this->n];
//     niz[0] = 1;
//     niz[1] = 1;
//     for (int i = 2; i < n; i++)
//     {
//         niz[i] = niz[i - 1] + niz[i - 2];
//     }
// }

// Fibonacci::Fibonacci(const Fibonacci &p)
// {
//     n = p.n;
//     niz = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         niz[i] = p.niz[i];
//     }
// }

// int Fibonacci::suma()
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//         sum += niz[i];
//     return sum;
// }

// void Fibonacci::prosiri(int x)
// {
//     int i = n;
//     n += x;
//     niz[0] = 0;
//     niz[1] = 1;
//     for (; i < n; i++)
//         niz[i] = niz[i - 1] + niz[i - 2];
// }

// void Fibonacci::ispis()
// {
//     for (int i = 0; i < n; i++)
//         cout << niz[i] << " ";
//     cout << endl;
// }

// int main()
// {
//     Fibonacci f1;
//     cout << "Koju zelite videti vrednost u Fibonaccijevom nizu: ";
//     int i;
//     cin >> i;
//     cout << "Vrednost na unetom indeksu: " << f1.vrednost(i) << endl;
//     f1.ispis();
// }

// Napraviti klasu niz za rad sa nizovima duzine n, atribudi klase ce biti
// elementi - dinamicki niz u kome ce se cuvati elementi niza
// i drugi atribut je broj elemenata n u koji cuva broj elemenata niza.
// napraviti podrazumevani konstruktor, zatim konstruktor broja
// elemenata koji ucitava direktno sa ulaza elemente i copy konstruktor

// #include <iostream>
// using namespace std;

// class Niz
// {
//     int *niz;
//     int n;

// public:
//     Niz();
//     Niz(int n);
//     Niz(const Niz &p);
// };

// Niz::Niz()
// {
//     cout << "Unesite n: ";
//     cin >> n;
//     niz = new int[n];
//     cout << "Unesite elemente niza: ";
//     for (int i = 0; i < n; i++)
//         cin >> niz[i];
// }

// Niz::Niz(int n)
// {
//     niz = new int[n];
//     cout << "Unesite elemente niza: ";
//     for (int i = 0; i < n; i++)
//         cin >> niz[i];
// }

// Niz::Niz(const Niz &p)
// {
//     this->n = p.n;
//     this->niz = new int[this->n];
//     for (int i = 0; i < n; i++)
//         this->niz[i] = p.niz[i];
// }

// int main()
// {
//     Niz();
//     return 0;
// }

// Realizovati klasu Polinom koja treba ima dinamicki alocirani niz *koeficijenti i stepen polinoma n.
//  Konstruktore sa i bez argumenata, copy konstruktor, ispis I metoda izracunaj(x) koja racuna vrednost polinoma za x.
//  U main funkciji napraviti objekat klase i testirati sve metode

// #include <math.h>
// #include <iostream>
// using namespace std;

// class Polinom
// {
//     int *koeficijenti;
//     int n;

// public:
//     Polinom();
//     Polinom(int nn);
//     Polinom(const Polinom &p);
//     void ispis();
//     int izracunaj(int x);
// };

// Polinom::Polinom()
// {
//     cout << "Unesite n: ";
//     cin >> n;
//     koeficijenti = new int[n];
//     cout << "Unesite koeficijente(pocevsi od koeficijenta elementa sa najvecim stepenom): ";
//     for (int i = 0; i < n; i++)
//         cin >> koeficijenti[i];
// }
// Polinom::Polinom(int nn)
// {
//     n = nn;
//     koeficijenti = new int[n];
//     cout << "Unesite koeficijente(pocevsi od koeficijenta elementa sa najvecim stepenom): ";
//     for (int i = 0; i < n; i++)
//         cin >> koeficijenti[i];
// }
// Polinom::Polinom(const Polinom &p)
// {
//     this->n = p.n;
//     this->koeficijenti = new int[n];
//     for (int i = 0; i < this->n; i++)
//         this->koeficijenti = p.koeficijenti;
// }
// void Polinom::ispis()
// {
//     for (int i = 0; i < n; i++)
//     {
//         koeficijenti[i] >= 0 ? cout << " +" : cout << " ";
//         cout << koeficijenti[i] << "x^" << n - i;
//     }
//     cout << endl;
// }
// int Polinom::izracunaj(int x)
// {
//     int result = 0;
//     for (int i = 0; i < n; i++)
//         result += koeficijenti[i] * pow(x, n - i);
//     return result;
// }
// int main()
// {
//     Polinom p1;
//     p1.ispis();
//     cout << "Unesite vrednost x: ";
//     int x;
//     cin >> x;
//     cout << "Rezultat polinoma ako je x = " << x << " je " << p1.izracunaj(x);
//     return 0;
// }
