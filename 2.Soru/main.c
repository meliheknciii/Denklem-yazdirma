#include <stdio.h>
#include <stdlib.h>


int main() {
	int p,N;
	int i;

	printf("P (Us) giriniz:"); // üs degeri girilir
	scanf("%d",&p);
	
	printf("N (adet) giriniz:"); // adet degeri girilir. adet degeri 0 dan kucuk olamaz
	scanf("%d",&N);
	
	if (N<=0){
	   printf("N yi tekrar giriniz."); // adet degeri 0 dan kucuk olursa durur
	   return 1;
	}
	
	printf("(");
	for (i=1;i<=N;i++)
	{
		printf("|X%d|^%d",i,p);
		if (i<N)
		{
			printf("+");
		}
	}
	printf(")^1/%d",p);
		
	

	
	

	return 0;
}
