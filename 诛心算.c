#include <stdio.h>

int check[101];
int main()
{
    int n;
    scanf("%d", &n);
    int v[n];
    int x, j;
    int a, b;
    int count = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);


    for(j =0;j < n;j++)
        for(a = 0;a < n;a++)
        {
            for(b = a + 1; b<n;b++)
            {
                x = v[b] + v[a];
                if(x == v[j] && v[b] != v[a] && check[j]==0)
                        {
                            count++;
                            check[j] = 1;
                        }

            }
        }
    printf("we can see %d", count);
    return 0;
}
