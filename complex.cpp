#include <iostream>
#include "complex.h"
#include <cmath>
using namespace std;

void cout_complex(complex z)
{
 if(z.im >= 0)
 {
     cout << z.re << "+" << z.im << "i" << endl;
 }
 else
 {
 cout << z.re << "-" << fabs(z.im) << "i" << endl;
 }
}

complex add_complex(complex a,complex b)
{
 complex z;
 z.re = a.re + b.re;
 z.im = a.im + b.im;
 return z;
}

complex negate_complex(complex z)
{
    complex wynik;
    wynik.re = -z.re;
    wynik.im = -z.im;
    return wynik;
}

complex multiply_complex(complex a,complex b)
{
complex wynik;
wynik.re = a.re*b.re - a.im * b.im;
wynik.im = a.re*b.im + b.re * a.im;
return wynik;
}

complex conjugate_complex(complex a)
{
 complex wynik;
 wynik.re = a.re;
 wynik.im = -a.im;
 return wynik;
}

complex divide_complex(complex a,complex b)
{
 complex wynik;
 complex licznik = multiply_complex(a,conjugate_complex(b));
 complex mianownik = multiply_complex(b,conjugate_complex(b));
 double dzielnik = mianownik.re;
 if (dzielnik == 0)
 {
     cout << "Blad: Proba dzielenia przez zero!" << endl;
     wynik.re = 0;
     wynik.im = 0;
     return wynik;
 }
 wynik.re = licznik.re / dzielnik;
 wynik.im = licznik.im / dzielnik;
 return wynik;
}