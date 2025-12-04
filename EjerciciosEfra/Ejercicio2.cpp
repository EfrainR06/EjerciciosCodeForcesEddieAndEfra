#include <bits/stdc++.h>
using namespace std;

int rounds;

int main() {
    cin >> rounds;
    while (rounds--) {
        int a;
        cin >> a;
        vector<int> lista(2 * a);
        for (int i = 0; i < 2 * a; ++i) cin >> lista[i];

        int odd_count, even_count;

        //Contar frecuencias, se usa la funcion map
        //Explicación:
        //map es un diccionario, basicamente, es una estructura de datos,
        // que sirve para guardar los datos para cualquier cosa string, int, etc;

        unordered_map<int, int> freq;
        for  (int x : lista)
            freq[x]++;

        int x = 0,y = 0, z = 0;

        for (auto &p : freq) {
            if (p.second & 1 )
                x++;
            else if (p.second % 4)
                y++;
            else
                z++;
        }
        int ans = x + 2*y + 2*z;

        if ((z & 1) && x == 0)
            ans -= 2;

        cout << ans << endl;

    }
    return 0;
}