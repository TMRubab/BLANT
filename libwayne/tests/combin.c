#include "combin.h"
#include "longlong.h"

int main(void)
{
    int n,m;
#if 0
    printf("  ");
    for(m=1; m<79; m++)
	printf("%d", m%10);
    printf("\n");
    for(n=1; n<79; n++)
    {
	printf("%d ", n%10);
	for(m=1; m<79; m++)
	    printf("%c", CombinChoose(n,m) ? ' ' : '*'), fflush(stdout);
	printf("\n");
    }
#endif

    while(scanf("%d%d", &n, &m) == 2)
    {
	int ca[m], i, k = 0;
	COMBIN *c = CombinZeroth(n, m, ca);
	do
	{
	    printf("%d: ", k);
	    for(i=0; i<m; i++)
		printf("%d ", ca[i]);
	    printf("\n");
	} while(k++, CombinNext(c));

	for(i=0; i<m; i++)
	    printf("%d ", ca[i]);
	printf("\n");
    }
    return 0;
}
