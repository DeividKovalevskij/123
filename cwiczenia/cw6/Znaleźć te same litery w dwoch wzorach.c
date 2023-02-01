function commonLetters(pattern1, pattern2) {
    char commonLetters[100]
    int commonIndex = 0
    for(int i = 0; i < strlen(pattern1); i++) {
        for(int j = 0; j < strlen(pattern2); j++) {
            if(pattern1[i] == pattern2[j] && !isInArray(commonLetters, commonIndex, pattern1[i])) {
                commonLetters[commonIndex] = pattern1[i]
                commonIndex++
                break
            }
        }
    }
    return commonLetters
}

function isInArray(array, size, value) {
    for(int i = 0; i < size; i++) {
        if(array[i] == value) {
            return true
        }
    }
    return false
}
