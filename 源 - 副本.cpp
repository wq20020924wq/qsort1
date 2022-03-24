#include<stdio.h>
#include<stdlib.h>
struct mean
{
	char name[30];
	int age;
};

int comp(const void* p1, const void* p2)
{
	return (((struct mean*)p1)->age - ((struct mean*)p2)->age);
}
int com(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
int main()
{

	int i;
	int arr[9] = { 3,51,45,64,59,16,86,15,94 };
	struct mean s[4] = {{"zhangsan",15},{"lisi",45},{"wanger",17}, {"mazi",97}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int se = sizeof(s) / sizeof(s[0]);
	qsort(arr, sz, sizeof(arr[0]), com);
	qsort(s, se, sizeof(s[0]), comp);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int j = 0;
	mean* p = s;
	for (j = 0; j < se; j++)
	{
		printf("%s%dËê ", p->name, p->age);
		p++;
	}
	return 0;
}