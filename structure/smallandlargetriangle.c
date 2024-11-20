#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    double p[n],s[n],temparea; 
    for(int i=0;i<n;i++)
    {
        p[i]=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        s[i]=sqrt(p[i]*(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c));
    }
    triangle temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp = tr[j]; 
                tr[j] = tr[i]; 
                tr[i] = temp;
                temparea=s[j];
                s[j]=s[i];
                s[i]=temparea;
            }
        }
    }
}




int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}