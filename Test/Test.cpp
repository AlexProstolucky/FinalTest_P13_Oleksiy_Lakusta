#include <iostream>

using namespace std;

class Fraction
{
private:
    int integer = 0;
    double numer;
    double denom;
public:
    Fraction(int n = 0, int d = 1) {
        this->numer = n;
        this->denom = d;
        this->integer = 0;
    }
    void comparison(Fraction a, Fraction b) {
        a.reduce();
        b.reduce();
        if (double(a.numer) / double(a.denom) == double(b.numer) / double(b.denom) && a.integer == b.integer) {
            cout << "Integer: " << a.integer << " " << a.numer << "/" << a.denom << " = " << "inteeger: " << b.integer << " " << b.numer << "/" << b.denom << endl;
        }
        if (a.integer > b.integer || double(a.numer) / double(a.denom) > double(b.numer) / double(b.denom)) {
            cout << "Integer: " << a.integer << " " << a.numer << "/" << a.denom << " > " << "inteeger: " << b.integer << " " << b.numer << "/" << b.denom << endl;
        }
        if (a.integer < b.integer || double(a.numer) / double(a.denom) < double(b.numer) / double(b.denom)) {
            cout << "Integer: " << a.integer << " " << a.numer << "/" << a.denom << " < " << "inteeger: " << b.integer << " " << b.numer << "/" << b.denom << endl;
        }
    }
    void reduce() {
        while (this->numer >= this->denom) {
            this->numer -= this->denom;
            this->integer++;
        }
    }
};
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    double n1 = 0, d1 = 0, n2 = 0, d2 = 0;
    cout << "Input first numer --> ";
    cin >> n1;
    cout << endl << "Input first denom --> ";
    cin >> d1;
    cout << endl <<  "Input second numer --> ";
    cin >> n2;
    cout << endl << "Input second denom --> ";
    cin >> d2;
    cout << endl;
    Fraction object1(n1, d1), object2(n2, d2);
    object1.comparison(object1, object2);
}