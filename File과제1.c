#include	<stdio.h>

/* 
2020440099 이정목

*/



int main(void) {				

	char name[15];		//name이라는 문자열 변수 생성
	printf("이름입력:");		// 이름입력: 을 화면에 출력
	scanf_s("%s",name, sizeof(name));	// 이름을 입력받음
	
	
	int num;		//학번을 넣을 num이라는 정수변수 생성
	printf("\n학번:");//학번: 출력
	scanf_s("%d", &num);//학번을 입력받음

	
	char gkr [30];		//gkr이라는 문자열 변수 생성
	printf("\n학과:");		// 학과: 을 화면에 출력
	scanf_s("%s", gkr, sizeof(gkr));	// 학과를 입력받음
	
		
	int birth;			//birth이라는 문자열 변수 생성
	printf("\n생일:");		// 생일: 을 화면에 출력
	scanf_s("%d", &birth); // 생일을 입력받음
	
	
	printf("\n이름:%s \n", name);	//	name이라는 변수에 입력받은 이름을 출력
	printf("생일:%d\n", birth);	//	birth라는 변수에 입력받은 값을 출력
	printf("학번:%d\n", num);	//	num라는 변수에 입력받은 값을 출력
	printf("학과:%s\n", gkr);	// gkr이라는 변수에 입력받은 값인 학과를 출력
	


	
	







}
	