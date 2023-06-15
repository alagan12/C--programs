#include <stdio.h>

int main() {
int rows, columns;


printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &columns);


int arr[rows][columns];


for (int i = 0; i < rows; i++) {
for (int j = 0; j < columns; j++) {

printf("Enter the value for arr[%d][%d]: ", i, j);
scanf("%d", &arr[i][j]);
}
}


printf("The elements of the array are: \n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < columns; j++) {
printf("%d ", arr[i][j]);
}
printf("\n");
}

return 0;
}