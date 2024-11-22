#include <iostream>
using namespace std;

int main() {
    
    int n, i, vmin, hmin, sommaV, sommaH;

    cout << "inserire giri" << endl;
    cin >> n;
    double h[n], v[n];

    for (i = 0; i <= n - 1; i++) {
        h[i] = rand() % 90;
        h[i] = h[i] / 10;
        cout << i + 1 << " giro di H : " << h[i] << endl;
        v[i] = rand() % 90;
        v[i] = v[i] / 10;
        cout << i + 1 << " giro di V : " << v[i] << endl;
    }
    vmin = 0;
    hmin = 0;
    for (i = 0; i <= n - 1; i++) {
        if (h[i] < h[hmin]) {
            hmin = i;
        }
        if (v[i] < v[vmin]) {
            vmin = i;
        }
    }
    if (v[vmin] < h[hmin]) {
        cout << "il giro più veloce è : " << v[vmin] << " di ver" << endl;
    } else {
        cout << "il giro più veloce è : " << h[hmin] << " di ham" << endl;
    }
    sommaV = 0;
    sommaH = 0;
    for (i = 0; i <= n - 1; i++) {
        sommaV = (int) (sommaV + v[i]);
        sommaH = (int) (sommaH + h[i]);
    }
    if (sommaV < sommaH) {
        cout << "ha vinto ver" << endl;
    } else {
        cout << "ha vinto ham" << endl;
    }
    return 0;
}

