#include "game.h"

static int mx_strlen(const char *s) {
	int i = 0;

	for (i = 0; s[i]; i++);
	return i;
}



static char *mx_strcpy(char *dst, const char *src) {
	int i = 0;

	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}

static char *mx_strnew(const int size) {
	int i = 0;
	char *str = (char *)malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return NULL;
	while (i < size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return str;
}

static char *mx_strdup(const char *str) {
	char *strnew = mx_strnew(mx_strlen(str));

	return  mx_strcpy(strnew, str);
}

char *mx_itoa(int number) {
    char *str;
    int n = 0;
    int sign = 1;
	char *s;

    if (number == -2147483648 || number == 0)
        return mx_strdup(number ? "-2147483648" : "0");
    if (number < 0)
    {
        number *= -1;
        sign = -1;
        n++;
    }
    for (int temp = number; temp >= 1; n++)
        temp /= 10;
    str = mx_strnew(n);
    for (int i = 1; i <= n; i++, number /= 10)
        str[n - i] = number % 10 + '0';
    if (sign < 0)
        str[0] = '-';
	s = str;
	free((void *)str);
    return s;
}
