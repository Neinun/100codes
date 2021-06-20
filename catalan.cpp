#include <iostream>
using namespace std;

int *cat; 

unsigned long int catalan_dp(int n)
{
    cat[0] = cat[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        cat[i] = 0;
        for (int j = 0; j < i; j++)
            cat[i] += cat[j] * cat[i - j - 1]; 
    }

    
    return cat[n];
}

int main(int argc, char *argv[])
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cat = new int[n + 1];

    cout << "Catalan numbers from 0 to " << n << " are:\n";
    for (int i = 0; i <= n; i++)
    {
        cout << "catalan (" << i << ") = " << catalan_dp(i) << endl;
        
    }

    return 0;
}
