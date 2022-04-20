#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int main()
{
    int r, c, a[3][3], b[3][3], sum[3][3], i, j;

    cout << "Zadaj pocet riadkov (od 1 do 3): ";
    cin >> r;

    cout << "Zadaj pocet stlpcov (od 1 do 3): ";
    cin >> c;

    cout << endl << "Zadaj cisla do 1. matice: " << endl;

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << "Zadaj cislo a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    cout << endl << "Zadaj cisla do 2. matice: " << endl;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << "Zadaj cislo b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << endl << "Sucet dvoch matic je: " << endl;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if (j == c - 1)
                cout << endl;
        }

    return 0;
}

void board()
{
    system("cls");
    cout << "\n\n\t Matice \n\n";

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
