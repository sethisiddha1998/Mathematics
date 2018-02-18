#include <stdio.h>

void print(float m[100][100],int n)
{
	printf("\n");
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%f  ",m[i][j]);
			/* code */
		}
		printf("\n");
		/* code */
	}
}
void trans(float m[100][100],int n,int from,int to)
{
	int i;int f=m[to][0],t=m[from][0];
	for (i = 0; i < n; i++)
	{
		m[to][i]=(m[to][i])-((f/t)*m[from][i]);
		//printf("\n%f",m[to][i]);
		
		/* code */
	}
}
void compute(float m[100][100],int n)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		//printf("%f\n",m[i][0]);
		if ((int)m[i][0]==0)
		{
			i++;
			//printf("%d\n",i);
			/* code */
		}
		if (m[i][i]==0)
		{
			break;
			/* code */
		}
		for (j = i+1; j < n; j++)
		{
			//print(m,n);
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
		for (j = 0; j < n; j++)
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
	printf("heelo");
	return 0;
}
