#include <iostream>
using namespace std;
int main()
{
    system("cls");

    int n, hundred=0, fifty=0, twenty=0, one=0;
    cout << "Enter the amount of money: ";
    cin >> n; // 100, 50, 20, 1 rs. note

    if (n < 0)
    {
        cout << "motherfucker broke ass nigga!";
        exit(0);
    }

    if (n >= 100)
    {
        hundred = n / 100;
        n = n % 100;
    }
    if (n >= 50)
    {
        fifty = n / 50;
        n = n % 50;
    }
    if (n >= 20)
    {
        twenty = n / 20;
        n = n % 20;
    }
    if (n >= 1)
    {
        one = n;
    }
    cout << "We need exactly " << hundred << " hundred rs. " << fifty << " fifty rs. " << twenty << " twenty rs. " << one << " one rs. notes.";
}