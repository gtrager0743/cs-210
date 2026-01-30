#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

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