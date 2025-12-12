#include <unistd.h>
#include <stdlib.h>

int main()
{
	int i, j;
	char str[] = "a1b2c3C";
	char *dest;

	dest = malloc(sizeof(str));
	if (dest == NULL) {
		write(1, "Memory allocation failed!", 25);
		return 1;
	}
 
	j = 0;
	i = 0;
	while (str[i]) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			dest[j] = str[i];
			j++;
		}
		i++;
	}
	
	i = 0;
	while (str[i]) {
		if (str[i] >= '0' && str[i] <= '9')
		{
			dest[j] = str[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';

	i = 0;
	while (dest[i]) {
		str[i] = dest[i];
		i++;
	}
	str[i] = '\0';

	write(1, str, i);
	write(1, "\n", 1);

    free(dest);
    return 0;
}/*
#include <unistd.h>
#include <stdlib.h>

int lengthOfstr(char *str) {
    int len = 0;
    while(str[len])
        len++;
    return len;
}

void returnTostr(char *dest, char *str) {
    int i = 0;
    while (dest[i]) {
        str[i] = dest[i];
        i++;
    }
        str[i] = '\0';
}

void func(char *str, char *dest) {
    int j = 0;
    int i = 0;
    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            dest[j] = str[i];
            j++;
        }
        i++;
    }

    i = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            dest[j] = str[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
}

int main() {
    int len;
    char str[] = "a1b2c3C";
    char *dest;

    dest = malloc(sizeof(str));
    if (dest == NULL) {
        write(1, "Memory allocation failed!", 25);
        return 1;
    }

    func(str, dest);
    returnTostr(dest, str);
    len = lengthOfstr(str);

    write(1, str, len);
    write(1, "\n", 1);

    free(dest);
    return 0;
}*/
