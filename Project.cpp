#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// P-1.1: Punishment Generator
int punishmentGenerator()
{
    srand(time(0));
    string text = "I will always use object-oriented design.";
    bool typoLines[101] = {false};
    int count = 0;
    while (count < 8)
    {
        int line = (rand() % 100) + 1;
        if (!typoLines[line])
        {
            typoLines[line] = true;
            count++;
        }
    }
    for (int i = 1; i <= 100; i++)
    {
        cout << i << ". ";
        if (typoLines[i])
        {
            cout << "I will alweys use object-oriienteed dessiggn." << endl;
        }
        else
        {
            cout << text << endl;
        }
    }
    return 0;
}