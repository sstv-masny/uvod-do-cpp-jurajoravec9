
#include <iostream>
using namespace std;
int main() {
    long long n, suma = 0, i = 1;
    cout << "zadaj cislo";
    cin >> n;
    for (i = 1; i <= n; i++)
        suma = suma + i;
    cout << "sucen cisel n-1 je " << suma;
    return 0;
}
