#include <stdio.h>
#include <conio.h>


int Valor_absoluto(int n)
{
	int c,result;
	c=1;
	
	for(c=1;c>=10;c++);
	{
		if(n>0)
		{
			result=n;
			printf("O número é: %d",n);
		}
		else
		{
			result= n*-1;
		}
		
	}
	
	return result;
}
int main()
{
	int n;
	printf("Digite o valor");
	scanf("%d",n);
	
	Valor_absoluto(n);
	
	
	
}
