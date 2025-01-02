#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>


int main() {
	printf("hi");
	int fd;
	char buffer[50];
	char msg[50] = "Hello this is jayachandra";
	fd=open("content3.txt",O_RDWR | O_CREAT);
	
	printf("fd: %d", fd);
	
	if(fd!=-1) {
		printf("\n content2.txt opened with RW access\n");
		write(fd,msg,sizeof(msg));
		lseek(fd,0,SEEK_SET);
		read(fd,buffer,sizeof(msg));
		printf("\n %s was written to my files\n", buffer);
		close(fd);
	}
	
	return 0;
}
