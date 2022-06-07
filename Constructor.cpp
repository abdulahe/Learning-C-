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

#include <iostream>
using namespace std;

class Stack
{
    char *znak;
    int len, top;

public:
    Stack(int size)
    {
        znak = new char(size);
        len = size;
        top = -1;
    }
    Stack(int size, char c);
    void Reset(); // reset-prazni stek
    void Push(char c);
    char Pop();
    char Top_of();
    int empty();
    int full();
    ~Stack()
    {
        delete[] znak;
        cout << "Stack je izbrisan" << endl;
    }
};

int Stack::empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int Stack::full()
{
    if (top == len - 1)
        return 1;
    else
        return 0;
}

Stack::Stack(int size, char c)
{
    znak = new char(size);
    len = size;
    top = 0;
    znak[top] = c;
}

void Stack::Reset()
{
    top = -1;
}

void Stack::Push(char c)
{
    if (this->full())
        cout << "OVERFLOW!!" << endl;
    else
    {
        top++;
        znak[top] = c;
    }
}

char Stack::Pop()
{
    char c;
    if (this->empty())
        cout << "UNDERFLOW!!" << endl;
    else
    {
        c = znak[top];
        top--;
    }
    return c;
}

char Stack::Top_of()
{
    char c;
    if (this->empty())
        cout << "Stack is empty" << endl;
    else
        c = znak[top];
    return c;
}

main()
{
    Stack s1(3, 'a');
    cout << "top of s1 -> " << s1.Top_of() << endl;
    s1.Push('b');
    cout << "top of s1 -> " << s1.Top_of() << endl;
    s1.Push('c');
    cout << "top of s1 -> " << s1.Top_of() << endl;
    s1.Push('d');
    return 0;
}