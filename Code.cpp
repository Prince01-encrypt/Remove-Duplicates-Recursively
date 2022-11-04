void removeConsecutiveDuplicates(char *input) {
    if(input[0] == '\0') {
        return;
    }
    while(input[0] == input[1]) {
        for(int i = 1; input[i] != '\0'; i++) {
            input[i] = input[i + 1];
        }
    }
    removeConsecutiveDuplicates(input + 1);
}
