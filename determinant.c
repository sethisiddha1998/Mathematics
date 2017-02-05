#include <stdio.h>

void trans(float m[100][100],int n,int from,int to)
{
	int i;
	for (i = 0; i < n; i++)
	{
		m[to][i]=(m[to][i])-((m[to][0]/m[from][0])*m[from][i]);
		/* code */
	}
}
void compute(float m[100][100],int n)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = i+1; i < n; i++)
		{
			trans(m,n,i,j);
			/* code */
		}
		/* code */
	}
}
float det(float m[100][100],int n)
{
	compute(m,n);
	int i,j;float d=1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; i < n; i++)
		{
			if(i==j)
			{
				d*=m[i][j];
			}
			/* code */
		}
		/* code */
	}
	return d;
}
int main(int argc, char const *argv[])
{
	float m[100][100];
	int n,i,j;
	printf("Enter the order of the matrix: " );
	scanf("%d",&n);
	printf("Enter the values in row major form\n");
	for (i = 0; i <n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%f",&m[i][j]);
			/* code */
		}
		/* code */
	}
	printf("%f\n",det(m,n));
	return 0;
}
