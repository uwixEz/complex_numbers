#include <iostream>
#include "complex.h"

using namespace std;
int main(){
int n = 0;
cout << "Podaj wartosc n w zaleznosci od tego ktorego programu chcesz uzyc 1 - +, 2  -, 3- *, 4- /" << endl;
cin >> n;
if (n==1)
{
    cout << "Podaj 2 liczby zespolone" << endl;
complex z;
complex a;
complex b;
cin >> a.re >> a.im;
cin >> b.re >> b.im;
complex wynik = add_complex(a,b);
cout_complex(wynik);
}
if (n==2)
{
    cout << "Podaj 2 liczby zespolone" << endl;
    complex z;
    complex a;
    complex b;
    cin >> a.re >> a.im;
    cin >> b.re >> b.im;
    b = negate_complex(b);
    complex wynik = add_complex(a,b);
    cout_complex(wynik);
}
if (n==3)
{
    cout << "Podaj 2 liczby zespolone" << endl;
complex z;
complex a;
complex b;
cin >> a.re >> a.im;
cin >> b.re >> b.im;
complex wynik = multiply_complex(a,b);
cout_complex(wynik);
}
if (n==4)
{
    cout << "Podaj 2 liczby zespolone" << endl;
complex z;
complex a;
complex b;
cin >> a.re >> a.im;
cin >> b.re >> b.im;
complex wynik = divide_complex(a,b);
cout_complex(wynik);
}
if (n != 1 && n != 2 && n != 3 && n != 4)
{
    cout << "Bruh" << endl;
    exit(0);
}
system("pause");
    return 0;
}
