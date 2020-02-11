#include <stdio.h>



int maximum(int* t, int n){
	int max;

	max = *t;

	for (int i = 1; i < n; i++)
	{
		if (max<*(t+i))
		{
			max= *(t+i);
		}
	}
	return max;
}

int minimum(int* t, int n){
	int min;

	min = *t;

	for (int i = 1; i < n; i++)
	{
		if (min>*(t+i))
		{
			min= *(t+i);
		}
	}
	return min;
}

void f(int a, int b, int *s, int *p) {
*s = a + b;
*p = a * b;
}

void minmax(int *t, int n, int *pmin, int *pmax){
	*pmin = minimum(t,n);
	*pmax = maximum(t,n);
}
int* copie(int *tab, int n) {
int tab2[n];
for (int i = 0; i < n; i++) {
tab2[i] = tab[i];
}
return tab2;
}

int main(int argc, char const *argv[])
{
	int tab[10]={-6,-6,-5,-1,-10,42,30,9,8,14};
	//int t[5]={6,6,5,1,10};
	//printf("%i ou %i \n", maximum(t,5), maximum(tab,5) );

	int x, y;
	f(12, 4, &x, &y);
	printf("x = %d, y = %d\n", x, y);

	int a, b;
	minmax(tab,10,&a, &b);
	printf("min = %d, max = %d\n", a, b);
	
}


