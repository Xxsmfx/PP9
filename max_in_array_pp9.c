#include <stdio.h>

int maxInArray(int array[], int size){

	int max = array[0];
	for (int i = 1; i < size; i++){
		if (array[i] >max){
			max = array[i];
		}
	}
	return max;
}





int main() {
	int array []={3,6,1,9,4};
	int size = sizeof(array) /sizeof(array[0]);
	int max =  maxInArray(array, size);
	printf(" Das Maximum der Zahlenreihe ist: %d\n", max);
	return 0;



}
