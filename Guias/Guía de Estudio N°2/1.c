#include <stdio.h>

void seleccionSort(int arr[], int n) {
    int i, j, min_idx;
    
    // Recorre el arreglo
    for (i = 0; i < n - 1; i++) {
        // Encuentra el elemento mínimo en el subarreglo no ordenado
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Intercambia el elemento mínimo encontrado con el primer elemento no ordenado
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int vector[] = {64, 34, 25, 12, 22};
    int n = sizeof(vector) / sizeof(vector[0]);
    
    printf("Vector original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    
    seleccionSort(vector, n);
    
    printf("\nVector ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    
    return 0;
}
