#include <stdio.h>
#include <windows.h>
#include <conio.h> // double buffer를 사용하기 위해 쓰는 명령어들입니다.

int index = 0;
HANDLE screen[2];

// main 전에 선언해야 합니다.

int size = sizeof(screen) / sizeof(screen[0]);

void initialize()
{
	CONSOLE_CURSOR_INFO	cursor;

	cursor.bVisible = FALSE;

	for (int i = 0; i < size; i++)
	{
		// 화면 버퍼를 2개 생성합니다.
		screen[i] = CreateConsoleScreenBuffer
		(
			GENERIC_READ | GENERIC_WRITE,
			0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
		);

		SetConsoleCursorInfo(screen[i], &cursor);

	}

	//screen[0] = CreateConsoleScreenBuffer
	//(
	//	GENERIC_READ | GENERIC_WRITE,
	//	0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	//);
	//
	//screen[1] = CreateConsoleScreenBuffer
	//(
	//	GENERIC_READ | GENERIC_WRITE,
	//	0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	//);
	//
	//cursor.bVisible = FALSE;
	//
	//SetConsoleCursorInfo(screen[0], &cursor);
	//SetConsoleCursorInfo(screen[1], &cursor);


}

void filp()
{
	SetConsoleActiveScreenBuffer(screen[index]);

	index = !index; // 1이면 0, 0이면 1로 항상 반전시켜서 값을 가져오도록 만들어줍니다.
}

void clear()
{
	COORD position = { 0, 0 };

	DWORD dword;

	CONSOLE_SCREEN_BUFFER_INFO buffer;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(console, &buffer);

	int width = buffer.srWindow.Right - buffer.srWindow.Left + 1;
	int height = buffer.srWindow.Bottom - buffer.srWindow.Top + 1;

	FillConsoleOutputCharacter(screen[index], ' ', width * height, position, &dword);

	
}

// 콘솔 창 화면의 크기를 구하는 명령어

void release()
{
	for (int i = 0; i < size; i++)
	{
		CloseHandle(screen[i]);
	}
}

void render(int x, int y, const char* character)
{
	DWORD dword;
	COORD position = { x, y };

	SetConsoleCursorPosition(screen[index], position);
	WriteFile(screen[index], character, strlen(character), &dword, NULL);
}



// 2026 4. 22 목표
// 더블 버퍼를 사용하여 콘솔 화면에 거슬리는 커서를 비활성화시키기

int main()
{
	initialize();

	int x = 5;

	while (1)
	{


		filp();

		clear();

		render(x++, 5, " * ");

		Sleep(100);
		// 말그대로 느리게 만들어 주는 명령어로 선언한 코드의 이동 속도가 너무 빠를때
		// 사용하는 명령어입니다.

	}



	release;


	// c언어의 함수 좌표계는 상시적으로 x는 +, y는 -로 설정되어 있기 때문에
	// 이걸 유의하면서 사용해야합니다.

	// x축으로 한 칸씩 이동하려면 1칸씩 움직이면 반 칸 가량만 움직이기 때문에 2 칸씩 움직여야 합니다.
	// 

#pragma region 
	// 
	





#pragma endregion

#pragma region 





#pragma endregion

#pragma region 





#pragma endregion

#pragma region 





#pragma endregion

#pragma region 





#pragma endregion

#pragma region 





#pragma endregion

#pragma region 





#pragma endregion

	return 0;
}