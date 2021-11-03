#include <iostream>

using namespace std;
void create(int* a, const int p)
{
    for (int i = 0; i <= p; i++)
    {
        a[i] = -40 + rand() % (91);
        if ((a[i] > 0 && (a[i] % 5) != 0) || (a[i] < 0))
            cout << a[i] << ", ";
    }
}

void zavd(int* a, int p, int& S, int& n)
{
    for (int i = 0; i <= p; i++)
    {
        S += a[i];
        a[i] = 0;
        n += 1;
    }
}


void end(int* a, int S, int number, int p)
{
    cout << endl << "Sum = " << S << endl;
    cout << "number = " << number << endl;
    for (int i = 0; i <= p; i++)
    {
        cout << a[i] << ", ";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int p = 21;
    int b[p + 1];
    int S = 0;
    int number = 0;


    create(b, p);
    zavd(b, p, S, number);
    end(b, S, number, p);

    return 0;
}