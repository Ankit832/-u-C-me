#include<iostream.h>
#include<conio.h>
 
class complex
{
              int a,b;
    public:
              void getvalue()
              {
                 cout<<"ENTER THE COMPLEX NO A AND B:";
                 cin>>a>>b;
              }
              complex operator+(complex ob)
              {
                            complex t;
                            t.a=a+ob.a;
                            t.b=b+ob.b;
                            return(t);
              }
              complex operator-(complex ob)
              {
                            complex t;
                            t.a=a-ob.a;
                            t.b=b-ob.b;
                            return(t);
              }
              void display()
              {
                            cout<<a<<"+"<<b<<"i"<<"\n";
              }
};

void main()
{
   clrscr();
   complex obj1,obj2,result,result1;
 
   obj1.getvalue();
   obj2.getvalue();
 
   result = obj1+obj2;
   result1=obj1-obj2;
 
   cout<<"INPUT VALUES:\n";
   obj1.display();
   obj2.display();
  
   cout<<"RESULT:";
   result.display();
  result1.display();
  
   getch();
}