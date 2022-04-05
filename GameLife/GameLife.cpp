#include <iostream>
#include<cstdlib>
#include<windows.h>

#define Y 45
#define X 15

int** create()
{
    int** m = new int* [X];
    m[0] = new int[X * Y];
    for (int i = 1; i != X; ++i)
        m[i] = m[i - 1] + Y;
    return m;
}

void one_deligation(int **m)
{
    for (int i = 0; i != X; i++)
        for (int j = 0; j != Y; j++)
            m[i][j] = rand() % 2;
}

void print(int** m)
{
    for (int i = 0; i != X; i++) 
    {
        for (int j = 0; j != Y; j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int** map = create();    
    one_deligation(map);
    print(map);
    Sleep(5000);
    system("cls");
    
    return 0;
}
