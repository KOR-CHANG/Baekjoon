#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b));

int main(){

    int m,n;
    int a[10000];
    int sum = 0;
    int min = 10000;
    scanf("%d %d", &m, &n);
    
    for(int i = 1; i < n; i++)
    {
    	a[i] = i * i;
	}
	
	for (int i = 1; i <=n ; i++)
	{
		if (m <= a[i] && a[i] <= n)
		{
			sum += a[i];
			min = MIN(min, a[i]);
		}
	}
	if (sum == 0)
	{
		printf("-1");
	}else{
		printf("%d\n", sum);
        printf("%d\n", min);
	}
    return 0;
}
