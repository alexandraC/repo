#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
unsigned long ipNum= (strtoul(argv[1],NULL,10));
int ipAddress[4];
int index;

for(index=3;index >= 0; index--)
{
	ipAddress[index]=((ipNum) & 0x000000ff);
	ipNum >>=8;
}
printf("Address is %d.%d.%d.%d \n", ipAddress[0], ipAddress[1], ipAddress[2], ipAddress[3]);

return 0;

}
