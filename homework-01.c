#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i, max, maxend, *num;
	printf("���������ݸ���(����1000)��\n");
	scanf("%d", &n);
	num = (int *)malloc(n * sizeof(int));
	printf("���������ݣ��Կո������\n");
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
	max = num[0];
	maxend = num[0];
	for(i = 1; i < n; i++){
		maxend = maxend+num[i] > num[i] ? maxend+num[i] : num[i];
		max = max > maxend? max : maxend;
	}
	printf("%d\n", max);
}
