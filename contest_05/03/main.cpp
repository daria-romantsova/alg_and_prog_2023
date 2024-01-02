#include <algorithm>
#include <cmath>

class Complex 
{
public:
    Complex() : re(0.0), im(0.0) {}

    Complex(std::string str) 
    {
        str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

        size_t pos = str.find_last_of("+-");

        double real_part = std::stod(str.substr(0, pos));
        double imag_part = std::stod(str.substr(pos));

        re = real_part;
        im = imag_part;
    }

    Complex operator+(const Complex& other) const 
    {
        Complex result;
        result.re = re + other.re;
        result.im = im + other.im;
        return result;
    }

    Complex operator-(const Complex& other) const 
    {
        Complex result;
        result.re = re - other.re;
        result.im = im - other.im;
        return result;
    }

    Complex operator*(const Complex& other) const 
    {
        Complex result;
        result.re = re * other.re - im * other.im;
        result.im = re * other.im + im * other.re;
        return result;
    }

    Complex operator/(const Complex& other) const 
    {
        Complex result;
        double denominator = std::pow(other.re, 2) + std::pow(other.im, 2);
        result.re = (re * other.re + im * other.im) / denominator;
        result.im = (im * other.re - re * other.im) / denominator;
        return result;
    }

    friend std::ostream& operator<<(std::ostream&; out, const Complex& num) 
    {
        out << (num.re == 0.0 ? 0.0 : num.re)
            << (num.im < 0 ? "" : "+")
            << (num.im == 0.0 ? 0.0 : num.im) << 'j';
        return out;
    }
private:
    double re;
    double im;
};
