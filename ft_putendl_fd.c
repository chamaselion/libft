void ft_putendl_fd(char *s, int fd)
{
int c;

c = 0;

while (s[c] != '\0')
{
    write(fd, &s[c], 1);
    c++;
}
write(fd, "\n", 1);
}
