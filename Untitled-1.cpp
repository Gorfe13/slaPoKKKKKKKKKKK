#include <iostream>

using namespace std;

int Maximo(int x, int y){
    if (x > y)
    return x;
     else
    return y;
}
int Minimo(int x, int y){
    if (x < y)
    return x;
     else
    return y;
}
int main ()

{
    int a, b, c, d;
    //a = 10;
    //b = 20;
    cout << "Digite o primeiro valor:";
    cin >> a;
    cout << "Digite o segundo valor";
    cin >> b;
    b = 20;
    c = Maximo(a,b);
    d = Minimo(a,b);

    cout << "O maior valor entre " << a << "e" << b << "e" << c << "e" << endl;
    return 0 ;
}