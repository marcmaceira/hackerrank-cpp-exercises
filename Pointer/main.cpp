#include <stdio.h>
#include <cstdlib>
void update(int *a,int *b) {
	int aa = *a;
	*a = aa + *b;
	*b = abs(aa - *b);
	/*
	 For absolute value without <cstdlib>:
	 if (*b < 0)
	 	*b *= -1;
	 */
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	
	return 0;
}
