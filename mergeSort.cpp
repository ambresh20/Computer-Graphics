#include <iostream>

class NaturalMergeSorter {
public:
    int GetSortedRunLength(int* array, int arrayLength, int startIndex) {
        if (startIndex < 0 || startIndex >= arrayLength) {
            return 0;
        }

        int runLength = 1;

        for (int i = startIndex + 1; i < arrayLength; i++) {
            if (array[i] >= array[i - 1]) {
                runLength++;
            } else {
                break;
            }
        }

        return runLength;
    }

    void NaturalMergeSort(int* array, int arrayLength) {
        int i = 0;

        while (true) {
            int firstRunLength = GetSortedRunLength(array, arrayLength, i);

            if (firstRunLength == 0) {
                break;
            }

            if (i + firstRunLength == arrayLength) {
                i = 0;
                continue;
            }

            int secondRunLength = GetSortedRunLength(array, arrayLength, i + firstRunLength);

            Merge(array, i, firstRunLength, secondRunLength);

            i = (i + secondRunLength == arrayLength) ? 0 : i + secondRunLength;
        }
    }

    void Merge(int* array, int startIndex, int firstRunLength, int secondRunLength) {
        int merged[firstRunLength + secondRunLength];
        int i = startIndex;
        int j = startIndex + firstRunLength;
        int k = 0;

        while (i < startIndex + firstRunLength && j < startIndex + firstRunLength + secondRunLength) {
            if (array[i] < array[j]) {
                merged[k++] = array[i++];
            } else {
                merged[k++] = array[j++];
            }
        }

        while (i < startIndex + firstRunLength) {
            merged[k++] = array[i++];
        }

        while (j < startIndex + firstRunLength + secondRunLength) {
            merged[k++] = array[j++];
        }

        for (int x = 0; x < k; x++) {
            array[startIndex + x] = merged[x];
        }
    }
};

int main() {
    int arr[] = {34, 12, 9, 89, 45, 67, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    NaturalMergeSorter sorter;
    sorter.NaturalMergeSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
