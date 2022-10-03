#include <iostream>
int const n = 10;


void quik (int *mas, int size) {
    int i = 0;
    int j = size - 1;
    int sr = mas[size / 2];
    do {
        while (mas[i] < sr) {
            i++;
        }
        while (mas[j] > sr) {
            j--;
        }
        if (i <= j) {
            std::swap(mas[i], mas[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (j > 0) {   
        quik(mas, j + 1);
    }
    if (i < size) {
        quik(&mas[i], size - i);
    }
}




int main()
{
    int mas[n];
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 11;
    }
    for (int i = 0; i < n; i++) {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;

    quik(mas, n);

    for (int i = 0; i < n; i++) {
        std::cout << mas[i] << " ";
    }
}

