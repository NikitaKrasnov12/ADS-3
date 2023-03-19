// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int start = 0;
    int end = size - 1;
    int count = 0;
    while (start <= end) {
        int half = (start + end) / 2;
        if (arr[half] == value) {
            count++;
            int i = half - 1;
            while (i >= start && arr[i] == value) {
                count++;
                i--;
            }
            int k = half + 1;
            while (k <= end && arr[k] == value) {
                count++;
                k++;
            }
            return count;
        } else if (arr[half] < value) {
            start = half + 1;
        } else {
            end = half - 1;
        }
    }
    return 0;
}
