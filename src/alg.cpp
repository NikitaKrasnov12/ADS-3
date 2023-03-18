// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int start = 0;
    int end = size - 1;
    int count = 0;
    while (start <= end) {
        int half = (start + end) / 2;
        int i = half;
        if (i >= start && arr[i] == value){
            while (true) {
                count++;
                i--;
            }
        } else if (i <= end && arr[i] == value) {
            while (true) {
                count++;
                i++;
            }
        }
    }
    if (count > 0) {
        return count;
    } else {
        return 0;
    }
}
