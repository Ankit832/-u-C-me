#include<iostream.h>
#include<conio.h>
#include<math.h>
float fx(float x,float y)
{return (2*y+3*exp(x));}
float f1x(float x,float y)
{return (2*(fx(x,y))+3*exp(x)); }
float f2x(float x,float y)
{return (2*(f1x(x,y))+3*exp(x)); }
float f3x(float x,float y)
{return (2*(f2x(x,y))+3*exp(x)); }
int fact(int n)
{ int pro=1,i;
for(i=n;i>=1;i--)
{pro=pro*i;
}
return pro;
}
void main()
{clrscr();
float x0,y0,x,y;
cout<<"Enter the value of x0 \n";
cin>>x0;
cout<<"Enter the value of y0 \n";
cin>>y0;
cout<<"Enter the value at which you want the solution \n";
cin>>x;
y=fx(x0,y0)+(x-x0)*f1x(x0,y0)+((pow((x-x0),2))/(fact(2)))*f2x(x0,y0)+((pow((x-x0),3))/(fact(3)))*f3x(x0,y0);
cout<<"The solution of the differential equation \nusing taylor's series method is "<<y;
cout<<"\n\n\n\t\t\tAnkit Singh";
cout<<"\n\t\t\tCSE-B";
cout<<"\n\t\t\t4th Sem";
cout<<"\n\t\t\t63";
cout<<"\n\t\t\t06620802714";
getch();
}