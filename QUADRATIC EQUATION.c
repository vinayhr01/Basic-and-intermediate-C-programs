#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,disc,root1,root2,real,imag;
    clrscr();
    printf("Entera,b,cvalues\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a==0)&&(b==0))
    {
        printf("Invalidcoefficients\n");
        printf("Tryagainwithvalidinputs!!!\n");
    }
    else if(a==0)
    {
        printf("Linearequation\n");
        root1=-c/b;
        printf("Root=%.3f",root1);
    }
    else
    {
        disc=b*b-4*a*c;
        if(disc==0)
    {
        printf("Therootsarerealandequal\n");
        root1=root2=-b/(2*a);
        printf("Root1=%.3f\nRoot2=%.3f",root1,root2);
    }
    else if(disc>0)
    {
        printf("Therootsarerealanddistinct\n");
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("Root1=%.3f\nRoot2=%.3f",root1,root2);
    }
    else
    {
        printf("Therootsarerealandimaginary\n");
        real=-b/(2*a);
        imag=sqrt(fabs(disc))/(2*a);
        printf("Root1=%.3f+i%.3f\n",real,imag);
        printf("Root2=%.3f-i%.3f\n",real,imag);
    }
}
return 0;
}