#include <stdio.h>
#include  <math.h>
void tri();
void rect();
void cir();
void sq();
int ma,b,c;
float a;
void main()
{
printf("\n1. Triangle\n2. Rectangle\n3. Circle\n4. Square\n");	
scanf("%d",&ma);
switch(ma)
{
	case 1 : tri(); break;
	case 2 : rect(); break;
	case 3 : cir(); break;
	case 4 : sq(); break;
	default: printf("\nINVALID Response !\n"); main();
}
}

//Area of Triangle >> void tri()
void tri()
{
	float ba,h;
TRI:
	printf("\n1. Ar of Triangle using BAse & height. \n2. Using Heron's Formula.\n");
	scanf("%d",&b);
if(b==1)
{	
TRI1:
	printf("\nEnter the base and Height of Triangle: ");
	scanf("%f %f",&ba,&h);
	a=(ba*h)/2;
	printf("%f\n",a);
}
else
if(b==2)
{	
	float a1,b1,c1,s=0;	
TRI2:
	printf("\nEnter three sides of triangle:");
	scanf("%f %f %f",&a1,&b1,&c1);
	s=(a1+b1+c1)/2;
	a=sqrt(s*(s-a1)*(s-b1)*(s-c1));
	printf("%f\n",a);
}
else{
	printf("\nINVALID Response !");
	tri();
	}
	
	printf("\n1. MAIN\n2. Previous Menu\n3. Re-Enter Values\n4. EXIT\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: main(); break;
		case 2: goto TRI; break;
		case 3: if(b==1)
				goto TRI1;
				else
				goto TRI2;
				break;
		case 4: printf("\nPress any Key to EXIT.");break;
		default: printf("\nINVALID Response !");
	}
	
}

//Area of Rectangle >> void rect()
void rect()
{
	float l,br,d;
RECT:
	printf("\n1. Ar of Rectangle using length & breadth.\n2. Using diagonal.\n");
	scanf("%d",&b);
if(b==1)
{
	RECT1:
	printf("\nEnter the length and breadth of Rectangle: ");
	scanf("%f %f",&l,&br);
	a=(l*br);
	printf("%f",a);
}
else
if(b==2)
{
	RECT2:
	printf("\nEnter the diagonal of the rectangle:");
	scanf("%f",&d);
	a=(d*d)/2;
	printf("%f",a);
}
else{
	printf("\nINVALID Response !");
	goto RECT;
    }
		
	printf("\n1. MAIN\n2. Previous Menu\n3. Re-Enter Values\n4. EXIT\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: main(); break;
		case 2: goto RECT; break;
		case 3: if(b==1)
				goto RECT1;
				else
				goto RECT2;
				break;
		case 4: printf("\nPress any Key to EXIT.");break;
		default: printf("\nINVALID Response !");
	}

}

//Area of Circle >> void cir()
void cir()
{
float r, cir;
CIR:
	printf("\n1.Ar of Circle using radius.\n2. Using perimeter.\n");
	scanf("%d",&b);

if(b==1)
{
	CIR1:
	printf("\nEnter radius of the circle: ");
	scanf("%f",&r);
	a=(3.14)*r*r;
	printf("%f",a);
}
else
if(b==2)
{
	CIR2:
	printf("\nEnter the Circumference of the circle:");
	scanf("%f",&cir);
	r=(cir/(2*3.14));
	a=(r*r*3.14);
	printf("%f",a);
}
else{
	printf("\nINVALID Response !");
	goto CIR;
	}
	printf("\n1. MAIN\n2. Previous Menu\n3. Re-Enter Values\n4. EXIT\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: main(); break;
		case 2: goto CIR; break;
		case 3: if(b==1)
				goto CIR1;
				else
				goto CIR2;
				break;
		case 4: printf("\nPress any Key to EXIT.");break;
		default: printf("\nINVALID Response !");
	}	
}

//Area of Square >> void sq()
void sq()
{
float di,x;
SQ:
	printf("\n1. Ar of Square using it's sides.\n2. Using Diagonal.\n");
	scanf("%d",&b);
if(b==1)
{
SQ1:
	printf("\nEnter the side of square : ");
	scanf("%f",&x);
	a=(x*x);
	printf("%f",a);
}
else
if(b==2)
{
SQ2:
	printf("\nEnter the diagonal of square:");
	scanf("%f",&di);
	a=(di*di)/2;
	printf("%f",a);	
}
else{
	printf("\nINVALID Response !");
	goto SQ;
	}
	
	printf("\n1. MAIN\n2. Previous Menu\n3. Re-Enter Values\n4. EXIT\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: main(); break;
		case 2: goto SQ; break;
		case 3: if(b==1)
				goto SQ1;
				else
				goto SQ2;
				break;
		case 4: printf("\nPress any Key to EXIT.");break;
		default: printf("\nINVALID Response !");
	}
}
