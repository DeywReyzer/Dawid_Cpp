#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Task
{
public:

    void Example2_6()
    {
        short c0;
        cout << "Write c0 please" << endl;
        cin >> c0;
        short i = 0;
        while (c0 != 1)
        {
            if (c0 % 2 == 0)
            {
                c0 /= 2;

            }
            else
            {
                c0 = 3 * c0 + 1;

            }
            i++;
            cout << c0 << endl;
        }
        cout << "Кількість кроків потрібна була = " << i << endl;
    }
    void Example2_7()
    {
        double pi4 = 0.;
        long n;
        cout << "Number of iterations? ";
        cin >> n;

        for (long i = 0; i < n; ++i) {
            double x = ((double)rand() / RAND_MAX) * 2 - 1;
            double y = ((double)rand() / RAND_MAX) * 2 - 1;
            if (x * x + y * y <= 1) {
                pi4 += 1;
            }
        }

        cout.precision(20);
        cout << "Pi = " << (pi4 * 4.) << endl;
    }
    void Example2_10()
    {
        short n;
        cout << "Write n number" << endl;
        cin >> n;

        if (n > 1)
        {
            for (short i = 0; i < 1; i++)
            {
                highPairBox(n);
                middlePairBox(n);
                lowerPairBox(n);
            }
        }
        else
        {
            cout << "Write a natural number greater than 1" << endl;
            exit(0);
        }
    }
private:
    void highPairBox(int width)
    {
        cout << '+';
        for (int i = 0; i < width - 2; i++)
            cout << '-';
        cout << '+' << endl;
    }

    void middlePairBox(int width)
    {
        for (int i = 0; i < width - 2; i++) {
            cout << '|';
            for (int j = 0; j < width - 2; j++)
            {
                cout << ' ';
            }
            cout << '|' << endl;
        }
    }

    void lowerPairBox(int width)
    {
        cout << '+';
        for (int i = 0; i < width - 2; i++)
            cout << '-';
        cout << '+' << endl;
    }

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int ex;
chooseExample:
    cout << "Choose example(only last number):\n2.6\n2.7\n2.10" << endl;
    cin >> ex;

    cout << "" << endl;
    Task a;

    switch (ex)
    {
    case 7:
        a.Example2_7();
        break;
    case 6:
        a.Example2_6();
        break;
    case 10:
        a.Example2_10();
        break;
    default:
        cout << "Вибери з того що я написав";
        cout << endl;
        break;
    }

    string answer;
    cout << "Do you want see next example? Choose yes or no." << endl;
    cin >> answer;
    if (answer == "yes")
    {
        goto chooseExample;
    }
    else
    {
        exit(0);
    }

    return 0;
}





