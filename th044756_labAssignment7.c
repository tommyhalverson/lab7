#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//swapping function
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//bubble sort function
void bubbleSort(int* pData, int n)
{
    int swaps = 0;
	//loops through array n-1 times
	for(int i = 0; i < n - 1; i++){
		//loops through unsorted part of array
		for(int j = 0; j < n - i - 1; j++){
			//if next element in array is larger than current element, swap data
			if(pData[j] > pData[j + 1]){
                
				swap(&pData[j], &pData[j + 1]);
                //increment swaps with each swap in array
                swaps++;
               
			}
		}
        //prints the pass and number of swaps
        printf("Pass: %d    Swaps: %d\n", i, swaps);
        //reset swap counter for next pass
        swaps = 0;
	}
	
}

int main(){
    int array[9] ={97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(array, 9);
    return 0;

}