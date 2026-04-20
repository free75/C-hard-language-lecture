#include <stdio.h>

#include <stdlib.h> // 동적 할당인 malloc을 사용해야하는 경우, <stdlib.h>를 무조건 선언해야합니다.

#define _CRT_SECURE_NO_WARNING

void load(const char* file_name)
{
	FILE* file = fopen(file_name, "r");

	int count = 0;

	int character = '\0';

	while ((character = fgetc(file)) != EOF)
	{
		count++;
	}

	rewind(file);

	// 첫 번째 매개 변수 : 읽을 데이터를 저장할 메모리 버퍼의 포인터 변수
	// 두 번째 매개 변수 : 각 데이터 항목의 크기
	// 세 번째 매개 변수 : 데이터를 읽어올 항목의 수
	// 네 번째 매개 변수 : 데이터를 읽어올 파일의 포인터 변수

	// SIZE 삭제한 이유: 동적 할당에서 메모리 크기를 끌어다 쓰기 때문에 define으로 선언한 SIZE는 필요하지 않습니다. 

	char* buffer = (char*)malloc(count + 1);


	fread(buffer, sizeof(char), count, file);
	// 파일을 읽기 위해 fread 선언 후에 (SIZE 필요 X) count 변수와 포인터 변수인 file까지 fread에 포함하여 선언해주면 됩니다.

	buffer[count] = '\0';
	// buffer 선언 후에 NULL 변수인 \0를 count와 결합하여 사용합니다. 

	printf("%s", buffer);
	// 

	free(buffer);

	fclose(file);
}

#pragma region fread 사용방법
// fread를 그냥 사용한다면 메모리의 크기가 작아서 실행이 불가능하게 되는데
// 이걸 방지하기 위해 fread를 사용하기 전에 #define SIZE를 사용하여
// 메모리 크기를 크게 만들어 준다음 원하는 변수 하나를 선언하여 선언했던
// SIZE를 통해 메모리 크기를 동기화 시켜줍니다.
// 예시로 buffer라는 함수를 선언했을때 이걸 SIZE와 결합하여
// #define SIZE 1000과 char buffer[SIZE] = { 0, }; 로 메모리 크기를
// 1000으로 만들어 준다음, 그 후엔 메모리 크기가 부족하여
// 사용하지 못 했던 fread를 메모리 크기가 1000인 buffer와 합치면
// fread안에 먼저 buffer를 선언해준 다음 메모리 크기를 사용하기 위해
// sizeof와 buffer의 자료형인 char을 사용하여 메모리 크기까지 넣습니다.
// 후엔 출력문과 비슷하게 SIZE와 정확히 파일 안에 집어넣은 파일의 이름을
// 쓴다면 실행이 가능하게 됩니다.


#pragma endregion

int main()
{
#pragma region 파일 입출력

	// 첫 번째 매개 변수 (파일의 이름)
	// 두 번째 매개 변수 (파일의 입출력 모드)

#pragma region 파일 만드는 방법

	// * 파일 만드는 방법

	// 파일 입출력 과정 후에 만든 파일 보는 방법:
	// 선언한 파일에서 오른쪽 클릭 후에 
	// 파일 탐색기에서 폴더 열기를 사용하면
	// 만든 파일을 확인할 수 있습니다.

#pragma endregion

	FILE* file = fopen("test.txt", "w"); // fopen : 말 그대로 새로운 파일을 만들게 도와주는 명령어입니다.

#pragma region 파일에 원하는 문자 출력하는 방법

	// * 파일을 만든 후에 파일 안에 원하는 문자를 출력하는 방법

	// fputs라는 printf와 비슷한 기능을 가진
	// 명령어를 통해 fputs("문자열", 포인터) 형식으로 만들고 난 후에
	// 파일을 여는 과정에서 오류가 생기는 것을 방지하기 위해 
	// fclose(포인터 변수) 형식을 사용하여 파일에 오류가 나는 것도 방지하면 
	// 파일 안에 원하는 문자를 출력할 수 있습니다.

# pragma endregion

	fputs("Health : \n", file);// fputs: 만든 파일 안에 입력할 문자 혹은 숫자들을 적도록 만들어 주는 명령어입니다.
	fputs("Attack : \n", file);
	fputs("Defense : \n", file);

	fclose(file);

	load("Resources/피카츄_(1).txt");

#pragma endregion

	return 0;
}