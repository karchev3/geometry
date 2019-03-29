#include <math.h>
#include <stdio.h>
#include<string.h>
#define Pi 3.14

struct point {
	int x;
	int y;
}p1;

float perimetrround(int r)
{
	return (Pi * 2 * r);
}

float arearound(int r)
{
	return Pi * pow(r,2);
}

int main()
{
	int r,len;
	char str[10] = {0};
	scanf("%d %d", &p1.x, &p1.y);
	scanf("%s", str);
	len=strlen(str);
	scanf("%d", &r);
	printf("\n %s( %d %d )", str, p1.x, p1.y);
	printf("\n perimetr = %2.2f", perimetrround(r));
	printf("\n area = %2.2f", arearound(r));
    return 0;
}
