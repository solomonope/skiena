#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertion_sort(int items[], int n) {
    int j;
    for (int i = 1; i < n; i++){
        j = i;
        while(j > 0) {
            if (items[j] < items[j-1]) {
               swap(&items[j], &items[j-1]);
               j--;
            } else {
                break;
            }
        }
    }
}

void insertion_sort_clrs(int s[], int n) {
}
void insertion_sort_skiena(int s[], int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        j = i;
        while ( (j > 0) && (s[j] < s[j-1])) {
            swap(&s[j], &s[j-1]);
            j = j -1;
        }
    }
}


int main(int argc, char* argv[]) {

    int data[] ={1, 2, 4, 3, 5, 6, 8, 7};

    int l = sizeof(data) / sizeof(data[0]);
    printf("length = %d\n", l);
    insertion_sort(data, l);
    //insertion_sort_skiena(data, l);

    printf("not stuck in a loop\n");
    size_t length = sizeof(data) / sizeof(data[0]);

      printf("[");
      for (size_t i = 0; i < length; i++) {
          printf("%s%d", i == 0 ? "" : ", ", data[i]);
      }
      printf("]\n");
    printf("trying to write insertion sort from my head\n");
    return 0;
}
