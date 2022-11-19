#include<stdio.h>
#include<conio.h>
main()
{
	int product_1, product_2, product_3 ,product_4,total,sale,discount,money,change;
	printf("Enter product_1  ");
	scanf("%d",&product_1 );
	printf("Enter product_2  ");
	scanf("%d",&product_2 );
	printf("Enter product_3  ");
	scanf("%d",&product_3 );
	printf("Enter product_4  ");
	scanf("%d",&product_4 );
	total=product_1+product_2+product_3 +product_4;
	printf("_________________________________________\n");
	printf("All total = %d",total);
	if(total >5000)
	{
	sale = (total*7)/100;
	printf("\n You get a discount 7_%% ");
	}else if((total >=3000)&&(total <=4999))
	{
	sale = (total*5)/100;
	printf("\n You get a discount 5_%% ");
	}else if((total >=1000)&&(total <=2999))
	{
	sale = (total*3)/100;
	printf("\n You get a discount 3_%% ");
	}else if((total >=0)&&(total <=999))
	{
	sale = (total*0)/100;
	printf("\n You get a discount 0_%% ");	
	}
	discount = total-sale;
	printf("\ndiscount=%d",discount  );
	printf("\nEntermoney= ");
	scanf("%d",&money);
	change=money-discount;
	printf("change=%d",change);
	getch();
}
