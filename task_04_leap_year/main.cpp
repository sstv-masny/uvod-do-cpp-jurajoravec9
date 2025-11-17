
#include <iostream>
using namespace std;
int main() {
    long long rok;
    cout << "zadaj rok";
    cin >> rok;
    if (rok % 4 == 0)
        cout << "rok je priestupny";
    else
        cout << "rok nieje priestopny";

    return 0;
}
