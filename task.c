void main(void) {
	int i, index,a[5];
	for ( i = 0; i < 5; i++)
		a[i] = rand() % 10;
    printf("Введите index элемент\n");
	scanf_s("%d", &index);
    if(index<0 || index>4)
        printf("Ошибка: индекс вне диапазона\n");
    
    else 
		printf("%d элемент  |  %d", index, a[index]);
}
