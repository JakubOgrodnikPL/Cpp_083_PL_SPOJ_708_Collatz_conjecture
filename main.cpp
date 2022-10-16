#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        for(int j = 0; j < 10000; j++)
        {
            if(x == 1)
            {
                cout << j << endl;
                break;
            }
            if(x % 2) x = 3*x + 1;
            else x = x/2;
        }
    }
}



/*
#include <iostream>
using namespace std;
int liczba_testow, element_poczatkowy, pierwsze_n;
int n;
int ciag(int n)
{
    int tab[100000];
    for (int i=0; i<n+1; i++ )
    {
        if (n=0) return element_poczatkowy;

        if (tab[i]%2==0)
        {
            return ciag((n-1)/2);
        }

        if (tab[i]%2==1)
        {
            return ciag(3*(n-1)+1);
        }
    }
}

int main()
{
    cin >> liczba_testow;
    for (int indeks_liczby_testow = 0; indeks_liczby_testow < liczba_testow; indeks_liczby_testow++)
    {
        cin >> element_poczatkowy;
        for (int j=0; j<n+1; j++ )
        {
            if (ciag(j)==1)
            {
                pierwsze_n = j;
                break;
            }
        }
        cout <<pierwsze_n<<endl;


    }
    return 0;
}
*/
