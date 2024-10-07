#include <iostream>
#include <windows.h> 
using namespace std; // Arbol de navidad

int main()
{
    int n, m ,a, mov;
    cout << "Ingrese la base del arbol: ";
    mov = 0;
    cin >> n;
    a = ((2 * n) - 3) / 2;
    m = 1;

    while (true)
    {
        system("cls");

        for (int i = 0; i < n - 1 + mov; i++) {
            std::cout << " ";
        }
        cout << "*" << endl;
        for (int i = 0; i < a + mov; i++) {
            std::cout << " ";
        }
        std::cout << "***" << std::endl;

        for (int i = 0; i < n - 1 + mov; i++) {
            std::cout << " ";
        }
        cout << "*" ;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i + mov ; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < 3 ; i++)
        {
            for (int k = 0; k < a + mov; k++)
            {
                cout << " ";
            }
            for (int j = 0; j < 3 ; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        Sleep(500); 

        // Borra la estrella
        system("cls");

        cout << endl;
        cout << endl;
        

        for (int i = 0; i < n ; i++)
        {
            for (int j = 0; j <  n - i + mov ; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < 3 ; i++)
        {
            for (int k = 0; k < a + mov; k++)
            {
                cout << " ";
            }
            for (int j = 0; j < 3 ; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        Sleep(500);

        
        if (m == 1)
        {
            mov++;
            if (mov == 5)
            {
                m = 0;
            }
        }

        if (m == 0)
        {
            mov--;
            if (mov == 0)
            {
                m = 1;
            }

        }
        
    }
    
    return 0;
}