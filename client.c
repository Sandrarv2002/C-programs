#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	server_up=0;
	client_up=1;
	int fd=shm_open("shmfile",O_CREAT|O_RDWR);
	ftruncate(fd,sizeof(server));
	struct server *s=mmap(NULL,sizeof(*(s)),PROT_READ,PROT_WRITE,MAP_SHARED,fd,0);
	if(server_up==0&&client_up==1)
	{
		printf("\n entre the message\n");
		gets(msg);
		printf("\n user 2:%s",msg);
		read_write=0;
	}
	else
	{
		printf("\n user 1:%s",msg);
	}
	return 0;
}
