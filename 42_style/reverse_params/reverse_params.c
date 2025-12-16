#include <unistd.h>

int main (int argc, char **argv) {
	int j;

        if (argc > 4 || argc < 2) {
         
	 	write(1, "\n", 1);
                return 1;
        }

        while(argc > 1) {
         	
	 	j = 0;
                while (argv[argc - 1][j]) {
                       
		       	write(1, &argv[argc - 1][j], 1);
                        j++;
                }
		write(1, "\n", 1);
                argc--;
        }

        return 0;
}
