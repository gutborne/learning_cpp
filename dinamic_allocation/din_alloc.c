#include <stdio.h>

int main(){
    //In c the compiler allows 'allocate' memory the way bellow, but it's dangerous
    //regarding the stack is much more less than heap
    int num_elements = 0;
    printf("how many elements? \n");
    scanf("%d", &num_elements);
    int arr[num_elements];
    for (int i = 0; i < num_elements; i++)
        arr[i] = i;
    //for (int i = 0; i < num_elements; i++)
        //printf("%d ", arr[i]);
    return 0;
}
