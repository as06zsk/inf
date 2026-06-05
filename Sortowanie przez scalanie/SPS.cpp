#include <iostream>

using namespace std;

void Merge(int* tab, int l, int m, int r) {
    int lSize = m - l + 1;
    int rSize = r - m;

    int* tabL = new int[lSize];
    int* tabR = new int[rSize];

    for (int x = 0; x < lSize; x++) {
        tabL[x] = tab[l + x];
    }

    for (int y = 0; y < rSize; y++) {
        tabR[y] = tab[m + 1 + y];
    }

    int indexL = 0;
    int indexR = 0;
    int currIndex = l;

    while (indexL < lSize && indexR < rSize) {
        if (tabL[indexL] <= tabR[indexR]) {
            tab[currIndex] = tabL[indexL++];
        } else {
            tab[currIndex] = tabR[indexR++];
        }
        currIndex++;
    }

    while (indexL < lSize) {
        tab[currIndex++] = tabL[indexL++];
    }

    while (indexR < rSize) {
        tab[currIndex++] = tabR[indexR++];
    }

    delete[] tabL;
    delete[] tabR;
}

void MergeSort(int* tab, int l, int r) {
    if (r > l) {
        int m = (l + r) / 2;
        MergeSort(tab, l, m);
        MergeSort(tab, m + 1, r);
        Merge(tab, l, m, r);
    }
}

int main() {
    int n = 8;
    cout << "Wprowadz liczbe elementow do posortowania: " << n << endl;

    int tab[] = {70, 36, 86, 71, 22, 71, 89, 77};

    cout << "\nTablica przed posortowaniem:" << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " | ";
    }
    cout << endl;

    cout << "\nRozpoczecie sortowania" << endl;
    MergeSort(tab, 0, n - 1);

    cout << "\nTablica po sortowaniu:" << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " | ";
    }
    cout << endl;

    return 0;
}