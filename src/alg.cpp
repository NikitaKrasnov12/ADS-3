// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int start = 0;
    int end = size - 1;
    int count = 0;
    while (start <= end) {
        int half = (start + end) / 2;
        int i = half;
        while (i >= start && arr[i] == value) {
            count++;
            i--;
        }
        while (i <= end && arr[i] == value) {
            count++;
            i++;
        }
        return count;
    }
    return 0;
}
