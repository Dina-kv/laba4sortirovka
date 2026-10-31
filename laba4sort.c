#include <stdio.h>
#include <time.h>
#include <stdbool.h>

long long countbubble = 0;
long long countinsertion = 0;
long long countmerge = 0;


	void BubbleSort(int* arr, int n) {
		countbabble = 0;
		bool swapped;

		for (i = 0; i < n - 1; i++) {
        	swapped = false;
        		for (j = 0; j < n - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
                			temp = arr[j];
                			arr[j] = arr[j + 1];
                			arr[j + 1] = temp;
                			swapped = true;
            			}
        		}
			if (!swapped) break;
		}
	}



int main() {
	clock_t start = clock();
	BubbleSort(arrbubble, size);
	clock_t end = clock();
	double sbubble = (double)(end - start)/CLOCKS_PER_SEC;
	printf("Время выполнения: %f секунд\n", seconds);

	clock_t start = clock();
        InsertionSort(arrinsertion, size);
        clock_t end = clock();
        double sinsertion = (double)(end - start)/CLOCKS_PER_SEC;
        printf("Время выполнения: %f секунд\n", seconds);

	clock_t start = clock();
        MergeSort(arrmerge, size);
        clock_t end = clock();
        double smerge = (double)(end - start)/CLOCKS_PER_SEC;
        printf("Время выполнения: %f секунд\n", seconds);

	free(original);
	free(arrbubble);
	free(arrinsertion);
	free(arrmerge);
}
	return 0;
}

