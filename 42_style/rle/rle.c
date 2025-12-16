#include<unistd.h>
void butnbr(int n)
{
    if(n > 10)
    {
        butnbr(n / 10);
    }
    char c = n % 10 + '0';
     write(1,&c,1);
}
int main(int argc,char **argv)
{
    if(argc == 2)
    {
        
        int count;
        int i = 0;
        write(1,&argv[1][i],1);
        while(argv[1][i])
        {
             count = 1;
            while(argv[1][i] == argv[1][i+1])
                {
                        count++;     
                        i++;
                }
               i++;
                butnbr(count);
                write(1,&argv[1][i],1);
        }
    }  
    write(1,"\n",1);
}
