int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

int count_word(char *str)
{
    int i = 0;
    int len = 0;
    int count = 0;
    len = ft_strlen(str);
    while(str[i] <= 32)
        i++;
    while(i < len)
    {
        if (str[i] != 32 && str[i + 1] == 32)
            count++;
        if (str[i + 1] == '\0' && str[i] != 32)
                count++;
        i++;
    }
    return(count);
}
