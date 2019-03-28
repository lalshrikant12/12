#include<iostream>
using namespace std;
class calculateit
{int  a,b,op;
	void sum(int x,int y)
	{x=a ,y=b;
		return a+b;
	}
	void subtract(int x,int y)
	{x=a ,y=b;
		return a-b;
	}
void multiply(int x,int y)
{x=a ,y=b;
	return a*b;
}
void divide(int x,int y)
{x=a,y=b;
	return a/b;
}
};
int main()
{ sum(4,5);
	subtract(4,5);
	multiply(4,5);
	divide(4,5);
	return 1;
}
