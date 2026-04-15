#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//void shuffle(int array[], int size) 
//{
//	for (int i = 0; i < size; i++)
//	{
//		int seed = rand() % size;
//
//		int integer = array[seed];
//
//		array[seed] = array[i];
//
//		array[i] = integer;
//	}
//
//
//}

int main()
{
#pragma region 의사 난수
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	// rand라는 함수를 사용합니다.

	// UTC 기준으로 1970년 1우러 1일 0시 0분 0초부터 경과된
	// 시간을 초(secs)로 반환하는 함수입니다.

	// srand : rand()가 사용할 초기값(seed)을 설정하는 함수

	//srand(time(NULL)); // srand 안에 time(NULL)을 사용하여 나오는 값을 랜덤하게 만들어줍니다.
	//
	//int random = rand() % 10 + 1; // + 가 더하는 뜻이 아닌 1에서 10 사이의 난수를 뜻합니다.
	//
	//printf("%d",random);


#pragma endregion

#pragma region 셔플 함수

//	srand(time(NULL));
//	
//	int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int size = sizeof(list) / sizeof(list[0]);
//
//	shuffle(list, size);
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("list[%d]의 값 : %d\n", i, list[i]);
//	}

#pragma endregion

#pragma region Guess the Number

	//int life = 5;
	//
	//int computer = rand() % 50 + 1;
	//
	//int answer = 0;
	//
	//srand(time(NULL));
	//
	//while (life > 0)
	//{
	//	printf("life : %d\n", life);
	//
	//	printf("값을 입력하세요 : ");
	//	scanf_s("%d", &answer);
	//
	//	if (answer == computer)
	//	{
	//		break;
	//	}
	//	else if (computer < answer)
	//	{
	//		life--;
	//
	//		printf("컴퓨터가 가지고 있는 값보다 큽니다\n");
	//	}
	//	else if (answer < computer)
	//	{
	//		life--;
	//
	//		printf("컴퓨터가 가지고 있는 값보다 작습니다\n");
	//	}
	//
	//	printf("\n");
	//	
	//}
	//
	//if (life <= 0)
	//{
	//    printf("DEFEAT\n");
	//}
	//else
	//{
	//	printf("VICTORY\n");
	//}




#pragma endregion

	return 0;
}