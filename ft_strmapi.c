char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
char *r;
unsigned int c;
unsigned int l;

c = 0;
l = strlen(s);
r = (char *)malloc(sizeof(char) * (l + 1));

if(r == 0)
    return (0);
while (c < l)
{
    r[c] = f(c, s[c]);
    c++;
}    
r[c] = '\0';
return (r);
}
