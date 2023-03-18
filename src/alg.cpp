// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int start = 0;
    int count = 0;
    while (start <= size) {
        int half = (start + size) / 2;
        int i = half;
        if(i >= start && arr[i] == value){
            while (true) {
                count++;
                i--;
            }
        } else if (i <= start && arr[i] == value) {
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
