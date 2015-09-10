#include <stdio.h>


void fv(int *j) {
	*j = *j+1;
	printf("j: %d  %p\n", *j, &j);
}

int maximum(int *pSzam, int meret){
	printf("fent: %d", (int)(sizeof(pSzam) / sizeof(int)));
	int max = pSzam[0];
	int i = 1;
	for(; i < meret; i++){
		if (max < pSzam[i]){
			max = pSzam[i];
		} 
	}
	return max;
}

int main(int argc, char **argv) {
	int max;
	const int m = 5;
	int szamok[] = {2, 4, 34, 7, 4};
	
	printf("lent: %d", (int)(sizeof(szamok) / sizeof(int)));


	max = maximum(szamok, m);
	printf("Maximum: %d \n", max);
	int o = 12;
	fv(&o);
	printf("o: %d  %p\n", o, &o);
	return 0;
}

