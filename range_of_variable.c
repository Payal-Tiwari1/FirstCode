#include<stdio.h>

int main()
{
	int i,j;
	char ch,ch_o;

	/*i = 0;
	while(1)
	{
		j = i + 1;
		if (i > j)
		{
			break;
		}
		i = j;

	}
	
	printf("i = %d\n",i);

		i = 0;
		while(1)
		{
			j = i - 1;
			if(i < j)
			{
				break;
			}
			i = j;
		}

	printf("i = %d\n",i);*/

	ch = 1;
		while(1)
		{
			ch_o = ch + 1;
			if(ch > ch_o)
			{
				break;
			}
			ch = ch_o;
		}
	printf("ch = %d\n",ch);

	ch = 0;
	while(1)
	{
		ch_o = ch - 1;
		if(ch < ch_o)
		{
			break;
		}
		ch = ch_o;
	}
	printf("ch = %d\n",ch);
	return 0;
}
