#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1();
void filestat2();
void filetime1();
void filetime2();
void sizecmp();
void blockcmp();
void datecmp();
void timecmp();

int main(){
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(){
    
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(){
    
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(){
    
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){
	if((int)stat1.st_size>(int)stat2.st_size)
		printf("size of stat1 is greater than size of stat2\n");
	else if((int)stat.st_size==(int)stat2.st_size)
		printf("size of stat1 is equal with size of stat2\n");
	else
		printf("size of stat1 is less than size of stat2\n");
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(){
	if((int)stat1.st_blocks>(int)stat2.st_blocks)
		printf("block size of stat1 is greater than block size of stat2\n");
	else if((int)stat.st_blocks==(int)stat2.st_blocks)
		printf("block size of stat1 is equal with block size of stat2\n");
	else
		printf("block size of stat1 is less than block size of stat2\n");
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){
    
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(){
    
}
