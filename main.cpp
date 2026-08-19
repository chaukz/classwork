#include<iostream>
#include<algorithm>

void BubbleSort(int a[], int size);

int main() {
int a[] = {1341, 22, 34, 876, 745, 256, 67, 278, 89, 90};
int size = sizeof(a) / sizeof(a[0]); 

  BubbleSort(a, size);

for(int element : a) {
    std::cout << element << " ";
}
   std::cout << std::endl;

   return 0;
}   

void BubbleSort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
            }
        }
    }
}

