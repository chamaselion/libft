void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int c;

    c = 0;

    while (s[c] != '\0')
    {
        f(c, &s[c]);
        c++;
    }
}
