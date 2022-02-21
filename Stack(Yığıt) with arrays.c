#include <stdio.h>
#include <stdlib.h>

int* dizi;
int tepe = 0;
int boyut = 2;

void push(int a) {
	if (tepe >= boyut) {
		int* dizi2 = (int*)malloc(sizeof(int) * boyut * 2);
		for (int i = 0; i < tepe; i++)
		{
			dizi2[i] = dizi[i];
		}
		free(dizi);
		dizi = dizi2;
		boyut *= 2;
	}
	dizi[tepe++]=a;
}
void bastýr() {
	printf("Dizinin su anki durumu:\n");
	printf("%d boyutlu dizi: ", boyut);
	for (int i = 0; i < tepe; i++)
	{
		printf("%d ", dizi[i]);
	}
}

int pop() {
	if (tepe <= boyut / 4)
	{
		int* dizi2 = (int*)malloc(sizeof(int) * boyut / 2);
		for (int i = 0; i < tepe; i++)
		{
			dizi2[i] = dizi[i];
		}
		free(dizi);
		dizi = dizi2;
		boyut /= 2;
	}
	return dizi[--tepe];
}


int main() {
	int a, n = 1, b, c, q, d, m = 1;
	dizi = (int*)malloc(sizeof(int) * boyut);
	printf("Baslangic degeri girin:");
	scanf_s("%d", &a);
	push(a);
	while (1) {
		l:
		system("CLS");
		printf("Sayi eklemek icin 1 e ,sayi cikarmak icin 2 ye ,su anki diziyi yazdirmak icin 3 e,cikmak icin 0 a basin: ");
		scanf_s("%d", &q);
		if (q == 1) {
			while (m != 0)
			{	
				k:
				system("CLS");
				printf("En uste sayi girmek icin 1 e ust menu icin 0 a basin: ");
				scanf_s("%d", &b);
				if (b == 1) {
					printf("Eklemek istediginiz sayiyi giriniz: ");
					scanf_s("%d", &c);
					push(c);
					bastýr();
					printf("\n");
					system("PAUSE");
				}
				else if (b == 0)
				{
					m = 0;
				}
				else
				{
					printf("Lutfen belirtilen sayilardan girin !!\n");
					system("PAUSE");
					goto k;
				}
			}
			m = 1;
		}
		else if (q == 2) {
			while (n != 0)
			{
				j:
				system("CLS");
				printf("En ustten sayi cikarmak icin 1 e ust menu icin 0 a basin:");
				scanf_s("%d", &d);
				if (d == 1)
				{
					printf("%d sayisi cikarildi\n", pop());
					bastýr();
					system("PAUSE");
				}
				else if (d == 0)
				{
					n = 0;
				}
				else {
					printf("Lutfen belirtilen sayilardan girin !!\n");
					system("PAUSE");
					goto j;
				}
			}
			n = 1;
		}
		else if (q == 3)
		{
			bastýr();
			printf("\n");
			system("PAUSE");
		}
		else if (q == 0)
		{
			exit(EXIT_SUCCESS);
		}
		else {
			printf("Lutfen belirtilen sayilardan girin !!\n");
			system("PAUSE");
			goto l;
		}
	}
}