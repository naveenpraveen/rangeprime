#include<stdio.h>
int coprime(int a, int b)
{   
int gcd;
while ( a != 0 )
{
gcd = a; 
a = b%a;  
b = gcd;
}
if(gcd == 1)
return 1;
else
return 0;
}
int count_pairs(int arr[], int n)
{ 
int count = 0; 
for (int i = 0; i < n - 1; i++) 
{
for (int j = i + 1; j < n; j++)
{
if (coprime(arr[i], arr[j])){
printf("(%d %d)",arr[i],arr[j]);
       count++;}
              }            
}
return count;
}

int main()
{
int n;
scanf("%d", &n);
int a[25], i;
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("\nNo.of co primes are =%d", count_pairs(a, n));
return 0;
}
