#include <stdio.h>
int main()
{
	int d1, d2, m1, m2, y1, y2;
	printf("Enter a date mm/dd/yy2:" );
	scanf("%d/%d/%d", &m1, &d1, &y1);
	
	while (9){
	printf("Enter another date mm/dd/yy:" );
	scanf("%d/%d/%d", &m2, &d2, &y2);
	
	if (m2==0 && d2==0 && y2 ==0){
	break;
	}
	
	else if (y1>y2 || (y1==y2 && m1>m2) || (y1==y2 && m1==m2 && d1>d2))
	d1=d2;
	m1=m2;
	y1=y2;
	
	        }
	printf("The erliest is %d/%d/%.2d", m1, d1, y1);
	         
return 0;
}
