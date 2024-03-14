char **ft_split(char const *s, char c)
{
    char *foundat;
    unsigned long long l1;
    unsigned long long l2;
    unsigned long long counter;
    char **r;

    counter = 0;
    foundat = strchr(s, c);

    if (foundat == 0)
    {
        return (0);
    }
    r = (char **)malloc(sizeof(char*) * 2);
    if (r == 0)
    {
        return 0;
    }
        l1 = foundat - s + 1;
        l2 = strlen(s) - l1 + 1;
      r[0] = (char*)malloc(sizeof(char) * (l1 + 1));
      r[1] = (char*)malloc(sizeof(char) * (l2 + 1));
    if (r[0] == 0 || r[1] == 0)
    {
        free(r[0]);
        free(r[1]);
        free(r);
        return (0);
    }
    
    while (counter < l1)
      {
        r[0][counter] = s[counter];
        counter++;
      }
      r[0][counter] = '\0';
      counter = 0;
      while (counter < l2)
      {
        r[1][counter + 1] = s[counter + l1];
        counter++;
      }
        r[1][counter + l1 - 1] = '\0';
    return (r)
}