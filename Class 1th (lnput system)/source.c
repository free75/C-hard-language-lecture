#include <stdio.h>

#include <windows.h>

#define SIZE 10



int main()
{
#pragma region 포인터 배열 

	const char* character[SIZE] = { NULL, };

	// SIZE의 크기만 10으로 설정하고, 아직 배열의 값은
	// 가비지 값들만 들어있기 때문에 NULL을 사용하여 초기화를 한번 해야
	// 정상적인 값이 들어갈 수 있습니다.

	character[0] = "안녕하세요\n";
	character[1] = "누구시죠?\n";
	character[2] = "의뢰 받고 온 탐정입니다.\n";
	character[3] = "아 몰라뵜군요, 어서 들어오시죠\n";
	character[4] = "수상한 사건이 있다하여 찾아왔습니다.\n";
	character[5] = "이 사건에 대해선 아시는 게 있으신가요?\n";
	character[6] = "어느정도는 저도 들었습니다.\n";
	character[7] = "그렇다면 이 사건을 조금은 알고 계신거 같군요\n";
	character[8] = "그럼 사건이 있는 장소로 안내해줄 수 있습니까?\n";
	character[9] = "네 이쪽으로 오시죠.\n";

#pragma region 포인터 배열을 사용한 연속적으로 출력되는 대화문
	// main 함수 전에 define SIZE를 사용하여 배열의 크기를 10으로 정해줍니다.

	// 이후 const char 포인터 함수를 [0]부터 [9]의 배열까지 원하는 문자를 선언해준 다음

	// for문을 사용하여 character의 배열의 크기가 10보다 작다를 선언한다면

	// 그 전에 선언하였던 [0] ~ [9]까지의 배열문들이 출력문에 연속적으로 나오게 됩니다.
#pragma endregion

#pragma region 특이한 기호들

	// 0x000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

	// 0x0001 : 이전에 누른 적이 없고 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태

	// 위의 주석문들은 사용하게 된다면, 선언한 출력문은 끝나지 않는 상태로 만들 수 있습니다.

	// 그리고 누르는 것은 스페이스 바를 의미합니다.

#pragma endregion

	int i = 0;

	while (i < SIZE)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			if (i % 2 == 0)
			{
				printf("탐정 : %s\n\n", character[i]);
			}
			else
			{
				printf("의뢰인 : %s\n\n", character[i]);
			}

			i++;
		}

	}
	printf("대화가 종료되었습니다.");

	return 0;
}