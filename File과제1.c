#include	<stdio.h>

/* 
2020440099 ������

*/



int main(void) {				

	char name[15];		//name�̶�� ���ڿ� ���� ����
	printf("�̸��Է�:");		// �̸��Է�: �� ȭ�鿡 ���
	scanf_s("%s",name, sizeof(name));	// �̸��� �Է¹���
	
	
	int num;		//�й��� ���� num�̶�� �������� ����
	printf("\n�й�:");//�й�: ���
	scanf_s("%d", &num);//�й��� �Է¹���

	
	char gkr [30];		//gkr�̶�� ���ڿ� ���� ����
	printf("\n�а�:");		// �а�: �� ȭ�鿡 ���
	scanf_s("%s", gkr, sizeof(gkr));	// �а��� �Է¹���
	
		
	int birth;			//birth�̶�� ���ڿ� ���� ����
	printf("\n����:");		// ����: �� ȭ�鿡 ���
	scanf_s("%d", &birth); // ������ �Է¹���
	
	
	printf("\n�̸�:%s \n", name);	//	name�̶�� ������ �Է¹��� �̸��� ���
	printf("����:%d\n", birth);	//	birth��� ������ �Է¹��� ���� ���
	printf("�й�:%d\n", num);	//	num��� ������ �Է¹��� ���� ���
	printf("�а�:%s\n", gkr);	// gkr�̶�� ������ �Է¹��� ���� �а��� ���
	


	
	







}
	