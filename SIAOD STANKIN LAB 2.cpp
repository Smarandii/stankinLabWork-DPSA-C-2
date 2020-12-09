int main() {
    int i = 0, counter = 0, str_lenght = 0, size = 4;
    bool result = false;
    char symbol = 0;
    char* str = (char*)calloc(4, sizeof(char));
    char* array;

    check_memory(str);

    for (i = 0; symbol != '\n'; i++, str_lenght++)
    {
        symbol = getchar();

        if (symbol != '\n')
        {
            if (i == size)
            {
                realloc(str, (size += 4) * sizeof(char));
            }
            str[i] = symbol;
        }
    }
    printf("Длинна строки: %d\n", str_lenght - 1);
    result = check_string(str, str_lenght);
    printf("1 - true, 0 - false\nresult: %d", result);
    free(str);
    return 0;
}