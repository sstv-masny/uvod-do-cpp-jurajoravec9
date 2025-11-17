
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    long long suma = 0, km
                                cout
                            << "zadaj kilometre";
    cin >> km;
    if (km <= 2) {
        suma = 4;
        cout << "Cena za taxik " << suma << "euro";
    } else {
        suma = 4.00 + 1.50 * ceil(km - 2);
        cout << "Cena za taxik " << suma << "eur";
    }
    return 0;
}
