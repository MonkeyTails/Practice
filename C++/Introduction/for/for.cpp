#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n=0;
    int m=0;
    string statements[11]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    for (n; n<=m; n++)
    {
        if ((n>=1) && (n<=9))
        {
            cout << statements[n-1] << '\n';
        }
        else
        {
            if (n%2==0)
            {
                cout << statements[9] << '\n';
            }
            else
            {
                cout << statements[10] << '\n';
            }
        }
    }
    
    return 0;
}
