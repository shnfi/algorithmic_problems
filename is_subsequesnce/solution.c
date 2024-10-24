bool isSubsequence(char* s, char* t) {
    int j = 0;
    bool successfull = false;

    for (int i = 0; i < strlen(t); i++)
    {
        if (t[i] == s[j])
        {
            j++;
        }
    }

    if (j == strlen(s)) successfull = true;

    return successfull;
}
