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
