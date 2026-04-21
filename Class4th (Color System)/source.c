#include <stdio.h>
#include <windows.h>

enum State
{
	IDLE = 0, // 처음 쓴 열거형의 값을 기준으로
	ATTACK, // 열거형의 값이 하나씩 증가합니다.
	DIE,

	// 열거형은 값을 따로 설정할 수 있으며, 설정된 다음 값은
	// 그 전의 값에서 하나 증가된 값으로 설정됩니다.

};
void convert(enum State state) // void가 적혀있는 명령어는 무조건 main 함수 전에 사용해야 합니다.
{
	if (state == 0)
		// =으로만 표현하게 된디면 대위 연산으로 출력문에 나오기 때문에
		// =을 한 번 더 사용해야 올바르게 선언할 수 있습니다.
	{
		printf("IDLE \n");
	}
	else if (state == 1)
	{
		printf("ATTACK \n");
	}
	else if (state == 2)
	{
		printf("DIE \n");
	}
	else
	{
		printf("EXIT\n");
	}

}

enum Color
{

	BLACK = 0,
	DARKBLUE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVIOLET,
	DARKYELLOW,
	GRAY,
	DARKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

int main()
{
#pragma region 열거형
	// 관련된 상수의 값을 이름으로 정의한 집합의 자료형입니다.

	//enum State state = IDLE;
	//
	//
	//printf("please enter a status : ");
	//
	//scanf_s("%d", &state);
	//
	//printf("\n");
	//
	//convert(state);




#pragma endregion


	// 출력문의 색을 바꿀 때 사용하는 명령어입니다.
	// (다만 거의 c언어에서만 사용하는 명령어입니다.

	// for문을 활용하여 명령어를 통해 색을 계속 바꾸고 싶다면
	// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE)를
	// for문 안에서 선언하여 사용하면 됩니다.

	int size = WHITE;

	for (int i = 0; i <= size; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
		// 3의 배수에 해당하는 숫자만 색이 출력되는 것이 아닌,
		// 문자가 출력되도록 만들어야하니

		// if문을 활용하여 3, 6, 9, 12, 15일때
		// 출력되는 것이 색이 아닌 pause로 출력되도록 만들고,
		// 그게 아닌 나머지 수는 색이 출력되도록
		// 따로 출력문을 만듭니다.

		if (i != 3 && i % 3 == 0)
		{
			printf("pause");
		}

		printf("color index : %d\n", i);
	}
	printf("Hello");



	return 0;
}