#include <stdlib.h>

char *ft_itoa(int n) {
    int length = 1;
    int temp = n;
    while (temp = temp / 10)
        length++;
    int sign = 1;
    if (n < 0)
    {
        sign = -1;
        length++;
    }

    char *r = (char *)malloc((length + 1) * sizeof(char));
    
      if (n == 0)
    {
        char *r = (char *)malloc(2 * sizeof(char));
        if (r == NULL)
            return NULL;
        r[0] = '0';
        r[1] = '\0';
        return r;
    }
    
    int i = length - 1;
    
    while (n != 0)
    {
        r[i] = '0' + (sign * (n % 10));
        n = n / 10;
        i--;
    }
    
    if (sign == -1)
        r[0] = '-';

    
    r[length] = '\0';

    return (r);
}
