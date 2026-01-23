
#include <iostream>
using namespace std;
int main() {
    long long a, b, c, min;
    cout << "Zaddaj tri cisla";
    cin >> a >> b >> c;
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    cout << "najmensie c je " << min;
    return 0;
}
