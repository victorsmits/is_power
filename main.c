#include <stdio.h>
#include <stdbool.h>

bool is_power_2 ( int n);

int main() {
    printf("%d",is_power_2(4));
    printf("\n%d",is_power_2(5));
}

bool is_power_2 ( int n)
{
   if(~n & (n-1)){  //& -> comparaison bit à bit
       return true;
   }
    return false;
}