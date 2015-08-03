/* author :: atyam*/
#include <iostream>
#include <cstdio>
using namespace std;

int x1,y1,x2,y2,x3,y3,x4,y4,l;

int ab(int x)
{
	if(x<0)
		return -x ;
	return x ;
}

int main()
{
	cin >> x1 >> y1 >> x2 >> y2 ;
	if(x1==x2)
	{
		l=ab(y2-y1);
		x3=x1+l ;
		x4=x1+l;
		y3=y1; 
		y4=y2;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 ;
	}
	else if(y1==y2)
	{
		l=ab(x2-x1);
		y3=y1+l ;
		y4=y1+l;
		x3=x1; 
		x4=x2;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 ;
	}
	else if(ab(x2-x1)!=ab(y2-y1))
	{
		printf("-1");
	}
	else 
		cout << x1 <<" " << y2 << " " << x2 << " " << y1 ; 
		//printf("%intd %intd %intd %intd",x1,y2,x2,y1);
	return 0;
}
