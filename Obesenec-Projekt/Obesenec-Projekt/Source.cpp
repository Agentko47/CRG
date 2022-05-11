#include <iostream>
#include <string>
using namespace std;
string player1, player2, word, underscore, guess;
int wrong = 0;
int main() {
    string copy = word;


    cout << "----------------------Vitajte pri hre OBESENEC!--------------------" << endl;
    cout << "Prosim, zadaj svoje meno, HRAC1" << endl;
    cin >> player1;
    cout << "Prosim, zadaj svoje meno, HRAC" << endl;
    cin >> player2;
    cout << "Dobre " << player1 << " a " << player2 << ". Zacnime hrat!" << endl;
    cout << player1 << " prosim vloz slovo ktore bude " << player2 << " hadat. (bez diakritiky)" << endl;

    cin >> word;

    
    for (int x = 0; x < 30; x++) {
        cout << endl;
    }

    
    while (underscore.size() != word.size()) {
        underscore.push_back('_');
    }

    cout << underscore << endl;

    
    while (wrong < 12) {
        cin >> guess;

        
        if (guess.size() > 1) {
            if (guess == word) {
                cout << "´To je spravne slovo." << endl;
                break;
            }
            else {
                cout << underscore << endl;
                cout << "Zle slovo, skus znova." << endl;
                cout << "Pouzite: " << guess << endl;
                wrong++;
            }

        }

        if (underscore == word) {
            cout << "Vyhral si "<<player2<<"!"<<endl;
            break;
        }


        if (wrong == 1) {
            cout << "|" << endl;
        }
        else if (wrong == 2) {
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 3) {
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 4) {
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 5) {
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 6) {
            cout << "|==" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 7) {
            cout << "|===" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 8) {
            cout << "|===" << endl;
            cout << "|  O" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 9) {
            cout << "|===" << endl;
            cout << "|  O" << endl;
            cout << "|  I" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 10) {
            cout << "|===" << endl;
            cout << "|  O" << endl;
            cout << "| -I" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 11) {
            cout << "|===" << endl;
            cout << "|  O" << endl;
            cout << "| -I-" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 12) {
            cout << "|===" << endl;
            cout << "|  O" << endl;
            cout << "| -|-" << endl;
            cout << "| /" << endl;
            cout << "|" << endl;
        }
        else if (wrong == 13) {
            cout << "|===" << endl;
            cout << "|  O" << endl;
            cout << "| -I-" << endl;
            cout << "| / /" << endl;
            cout << "| Zomrel si" << endl;

            cout << "Prehral si " <<player2<< "!" "Spravne slovo bolo: " << word << endl;
            break;
        }
    }
}