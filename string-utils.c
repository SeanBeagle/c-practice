void reverse(char* input) {
    int length = strlen(input);
    for (int i = 0; i < length/2; ++i) {
        char a = input[i];
        input[i] = input[length-i-1];
        input[length-1-i] = a;
    }
}
