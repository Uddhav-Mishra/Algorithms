#include <iostream>
using namespace std;


int numbers = [1,2,3,4,5,6,7,8,9];
int sum = 100;
char signs = ['+', '-', '&'];
int nil = 8;
int tc = pow(3, 8);

int combinations[tc+1];

for (var i = 0; i < tc; i++)
{
    int  temp[100];
    for (var j = 0; j < 9; j++)
    {
        comb[i][j*2] = numbers[j];
    }

}

for (var k = 0; k < 8; k++)
{
    int w = tc / pow(3, k+1);
    int si = 0;
    for (int i = 0; i < tc; i+=w)
    {

        for (int j = 0; j < w && i+j < tc; j++)
        {
            combinations[i+j][k*2+1] = (int)signs[si];
        }
        si = (si+1)%3;
    }
}

for (int i = 0; i < combin; i++)
{
    int  combination = combinations[i];

}
