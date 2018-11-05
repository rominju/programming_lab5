/*
20183699�����
lab5. ���� ���� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct date
{
	char year[20];
	char month[20];
	char day[20];

};

struct address
{
	char city[50];
	char gu[50];
};

struct tag
{
	char name[12];
	struct date birth;
	char gender[8];
	struct address house;
	char number[16];
};

int main()
{
	printf("�̸�,�������,�ּ�,��ȭ��ȣ�� 7�� �Է��ϼ���.\n");
	printf("���ǻ���)������ ���缭 �Է��Ͻð� �ּҴ� �ÿ� ���� �Է��ϼ���.\n");
	printf("����)����� 1998 05 04 �� ����Ư���� ������ 010-1111-2222\n\n");
    
	struct tag c[7];
	printf(" �̸�   �������  ����     �ּ�           ��ȭ��ȣ\n");
	for (int i = 0; i < 7; i++)		//������ �Է¹ޱ�
	{
		scanf("%s %s %s %s %s %s %s %s", &c[i].name, &c[i].birth.year, &c[i].birth.month, &c[i].birth.day, &c[i].gender, &c[i].house.city, &c[i].house.gu, &c[i].number);
	}
	printf("\n\n");

	printf(" �Է��ڷḦ �״�� ���>>\n\n");	//�Է��� ������ �״�� ���
	printf("�̸�    �������     ����    �ּ�		��ȭ��ȣ\n");
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%s %5s-%s-%s %4s      %s %s  %5s\n", c[i].name, c[i].birth.year, c[i].birth.month, c[i].birth.day, c[i].gender, c[i].house.city, c[i].house.gu, c[i].number);

	}

	int i;
	int j;
	struct tag temp;

	for (i = 1; i < 7; i++)		//�̸������� ����
	{
		for (j = i; j > 0 && strcmp(c[j - 1].name, c[j].name) > 0; j--)
		{
			strcpy(temp.name, c[j - 1].name);
			strcpy(c[j - 1].name, c[j].name);
			strcpy(c[j].name, temp.name);

			strcpy(temp.birth.year, c[j - 1].birth.year);
			strcpy(c[j - 1].birth.year, c[j].birth.year);
			strcpy(c[j].birth.year, temp.birth.year);

			strcpy(temp.birth.month, c[j - 1].birth.month);
			strcpy(c[j - 1].birth.month, c[j].birth.month);
			strcpy(c[j].birth.month, temp.birth.month);

			strcpy(temp.birth.day, c[j - 1].birth.day);
			strcpy(c[j - 1].birth.day, c[j].birth.day);
			strcpy(c[j].birth.day, temp.birth.day);

			strcpy(temp.gender, c[j - 1].gender);
			strcpy(c[j - 1].gender, c[j].gender);
			strcpy(c[j].gender, temp.gender);

			strcpy(temp.house.city, c[j - 1].house.city);
			strcpy(c[j - 1].house.city, c[j].house.city);
			strcpy(c[j].house.city, temp.house.city);

			strcpy(temp.house.gu, c[j - 1].house.gu);
			strcpy(c[j - 1].house.gu, c[j].house.gu);
			strcpy(c[j].house.gu, temp.house.gu);

			strcpy(temp.number, c[j - 1].number);
			strcpy(c[j - 1].number, c[j].number);
			strcpy(c[j].number, temp.number);
		}
	}

	printf("\n\n");
	printf(" �Է��ڷḦ �̸������� ���>>\n\n");		//�̸������� ���
	printf("�̸�    �������     ����    �ּ�		��ȭ��ȣ\n");
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%s %5s-%s-%s %4s      %s %s  %5s\n", c[i].name, c[i].birth.year, c[i].birth.month, c[i].birth.day, c[i].gender, c[i].house.city, c[i].house.gu, c[i].number);

	}


	for (i = 1; i < 7; i++)		//������ϼ����� ����
	{
		for (j = i; j > 0 && strcmp(c[j - 1].birth.year,c[j].birth.year) > 0; j--)
		{
			strcpy(temp.name, c[j - 1].name);
			strcpy(c[j - 1].name, c[j].name);
			strcpy(c[j].name, temp.name);

			strcpy(temp.birth.year, c[j - 1].birth.year);
			strcpy(c[j - 1].birth.year, c[j].birth.year);
			strcpy(c[j].birth.year, temp.birth.year);

			strcpy(temp.birth.month, c[j - 1].birth.month);
			strcpy(c[j - 1].birth.month, c[j].birth.month);
			strcpy(c[j].birth.month, temp.birth.month);

			strcpy(temp.birth.day, c[j - 1].birth.day);
			strcpy(c[j - 1].birth.day, c[j].birth.day);
			strcpy(c[j].birth.day, temp.birth.day);

			strcpy(temp.gender, c[j - 1].gender);
			strcpy(c[j - 1].gender, c[j].gender);
			strcpy(c[j].gender, temp.gender);

			strcpy(temp.house.city, c[j - 1].house.city);
			strcpy(c[j - 1].house.city, c[j].house.city);
			strcpy(c[j].house.city, temp.house.city);

			strcpy(temp.house.gu, c[j - 1].house.gu);
			strcpy(c[j - 1].house.gu, c[j].house.gu);
			strcpy(c[j].house.gu, temp.house.gu);

			strcpy(temp.number, c[j - 1].number);
			strcpy(c[j - 1].number, c[j].number);
			strcpy(c[j].number, temp.number);
		}

	}

	for (i = 1; i < 7; i++)		//year�� ���� �� month������ ����
	{
		for (j = i; j > 0; j--)
		{
			if (strcmp(c[j - 1].birth.year, c[j].birth.year) == 0 && strcmp(c[j - 1].birth.month, c[j].birth.month) > 0)

			{
				strcpy(temp.name, c[j - 1].name);
				strcpy(c[j - 1].name, c[j].name);
				strcpy(c[j].name, temp.name);

				strcpy(temp.birth.year, c[j - 1].birth.year);
				strcpy(c[j - 1].birth.year, c[j].birth.year);
				strcpy(c[j].birth.year, temp.birth.year);

				strcpy(temp.birth.month, c[j - 1].birth.month);
				strcpy(c[j - 1].birth.month, c[j].birth.month);
				strcpy(c[j].birth.month, temp.birth.month);

				strcpy(temp.birth.day, c[j - 1].birth.day);
				strcpy(c[j - 1].birth.day, c[j].birth.day);
				strcpy(c[j].birth.day, temp.birth.day);

				strcpy(temp.gender, c[j - 1].gender);
				strcpy(c[j - 1].gender, c[j].gender);
				strcpy(c[j].gender, temp.gender);

				strcpy(temp.house.city, c[j - 1].house.city);
				strcpy(c[j - 1].house.city, c[j].house.city);
				strcpy(c[j].house.city, temp.house.city);

				strcpy(temp.house.gu, c[j - 1].house.gu);
				strcpy(c[j - 1].house.gu, c[j].house.gu);
				strcpy(c[j].house.gu, temp.house.gu);

				strcpy(temp.number, c[j - 1].number);
				strcpy(c[j - 1].number, c[j].number);
				strcpy(c[j].number, temp.number);
			}
		}

	}

	for (i = 1; i < 7; i++)		//year�� month�� ������ day�� ����
	{
		for (j = i; j > 0; j--)
		{
			if (strcmp(c[j - 1].birth.year, c[j].birth.year) == 0 && strcmp(c[j - 1].birth.month, c[j].birth.month) == 0 && strcmp(c[j - 1].birth.day, c[j].birth.day) > 0)

			{
				strcpy(temp.name, c[j - 1].name);
				strcpy(c[j - 1].name, c[j].name);
				strcpy(c[j].name, temp.name);

				strcpy(temp.birth.year, c[j - 1].birth.year);
				strcpy(c[j - 1].birth.year, c[j].birth.year);
				strcpy(c[j].birth.year, temp.birth.year);

				strcpy(temp.birth.month, c[j - 1].birth.month);
				strcpy(c[j - 1].birth.month, c[j].birth.month);
				strcpy(c[j].birth.month, temp.birth.month);

				strcpy(temp.birth.day, c[j - 1].birth.day);
				strcpy(c[j - 1].birth.day, c[j].birth.day);
				strcpy(c[j].birth.day, temp.birth.day);

				strcpy(temp.gender, c[j - 1].gender);
				strcpy(c[j - 1].gender, c[j].gender);
				strcpy(c[j].gender, temp.gender);

				strcpy(temp.house.city, c[j - 1].house.city);
				strcpy(c[j - 1].house.city, c[j].house.city);
				strcpy(c[j].house.city, temp.house.city);

				strcpy(temp.house.gu, c[j - 1].house.gu);
				strcpy(c[j - 1].house.gu, c[j].house.gu);
				strcpy(c[j].house.gu, temp.house.gu);

				strcpy(temp.number, c[j - 1].number);
				strcpy(c[j - 1].number, c[j].number);
				strcpy(c[j].number, temp.number);
			}
		}

	}

	printf("\n\n");
	printf(" �Է� �ڷḦ ������ϼ����� ���>>\n\n");		//������� ������ ���
	printf("�̸�    �������     ����    �ּ�		��ȭ��ȣ\n");
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%s %5s-%s-%s %4s      %s %s  %5s\n", c[i].name, c[i].birth.year, c[i].birth.month, c[i].birth.day, c[i].gender, c[i].house.city, c[i].house.gu, c[i].number);

	}

	return 0;
}