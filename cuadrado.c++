
#include <iostream>
#include <iomanip> 
#include <math.h>


using namespace std;


string encontrarColor(int i, int j)
{
    int opuesto = 16 - j;
    string color;
    if(j>=8)
    {
        int change = opuesto;
        opuesto = j;
        j = change;
    }
    if (j % 2 == 1)
    {
        if (i >= j && i <= opuesto)
        {
            color = "black";
        }
        else
        {
            if (i % 2 == 1)
            {
                color = "black";
            }
            else
            {
                color = "white";
            }
        }
    }
    else
    {
        if (i >= j && i <= opuesto)
        {
            color = "white";
        }
        else
        {
            if (i % 2 == 1)
            {
                color = "black";
            }
            else
            {
                color = "white";
            }
        }
    }
    return color;
}

int main()
{
	int i, j;
	cin >> i;
	cin >> j;
	
    cout<<encontrarColor(i,j)<<endl;
	return 0;
}