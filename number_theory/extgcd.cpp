#include<iostream>
using namespace std;

int extgcd(int a, int b, int &x, int &y) {
	int ret, tmp;
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	ret = extgcd(b, a % b, x, y);
	tmp = x;
	x = y;
	y = tmp - a / b * y;
	return ret;
}

int main() {
    int a=45,b=81,x,y;
    cout<<extgcd(a,b,x,y);
    cout<<"\n"<<x<<" "<<y;
}










int extgcd1(int m,int n,int &x,int &y)
{
    int x1,y1,x0,y0;
    x0=1; y0=0;
    x1=0; y1=1;
    x=0; y=1;
    int r=m%n;
    int q=(m-r)/n;
    while(r)
    {
        x=x0-q*x1; y=y0-q*y1;
        x0=x1; y0=y1;
        x1=x; y1=y;
        m=n; n=r; r=m%n;
        q=(m-r)/n;
    }
    return n;
}
