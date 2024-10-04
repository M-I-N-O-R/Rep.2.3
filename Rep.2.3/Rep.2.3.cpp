#include <iostream>
using namespace std;

int main() {
    setlocale(0, ".1251");
    int n;
    cout << "Введiть кiлькiсть рядкiв для трикутника: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}