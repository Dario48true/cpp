#include <iostream>
#include <string>

using namespace std;

void solve(int t) {
	int N;
	cin >> N;
	char S[] = "";
	cin >> S;
	char vecchio;
	char nuovo;
	int PiuLungo = 0;
	int Lunghezza = 0;

	// aggiungi codice...
	for (int i = 0; i < N; i++)
	{
		if (S[i] == '0')
		{
			S[i] = '1';
			for (int j = 1; j < N; j++)
			{
				vecchio = S[j-1];
				nuovo = S[j];
				if (nuovo == '1' && vecchio == '1'){
					Lunghezza++;
				}
				if (Lunghezza > PiuLungo)
				{
					PiuLungo = Lunghezza;
				}
			}
			S[i] = '0';
		}
		
	}

	cout << "Case #" << t << ": " << PiuLungo << "\n";
}

int main() {
	// se preferisci leggere e scrivere da file
	// ti basta decommentare le seguenti due righe:

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		solve(t);
	}

	return 0;
}
