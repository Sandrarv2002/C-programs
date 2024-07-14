#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#define size 128
struct server
{
	int server_up;
	int client_up;
	int read_write;
	char msg[size];
};
int main()
{
	server_up=1;
	client_up=0;
	read_write=0;
	int fd=shm_open("shmfile",O_CREAT|O_RDWR);
	ftruncate(fd,sizeof(server));
	struct server *s=mmap(NULL,sizeof(*(s)),PROT_READ,PROT_WRITE,MAP_SHARED,fd,0);
	if(server_up==1&&client_up==0)
	{
		printf("\n entre the message\n");
		gets(msg);
		printf("\n user 1:%s",msg);
		read_write=1;
	}
	else
	{
		printf("\n user 2:%s",msg);
	}
	return 0;
}
