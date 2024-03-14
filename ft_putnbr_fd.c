#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;
    int checker;
    int t;
    int digits;
    int divisor;
    int i;

    checker = 0;
    if (n < 0)
    {
        checker = 1;
        write(fd, "-", 1);
        n = -n;
    }

    t = n;
    digits = 1;

    while (temp /= 10)
        digits++;

    while (digits > 0)
    {
        divisor = 1;
        i = 1;

        while (i < digits)
        {
            divisor *= 10;
            i++;
        }

        c = n / divisor + '0';
        write(fd, &c, 1);
        n %= divisor;
        digits--;
    }
}
