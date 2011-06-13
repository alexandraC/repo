#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
unsigned long ipNum= (strtoul(argv[1],NULL,10));
unsigned long maskNum= (strtoul(argv[2],NULL,10));
int ipAddress[4];
int maskAddress[4];
int index;

maskNum= (0xffffffff << (32-maskNum));

for(index=3;index >= 0; index--)
{
	maskAddress[index]= (maskNum & 0x000000ff);	
	ipAddress[index]=((ipNum) & maskAddress[index]);
	ipNum >>=8;
	maskNum>>=8;
}
printf("Address is %d.%d.%d.%d Mask is %d.%d.%d.%d \n", ipAddress[0], ipAddress[1], ipAddress[2], ipAddress[3], maskAddress[0], maskAddress[1], maskAddress[2], maskAddress[3]);

return 0;

}
