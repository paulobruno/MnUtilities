// 2014, PAULO BRUNO DE SOUSA SERAFIM, Fortaleza - CE, Brasil

#ifndef PB_MN2_TABLE_GENERATOR_H
#define PB_MN2_TABLE_GENERATOR_H

#include <stdio.h>

double function(double x) 
{
	return (x); // type your funcion here
}

void generate_table(double (*func)(double), double xInf, double xSup, double h);

int main(int narg, char* argc[])
{
	generate_table(&function, 0, 4, 1); // make changes of the values according to your needs

	return 0;
}

void generate_table(double (*func)(double), double xInf, double xSup, double h)
{
	FILE *fp;
	fp = fopen("mn2_table", "w"); // it's better to change the file name

	// the line below prints the number of subdivisions in the first
	// line of the file, comment it if you don't need this information
	fprintf( fp, "%d\n", (int)((xSup - xInf) / h) );

	for (; xInf <= xSup; xInf += h)
	{
		// fills a table with 'x    f(x)' values
		fprintf(fp, "%lf\t%lf\n", xInf, func(xInf));
	}

	fclose(fp);
}

#endif // PB_MN2_TABLE_GENERATOR_H
