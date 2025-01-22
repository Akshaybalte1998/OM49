#include <stdio.h>
namespace NDB
{
	int connection=8080;
}
namespace NSC
{
	int connection=7500;
	int num1=11;
	int num2=12;
	int num3=13;
	int num4=14;
	int num5=15;
	int num6=16;
}
using namespace NSC;
int main()
{
	printf("connection DB=%d",NDB::connection);
	printf("\nconnection NSC=%d",connection);
	printf("\n num1=%d",num1);
}
