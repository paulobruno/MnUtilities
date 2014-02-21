// Fevereiro 2014, PAULO BRUNO DE SOUSA SERAFIM, Fortaleza - CE, Brasil

#include <stdio.h>

int main(int narg, char* argc[])
{
	int n, i;

	FILE *fp;
	fp = fopen("mn2_table", "r");

	fscanf(fp, "%d\n", &n);

	double x[n], fx[n];

	for (i = 0; i <= n; ++i)
	{
		fscanf(fp, "%lf\t%lf\n", &x[i], &fx[i]);
	}

	return 0;
}
