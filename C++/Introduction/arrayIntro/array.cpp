#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    
    scanf ("%d", &n);
    
    int arr[n-1];
    int i = 0;
    do
    {        
        scanf("%d", &arr[i]);        
        
        i++; 
        
    } while (i < n);
    
    for (i = i-1; i >= 0; --i)
    {
        printf ("%d ", arr[i]);
    }   
    
    return 0;
}
