char *ft_strtrim(char const *s1, char const *set)
{
    char *r;

    int start;
    int end;
    t_size_t tlength;

    end = strlen(s1) - 1;
    start = 0;


    while (s1[start] != '\0' && strchr(set, s1[start]) != 0)
    {
        start++;   
    }
    
    if (s1[start] == '\0')
    {
        r = (char *)malloc(1);
        if (r == 0)
        {
            return (0);
        }
        *r = '\0';
        return (r);
    }
    
    while (end >= start && strchr(set, s1[end]) != 0)
    {
        end--;
    }
    tlength = end - start + 1;
    r = (char *)malloc(tlength + 1);
    if (r == 0)
    {
        return (0);
    }
    
    strncpy(r, s1 + start, tlength);
    r[tlength] = '\0';
    return (r);
}
