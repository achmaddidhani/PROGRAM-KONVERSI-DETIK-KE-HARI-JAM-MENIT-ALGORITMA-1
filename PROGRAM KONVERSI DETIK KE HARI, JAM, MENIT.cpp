#include<stdio.h>
#include<conio.h>
int main()
{

long detik,hd,jd,md ;
printf("					PROGRAM KONVERSI DETIK KE HARI, JAM, MENIT\n");
printf("						BY ACHMAD DIDHANI NIM 311810294\n");
printf("					INSITUT PELITA BANGSA. TEKHNIK INFORMATIKA\n\n");
printf("masukan hari : "); scanf("%i",&hd);
detik=hd*24*60*60;
printf("hasilnya adalah = %i\n",detik);
printf("masukan jam : "); scanf("%i",&jd);
detik=jd*60*60;
printf("hasilnya adalah = %i\n",detik);
printf("masukan menit : "); scanf("%i",&md);
detik=md*60;
printf("satu hari adalah = %i\n",detik);
getch();
}
