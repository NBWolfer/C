#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define pi 3.141592653589793

//Genel Hesap Makinesi (mükemmel sayýlarý bulma, pallidrom sayýlarý bulma eklenecek)

void multiply(float sayi1, float sayi2)
{
	sayi1 = sayi1 * sayi2;
	printf("\nCarpim sonucu:%.3f\n\n", sayi1);
}
void sum(float sayi1, float sayi2)
{
	sayi1 += sayi2;
	printf("\nToplam sonucu:%.3f\n\n", sayi1);
}
void sub(float sayi1, float sayi2)
{
	sayi1 -= sayi2;
	printf("\nCýkarma sonucu:%.3f\n\n", sayi1);
}
void divide(float sayi1, float sayi2)
{
	if (sayi2 != 0)
		printf("\nBolme sonucu:%.3f\n\n", sayi1 / sayi2);
	else
		printf("\nLutfen 2. sayiyi 0 dan farkli bir deger girin !\n\n");
}
void ikilikbul(int onluk)
{
	int gecici2 = 1, taban2 = 1, sonuc1=0, i=0;
	while (onluk > 0) {
		gecici2 = (int)((onluk % 2) * pow(10, i));
		i++;
		onluk = onluk / 2;
		sonuc1 = sonuc1 + gecici2;
	}
	printf("\nIkilik karsiligi:%d\n\n", sonuc1);
}
void onlukbul(int ikilik)
{
	int gecici10 = 1, taban10 = 1, sonuc = 0;
	while (ikilik > 0)
	{
		gecici10 = ikilik % 10;
		sonuc = sonuc + gecici10 * taban10;
		taban10 = taban10 * 2;
		ikilik = ikilik / 10;
	}
	printf("\nOnluk karsiligi:%d\n\n", sonuc);
}
void sýralama(int a)
{
	int k;
	int* dizi = (int*)malloc(a * sizeof(int));
	printf("Siralamak istediginiz degerleri girin:\n");
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &dizi[i]);
	}
	for (int b = 0; b < a; b++)
	{
		for (int c = 0; c < a - b; c++)
		{
			if (dizi[c + 1] > dizi[c])
			{
				k = dizi[c];
				dizi[c] = dizi[c + 1];
				dizi[c + 1] = k;
			}
		}
	}
	for (int l = 0; l < a; l++)
	{
		printf("%d ", dizi[l]);
	}
	printf("\n\n");
	free(dizi);
}
void rast(int a,int b)
{
	srand(time(NULL));
	int* dizirast = (int*)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++)
	{
		dizirast[i] = rand()%b;
	}
	for (int i = 0; i < a; i++)
	{
		printf("%d ", dizirast[i]);
	}
	printf("\n\n");
	free(dizirast);
}
void netop(int nsum) 
{
	printf("\nN e kadar olan tam sayilarin toplami: %d\n\n", (nsum*(nsum+1))/2);
}
void fibo(int fib)
{
	int a = 1, b = 1, c;
	printf("1 1 ");
	for (int k = 0; k < fib-2; k++)
	{
		c = a;
		a=a+b;
		b=c;
		printf("%d ", a);
	}
	printf("\n\n");
}
void fakt(int facto)
{
	int a=1;
	int b = facto;
	while (facto>0)
	{
		a *= facto;
		facto--;
	}
	printf("\n%d! = %d\n\n",b,a);
}
int main()
{
	int choose,trig,ex=1;
	float sayi1, sayi2;
	int ikilik, onluk, a, b, nsum, fib, facto;
	double tab, us,kkok,der;
	while (1)
	{
		printf("Lutfen islem seciniz;\n1-) Toplama\n2-) Cikarma\n3-) Carpma\n4-) Bolme\n5-) Ikilik tabana donusturme(0-1024)\n6-) Onluk tabana donusturme(0-1(^9))\n7-) Deger siralama\n8-) Rastgele istenilen adet kadar sayi olusturma\n9-) N e kadar olan tam sayilarin toplami\n10-) Fibonacci serisinin ilk N elemani\n11-) Faktoriyel hesaplama\n12-) x^y hesaplama\n13-) Karekok hesaplama\n14-) Trigonometrik foksiyonlar\n15-)  Cikis\n\n");
		scanf_s("%d", &choose);
		switch (choose) {
			case 1:
				printf("\nLutfen ilk degeri girin:");
				scanf_s("%f", &sayi1);
				printf("\nLutfen ikinci degeri girin:");
				scanf_s("%f", &sayi2);
				sum(sayi1, sayi2);
				system("PAUSE");
				break;
			case 2:
				printf("\nLutfen ilk degeri girin:");
				scanf_s("%f", &sayi1);
				printf("\nLutfen ikinci degeri girin:");
				scanf_s("%f", &sayi2);
				sub(sayi1, sayi2);
				system("PAUSE");
				break;
			case 3:
				printf("\nLutfen ilk degeri girin:");
				scanf_s("%f", &sayi1);
				printf("\nLutfen ikinci degeri girin:");
				scanf_s("%f", &sayi2);
				multiply(sayi1, sayi2);
				system("PAUSE");
				break;
			case 4:
				printf("\nLutfen ilk degeri girin:");
				scanf_s("%f", &sayi1);
				printf("\nLutfen ikinci degeri girin:");
				scanf_s("%f", &sayi2);
				divide(sayi1, sayi2);
				system("PAUSE");
				break;
			case 5:
				printf("\nLutfen ikilik tabana donusturmek istediginiz degeri girin:");
				scanf_s("%d", &onluk);
				ikilikbul(onluk);
				system("PAUSE");
				break;
			case 6:
				printf("\nLutfen onluk tabana donusturmek istediginiz degeri girin:");
				scanf_s("%d", &ikilik);
				onlukbul(ikilik);
				system("PAUSE");
				break;
			case 7:
				printf("\nLutfen gireceginiz deger adedini girin:");
				scanf_s("%d", &a);
				sýralama(a);
				system("PAUSE");
				break;
			case 8:
				printf("\nLutfen kac rastgele sayi istediginizi girin:");
				scanf_s("%d", &a);
				printf("\nLutfen araligi girin (0-?):");
				scanf_s("%d", &b);
				rast(a,b);
				system("PAUSE");
				break;
			case 9:
				printf("\nLutfen N e kadar olan tam sayilarin toplami icin N degerini girin:");
				scanf_s("%d", &nsum);
				netop(nsum);
				system("PAUSE");
				break;
			case 10:
				printf("\nLutfen fibonacci serisinin kac elemanini istediginizi girin:");
				scanf_s("%d", &fib);
				fibo(fib);
				system("PAUSE");
				break;
			case 11:
				printf("\nLutfen faktoriyelini hesaplamak istediginiz degeri girin:");
				scanf_s("%d", &facto);
				fakt(facto);
				system("PAUSE");
				break;
			case 12:
				printf("\nLutfen taban degerini girin:");
				scanf_s("%lf", &tab);
				printf("\nLutfen us degerini girin:");
				scanf_s("%lf", &us);
				printf("\n%.2f^%.2f = %.2f\n", tab, us, pow(tab, us));
				system("PAUSE");
				break;
			case 13:
				printf("\nLutfen karekokunu almak istediginiz sayiyi girin:");
				scanf_s("%lf", &kkok);
				printf("%.2f\n",sqrt(kkok));
				system("PAUSE");
				break;
			case 14:
				while (ex!=8) {
					system("CLS");
					printf("Lutfen kullanmak istediginiz trigonometrik fonksiyonu secin;");
					printf("\n1-) Sin\n2-) Cos\n3-) Tan\n4-) Cot\n5-) Arcsin\n6-) Arccos\n7-) Arctan\n8-) Ust menu\n\n");
					scanf_s("%d", &trig);
					switch (trig)
					{
					case 1:
						printf("\nLutfen derece girin:");
						scanf_s("%lf", &der);
						printf("\nGirilen acinin sin degeri:%.2f\n", sin((der * 180) / pi));
						system("PAUSE");
						break;
					case 8:
						ex = 8;
						break;
					default:
						break;
					}
					
				}
				ex = 1;
				break;
			case 15:
				printf("\n");
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("\nLutfen belirtilen islemlerden seciniz !\n");
				system("PAUSE");
				break;
		}
		system("CLS");
	}
}