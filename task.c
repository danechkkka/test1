void main(void) {
	int i, index,a[5];
	for ( i = 0; i < 5; i++)
		a[i] = rand() % 10;
	printf("Введите index элемент\n");
	scanf_s("%d", &index);
	printf("%d элемент  |  %d", index, a[index]);
}
