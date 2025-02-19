#include <iostream>

using namespace std;

int Maximo(int x, int y){
    if (x > y)
    return x;
     else
    return y;
}
int main ()

{
    int a, b, c;
    a = 10;
    b = 20;
    c = Maximo(1,b);

    cout << "O maior valor entre " << a << "e" << b << "e" << c << endl;
    return 0 ;
}