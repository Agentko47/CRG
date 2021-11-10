
#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:

    void setValues(string, string,
        string, string,
        string, int, int);

    void askQuestion();
};

int main()
{
    cout << "Vitaj v kvize" << endl;
    cout << "Stlac Enter pre zacatie "
        << "kvizu" << endl;

    cin.get();

    string Name;

    cout << "Ako sa volas?"
        << endl;
    cin >> Name;
    cout << endl;

    string Respond;
    cout << "Si pripraveny?"
        << Name 
        << " ano/nie" << endl;
    cin >> Respond;

    if (Respond == "ano") {
        cout << endl;
        cout << "Vela stastia" << endl;
    }
    else {
        cout << "Ok, dovidenia" << endl;
        return 0;
    }

    
    Question q1;
    Question q2;
    Question q3;
    
    q1.setValues("Kedy su Vianoce?",
        "26.12",
        "24.12",
        "28.12",
        "30.12",
        2,
        10);
    q2.setValues("Kolko je dni v roku?",
        "420",
        "666",
        "300",
        "365",
        4,
        10);
    q3.setValues("Co je mozok pocitaca?",
        "Zdroj",
        "Procesor",
        "SSD Disk",
        "Chladic",
        2,
        10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();

    cout << "Celkove skore" << Total
        << "z 30" << endl;

    if (Total >=20) {
        cout << "Gratulujem, presiel si"
            << " kviz." << endl;
    }

    else {
        cout << "Skoda, nepresiel si cez kviz"
            << endl;
        cout << "Nabuduce viac stastia"
            << endl;
    }
    return 0;
}

void Question::setValues(
    string q, string a1,
    string a2, string a3,
    string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << endl;

    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;

    cout << "Aka je tvoja odpoved(v cisle)"
        << endl;
    cin >> Guess;

    
    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Spravne!" << endl;

        Total = Total + Question_Score;
        cout << "Score = " << Question_Score
            << " zo "
            << Question_Score
            << "!" << endl;
        cout << endl;
    }

    else {
        cout << endl;
        cout << "Nespravne" << endl;
        cout << "Score = 0"
            << " zo "
            << Question_Score
            << "!" << endl;
        cout << "Spravna odpoved = "
            << Correct_Answer
            << "." << endl;
        cout << endl;
    }
}