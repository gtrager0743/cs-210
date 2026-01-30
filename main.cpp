#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
R-1.1: Invalid Name
I_Have_A_Dollar_$ign
C++ does not allow the $ character in names.

R-1.4: String Contents
The contents of string s will be abcabcdabc.

R-1.5: Operator Precedence
((y + (2 * (z++))) < (3 - (w / 5)))
*/

// R-1.7: Sum function
long sumSmallerThan(int n)
{
    long sum = 0;
    for (int i = 0; i < n; ++i) sum += i;
    return sum;
}

// R-1.8: isMultiple Function
bool isMultiple(long n, long m)
{
    return (m != 0) && (n % m == 0);
}

// C-1.2: Even Product Pair
bool EvenProduct(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2 == 0 && size >= 2) return true;
    }
    return false;
}
// C-1.5: Array Shuffle (1 to 52)
void shuffleArray(int cards[], int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        int j = rand() % size;
        int temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
}
// C-1.10: Power of Two
long powerOfTwo(int i)
{
    return pow(2, i);
}

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
            cout << "I will alwayz use object-orientted desiggn." << endl;
        }
        else
        {
            cout << text << endl;
        }
    }
    return 0;
}