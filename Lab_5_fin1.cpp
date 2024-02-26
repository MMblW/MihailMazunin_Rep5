#include <iostream>
using namespace std;
void arr2dm(int l1[], int size)
{
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        arr[0][i] = l1[i];
        arr[1][i] = l1[i+3];
        arr[2][i] = l1[i+6];
    }
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int size = 3;
    int num, i, j, a, count;
    int l1[size * size]= {};
    int arr[size][size] = {};
    cout << "Вводите числа строки" << endl;
    for (i = 0; i < 9; i++)
    {
        cin >> num;
        l1[i] = num;
    }
    arr2dm(l1, size);
    return 0;
}


