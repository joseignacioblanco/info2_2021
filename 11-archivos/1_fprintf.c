#include<fcntl.h>
#include<unistd.h>

int main(void)
{

int fd;

fd = open("mondong1.txt", O_WRONLY);


write(fd,"hola, mundongrefero\n",20);


close(fd);

return 0;
}

