#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, i, j, q, inp, N;
    int *arr = new int[N];
    
    cin >> n >> q;   
    
    for (i=0; n>i; i++)
    { cout << "here1 ";
        cin >> k;
        
        for (j=0; k>j; j++)
        {cout << "here2 ";
            cin >> inp;
            arr[i]={inp};
        }
    }
    cout << arr[1];
    
    return 0;
}
