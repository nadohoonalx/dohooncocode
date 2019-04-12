// nadohoon.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <string>
#include <windows.h>
using namespace std;
#define WIDTH 9
#define HEIGHT 3


class Circle {
public:
	void init(int xval, int vval, int r);
	void draw();
	void move();
private:
	int x, y, radius;
};

void Circle::init(int xval, int yval, int r){
x = xval;
y = yval;
radius = r;
}

void Circle::draw() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y -radius, x + radius, y + radius);
}

void Circle::move() {
	x += rand() % 50;
}

int main() {

	Circle c1;
	Circle c2;

	c1.init(100, 100, 50);
	c2.init(100, 200, 40);
	for (int i = 0; i < 20; i++) {
		c1.move();
		c1.draw();
		c2.move();
		c2.draw();
		Sleep(1000);
	}

	getchar();
	return 0;
}



	


	



















/*
	srand(time(NULL));
	int a[100] = {};
	int b[10] = {};
	int i,x,y,max,result;

	for (i = 0; i < 100; i++) {

		a[i] = rand() % 9;

	}




	cout << "가장 많이 생성된 수 : ";

	for (y = 0; y < 10; y++) {
		max = b[0];

		if (b[y] > max) {
			max = b[y];
			result = y;
		}

	}
	cout << result;
	*/

/* 7번 
int main() {

	string str[5] = {};
	string result;
	int i=0 ,a,max,b;

	while (i<5) {
		
		cout << "문자열을 입력하세요.";
		cin >> str[i];
		i++;
	}
	// 배열저장

	cout << "제일 긴 문자열 : ";
	 
	for (a= 0; a< 5; a++) {
		
		 max = str[0].size();
		
		if (max < str[a].size()) {

			max = str[a].size();
			result = str[a];
			
		  }
		
	}

	cout << result; 

	return 0;


}
*/

/*

string s;
string list = { "quit" };

while (1)
{

	cout << " 전화번호를 입력하시오 : ";
	cin >> s;

	for (auto& c : s) {

		if (c == '(') continue;
		if (c == ')') continue;

		cout << c;
	}continue;

	for (auto& x : s)
	{
		if (x == 'quit')
			break;
	}


	break;

}


cout << endl;



*/




/*
	




/*inline double clac_volume(double p = 3.14 , double x = 10.0) {

	double result;

	result = ((4.0/3.0) *p *x*x*x);
	return result;

}

int main() {
	
	double a;

	cout << "반지름을 입력하시오 : ";
	cin >> a;

	cout << clac_volume();

	getchar();
	return 0;
}


*/











/*int sum(int x, int y, int z = 0, int w = 0)
{
	return x + y + z + w;
}

int main(){

	cout << "sum(10,15)=" << sum(10, 15) << endl;
	cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << endl;
	cout << "sum(10, 15, 25 30)=" << sum(10, 15, 25, 30) << endl;



	getchar();
	return 0;
}
*/


/*
void print(int i) {
	cout << "정수 출력: " << i << endl;
}

void print(double f) {

	cout << "실수 출력: " << f << endl;
}

void print(char c) {

	cout << "문자 출력" << c << endl;
}


int main()
{

	print(100);
	print(3.14);
	print('c');

	*/
/*
	char board[3][3];
	int x, y, k, i;

	//보드를 초기화 한다
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';

	//사용자로부터 위치를 받아서 보드에 표시한다.
	for (k = 0; k < 9; k++) {
		cout << "(x,y) 좌표: ";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? 'x' : 'o';

		//현재 순번에 따라 x o 중 선택

		//보드를 화면에 그림
		for (i = 0; i < 3; i++) {

			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;
	}
	*/


/*
int table[HEIGHT][WIDTH];
int r, e;

for (r = 0; r < HEIGHT; r++)
	for (e = 0; e < WIDTH; e++)
		table[r][e] = (r + 1)*(e + 1);

	for (r = 0; r < HEIGHT; r++) {
		for (e = 0; e < WIDTH; e++) {

			cout << table[r][e] << "$";
	}
		cout << endl;
}
*/



/*int list[10];
	int max;

	for (int& elem : list)
	{
		elem = rand() % 100;
		cout << elem << " ";

	}
	cout << endl;
	max = list[0];

	for (auto&elem : list) {

		if (elem > max)
			max = elem;

	}

	cout << "최대값=" << max << endl;
	*/
/*
int list[] = { 1,2,3,4,5,6,7,8,9,10 };

for (int i : list) {

	cout << i <<" "; // " "  띄어쓰기
}

cout <<endl;
*/

/*	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {

		cout << "학생들의 성적을 입력하시오";
		cin >> scores[i];

	}

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = sum / STUDENTS;
	cout << "성적평균" << average << endl;
	*/
/*
	int i, ans;
	cout << "산수 문제를 자동으로 출제합니다" << endl;

	while (true) {
		int x = rand() % 100;
		int y = rand() % 100;
		cout << x << "+" << y << "=";
		cin >> ans;
		if (x + y == ans) {
			cout << "맞았습니다." << endl;
			break;
		}
		else cout << "틀렸습니다." << endl;
	}
	*/

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
