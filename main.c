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
	time1 = localtime(&stat1.st_mtime);
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(){
    	time2 = localtime(&stat2.st_mtime);
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

void datecmp(char *file1, char *file2) {
	if (stat(file1, &stat1) != 0) {
		printf("Failed to get information\n");
    		return ;
	}
	if (stat(file2, &stat2) != 0) {
		printf("Failed to get information\n");
		return ;
	}
	
	time1 = localtime(&stat1.st_mtime);
	time2 = localtime(&stat2.st_mtime);

	if (time1->tm_year > time2->tm_year)
		printf("text1 is early\n");
	else if (time1->tm_year < time2->tm_year)
		printf("text2 is early\n");
	else {
		if (time1->tm_mon > time2->tm_mon)
			printf("text1 is early\n");
		else if (time1->tm_mon < time2->tm_mon)
			printf("text2 is early\n");
		else {
			if (time1->tm_mday > time2->tm_mday)
				printf("text1 is early\n");
			else if (time1->tm_mday < time2->tm_mday)
				printf("text2 is early\n");
			else
				printf("same time\n");
		}
	}
}

void timecmp(char *file1, char *file2) {
	if (stat(file1, &stat1) != 0) {
		printf("Failed to get information\n");
		return ;
	}
	if (stat(file2, &stat2) != 0) {
		printf("Failed to get information\n");
		return ;
	}

	if (difftime(stat1.st_mtime, stat2.st_mtime) > 0)
		printf("text1 is early\n");
	else if (difftime(stat1.st_mtime, stat2.st_mtime) < 0)
		printf("text2 is early\n");
	else
		printf("same time\n");	
}
