#include <iostream>
using namespace std;
class Complex
{
    double real, imag;

  public:
    Complex() : real{0}, imag{0} {}
    Complex(double real) : real{real}, imag{0} {}
    Complex(double real, double imag) : real{real}, imag{imag} {}

    double getReal() const { return real; }
    void setReal(double real) { real = real; }
    double getImag() const { return imag; }
    void setImag(double imag) { imag = imag; }

    Complex &operator+=(Complex y)
    {
        real += y.real, imag += y.imag;
        return *this;
    }
    Complex &operator-=(Complex y)
    {
        real -= y.real, imag -= y.imag;
        return *this;
    }

    // Complex &operator*=(Complex);
    // Complex &operator/=(Complex);
};

Complex operator+(Complex a, Complex b) { return a += b; }
Complex operator-(Complex a, Complex b) { return a -= b; }
// Complex operator*(Complex a, Complex b) { return a *= b; }
// Complex operator/(Complex a, Complex b) { return a /= b; }
bool operator==(Complex a, Complex b)
{
    return a.getReal() == b.getReal() && a.getImag() == b.getImag();
}
bool operator!=(Complex a, Complex b)
{
    return !(a == b);
}
ostream& operator<<(ostream &os, const Complex &a)
{
    os << a.getReal() << " + " << a.getImag() << "j" << endl;
    return os;
}
