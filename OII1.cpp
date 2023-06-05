#include <iostream>
#include <string>

using namespace std;

void solve(int t) {
    int K;
    cin >> K;
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    // aggiungi codice...
    int risposta = 0;

    for (int i = 0; i < K; i++)
    {
        if (A > 0)
        {
            
        }
    }

    cout << "Case #" << t << ": " << risposta << "\n";
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}
