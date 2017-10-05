/* Tugas 2 Metnum

IRMAN NUR ALIM 3411151091
RAHADIAN OGI NUGRAHA 3411151108
SIE - B

*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define nMax 100

int main()
	{
  	 	int x[nMax+1],y[nMax+1],b;
  	 	int jumx,jumy,sigmax=0,sigmay=0,skuadratx=0,skuadraty=0,sigmaxy=0,sigmaerror=0,i,n;
  	 	int kuadx[nMax+1],kuady[nMax+1],xy[nMax+1];
  	 	float m=0,c,error[nMax+1],fx[nMax+1];
 
  		printf("=======================================================================\n");
  		printf("|                           TUGAS 2 METNUM                             |\n");
  		printf("=======================================================================\n\n");
	
 		printf ("\n\nMasukkan banyak N : "); scanf ("%d", &n);
		printf ("\n\n");

   		for(i=1;i<=n;i++)
		{
    		printf("masukan nilai x [%d]: ",i); scanf("%d",&jumx);
    		x[i]=jumx;
    		kuadx[i]=pow(x[i], 2);
			sigmax=sigmax + x[i];
			skuadratx=skuadratx + kuadx[i];
			printf("masukan nilai y [%d]: ",i); scanf("%d",&jumy);
    		y[i]=jumy;
			kuady[i]=pow(y[i], 2);
			sigmay=sigmay + y[i];
    		skuadraty=skuadraty + kuady[i];
		}

		xy[i]=x[i]*y[i];
		sigmaxy=sigmaxy + xy[i];
       	m=((n*sigmaxy)-(sigmax*sigmay))/((n*skuadratx)-pow(sigmax,2));
  	   	printf("\nNilai m = %f ", m);

	 	c=((sigmay*skuadratx)-(sigmax*sigmaxy))/((n*skuadratx)-pow(sigmax,2));
  		printf("\nNilai c = %f \n", c);

  		for (i=1;i<=n;i++)
		{
			fx[i]=((m*x[i])+c);  
		}
		
		for (i=1;i<=n;i++)
		{
			error[i]=(fx[i]-y[i]);
		}
  		printf("----------------------------------------------------------------------\n");
		printf("X\tY\tX Kuadrat\tY Kuadrat\tXY\tfx\tError\n");
		printf("----------------------------------------------------------------------\n");
		for(i=1;i<=n;i++)
		{
			printf("%d\t%d\t%d\t\t%d\t\t%d\t%.2f\t%.2f\n",x[i],y[i],kuadx[i],kuady[i],xy[i],fx[i],error[i]);
		} 
		printf("----------------------------------------------------------------------\n");
		printf("%d\t%d\t%d\t\t%d\t\t%d\t\t%d\n",sigmax,sigmay,skuadratx,skuadraty,sigmaxy);
 		for (i=1;i<=n;i++)
		{
 			sigmaerror=(sigmaerror+error[i]/n);
		}
		getch();
		return 0;
	}
