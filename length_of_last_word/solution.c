int lengthOfLastWord(char* s) {
    int len = 0, i = strlen(s);

    while (i > 0)
    {
        i--;

        if (s[i] != ' ') len++;
        else if (len != 0) break;
    }

    return len;
}
