#pragma once
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

class matrix3
{
public:

	float mat3[3][3] //행렬 생성
	{
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	matrix3(float x, float y, float z) // 이동
	{
		mat3[2][0] = x;
		mat3[2][1] = y;
		mat3[2][2] = z;
	}

	matrix3(float r) // 회전
	{
		mat3[0][0] = cos(r * (3.14 / 180));
		mat3[0][1] = -sin(r * (3.14 / 180));
		mat3[1][0] = sin(r * (3.14 / 180));
		mat3[1][1] = cos(r * (3.14 / 180));
	}

	matrix3(float s, float ss) // 스케일
	{
		mat3[0][0] = s;
		mat3[1][1] = ss;
	}
};

class vector3
{
public:

	float empty = 0;
	float vec3[1][3]  // 벡터값 저장될 곳
	{
		{0,0,1}
	};

	float result[1][3]	//곱한 값을 저장할 곳
	{
		{0,0,1}
	};

	vector3(float x, float y) //x,y좌표를 받는다.
	{
		vec3[0][0] = x;
		vec3[0][1] = y;
	}

	vector3 operator * (matrix3 mat) //연산자 오버로딩. 곱셈
	{
		for (int j = 0; j < 3; j++)
		{
			for (int i = 0; i < 3; i++)
			{
				empty = empty + (vec3[0][i] * mat.mat3[i][j]);
			}
			result[0][j] = empty;
			empty = 0;
		}

		vec3[0][0] = result[0][0];
		vec3[0][1] = result[0][1];
		vec3[0][2] = result[0][2];

		return vector3(vec3[0][0], vec3[0][1]);
	}
};