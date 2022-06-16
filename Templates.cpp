// class template example
// #include <iostream>
// using namespace std;

// template <class T>
// class Number
// {
//     T num;

// public:
//     Number(T n) : num(n) {}
//     T getNum() { return num; }
// };
// int main()
// {
//     Number<int> numInt(5);
//     Number<char> numCh('F');
//     Number<string> numStr("Hello");
//     Number<float> numFl(4.2);
//     cout << numInt.getNum() << endl;
//     cout << numCh.getNum() << endl;
//     cout << numStr.getNum() << endl;
//     cout << numFl.getNum() << endl;
//     return 0;
// }