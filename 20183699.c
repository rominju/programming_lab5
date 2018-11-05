/*
20183699노민주
lab5. 개인 명세서 정리
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
	printf("이름,생년월일,주소,전화번호를 7개 입력하세요.\n");
	printf("주의사항)순서에 맞춰서 입력하시고 주소는 시와 구만 입력하세요.\n");
	printf("예시)노민주 1998 05 04 여 서울특별시 강동구 010-1111-2222\n\n");
    
	struct tag c[7];
	printf(" 이름   생년월일  성별     주소           전화번호\n");
	for (int i = 0; i < 7; i++)		//데이터 입력받기
	{
		scanf("%s %s %s %s %s %s %s %s", &c[i].name, &c[i].birth.year, &c[i].birth.month, &c[i].birth.day, &c[i].gender, &c[i].house.city, &c[i].house.gu, &c[i].number);
	}
	printf("\n\n");

	printf(" 입력자료를 그대로 출력>>\n\n");	//입력한 데이터 그대로 출력
	printf("이름    생년월일     성별    주소		전화번호\n");
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%s %5s-%s-%s %4s      %s %s  %5s\n", c[i].name, c[i].birth.year, c[i].birth.month, c[i].birth.day, c[i].gender, c[i].house.city, c[i].house.gu, c[i].number);

	}

	int i;
	int j;
	struct tag temp;

	for (i = 1; i < 7; i++)		//이름순으로 정렬
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
	printf(" 입력자료를 이름순으로 출력>>\n\n");		//이름순으로 출력
	printf("이름    생년월일     성별    주소		전화번호\n");
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%s %5s-%s-%s %4s      %s %s  %5s\n", c[i].name, c[i].birth.year, c[i].birth.month, c[i].birth.day, c[i].gender, c[i].house.city, c[i].house.gu, c[i].number);

	}


	for (i = 1; i < 7; i++)		//생년월일순으로 정렬
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

	for (i = 1; i < 7; i++)		//year이 같을 때 month순으로 정렬
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

	for (i = 1; i < 7; i++)		//year와 month가 같을때 day로 정렬
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
	printf(" 입력 자료를 생년월일순으로 출력>>\n\n");		//생년월일 순으로 출력
	printf("이름    생년월일     성별    주소		전화번호\n");
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%s %5s-%s-%s %4s      %s %s  %5s\n", c[i].name, c[i].birth.year, c[i].birth.month, c[i].birth.day, c[i].gender, c[i].house.city, c[i].house.gu, c[i].number);

	}

	return 0;
}