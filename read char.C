#include <stdio.h>

int main(void) {
	char  ch[20];
	int i=0,count=0;
	scanf("%s",ch);
	while(ch[i]!='\0')
	{
	count++;
	i++;
	}
	printf("%d",count);
	return 0;
}


