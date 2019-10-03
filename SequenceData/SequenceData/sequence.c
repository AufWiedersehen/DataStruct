#include "stdio.h"
#include "sequen.h"
int main()
{
	printf("study data_stucture");

	return 0;
}

int GetElem(struct SqList L, int i, int * e) {

	if (L.length == 0 || i < 1 || L.length < i)
	{
		return 0;
	}
	*e = L.data[i - 1];
	return 1;
}

int ListInsert(struct SqList* L, int i, int e) {

	int k;
	if (L->length == MAXSIZE)
		return 0;
	if (i<1 || i>L->length)
		return 0;
	if (i <= L->length)
	{
		for (k = L->length - 1; k >= i - 1; k--)
		{
			L->data[k + 1] = L->data[k];
		}
	}

	L->data[i - 1] = e;
	L->length++;

	return 1;
}