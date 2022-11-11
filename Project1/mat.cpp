#include "MuSoenMath.h"

void main() {

	matrix3 Translate(3, 5, 1);
	matrix3 Rotate(30, "rot");
	matrix3 Scale(2, 2);

	vector3_2 vv(3, 4, 5);
	vector4 v4(2, 3, 4, 5);
	matrix4 Translate4(2, 3, 4, 5);

	matrix3 mat3(1,1,1,2,2,2,3,3,3);
	matrix3 mtmat3(1, 2, 3, 1, 2, 3, 1, 2, 3);

	matrix4 mat4(1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4);
	matrix4 mtmat4(1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4);
	matrix3 multimat = mat3 * mtmat3;
	matrix4 multimat4 = mat4 * mtmat4;

	matrix3 plusmat3 = mat3 + mtmat3;
	matrix3 minusmat3 = mat3 - mtmat3;

	matrix4 plusmat4 = mat4 + mtmat4;
	matrix4 minusmat4 = mat4 - mtmat4;

	vector3 v(2, 3, 1);
	vector3 p2 = v * mat3;

	vector4 ve4(2, 3, 4, 5);
	vector4 p3 = ve4 * mat4;
	vector4_2 vv4(2, 3, 4, 5);


	//vector3 p = v * Translate * Rotate * Scale;
	//cout << "p = v * Translate * Rotate * Scale" << endl << "p = ";

	/*cout << p.vec3[0][0] << ", ";
	cout << p.vec3[0][1] << ", ";
	cout << p.vec3[0][2] << endl << endl;*/

	cout << "Translate ���" << endl;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << Translate.mat3[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Rotate ���" << endl;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << Rotate.mat3[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;


	cout << "Scale ���" << endl;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << Scale.mat3[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Translate ��ġ" << endl;
	Translate.transposeMatrix3();
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << Translate.mat3[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Translate �������" << endl;
	Translate.identityMatrix();
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << Translate.mat3[j][i] << " ";
		}
		cout << endl;
	}

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤ�4x4 ��ĤѤѤѤѤѤѤѤѤѤѤ�" << endl;

	cout << "4x4 ���" << endl;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << Translate4.mat4[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "4x4 ��ġ" << endl;
	Translate4.transposeMatrix4();
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << Translate4.mat4[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "4x4 �������" << endl;
	Translate4.identityMatrix4();
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << Translate4.mat4[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

		cout << "�ѤѤѤѤѤѤѤѤѤѤѤ�1x3 ���ͤѤѤѤѤѤѤѤѤѤѤ�" << endl;

	for (size_t i = 0; i < 3; i++)
	{
		cout << vv.vec3[0][i] << ", ";
	}
	cout << endl; cout << endl;
	cout << "1x3 ���� ��ġ" << endl;
	vv.transposeVec3();
	for (size_t i = 0; i < 3; i++)
	{
		cout << vv.vec31[i][0] << endl;
	}
	cout << endl;
	cout << "1x3��������" << endl;
	vv.identityVec3();
	for (size_t i = 0; i < 3; i++)
	{
		cout << vv.vec3[0][i] << ", ";
	}
	cout << endl << endl;

	cout << "3x1��������" << endl;
	vv.identityVec3();
	for (size_t i = 0; i < 3; i++)
	{
		cout << vv.vec31[i][0] << endl;
	}

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤ�1x4 ���ͤѤѤѤѤѤѤѤѤѤѤ�" << endl;

	for (size_t i = 0; i < 4; i++)
	{
		cout << v4.vec4[0][i] << ", ";
	}
	cout << endl; cout << endl;
	cout << "1x4 ���� ��ġ" << endl;
	v4.transposeVec4();
	for (size_t i = 0; i < 4; i++)
	{
		cout << v4.vec41[i][0] << endl;
	}
	cout << endl;
	cout << "1x4��������" << endl;
	v4.identityVec4();
	for (size_t i = 0; i < 4; i++)
	{
		cout << v4.vec4[0][i] << ", ";
	}
	cout << endl << endl;

	cout << "4x1��������" << endl;
	v4.identityVec4();
	for (size_t i = 0; i < 4; i++)
	{
		cout << v4.vec41[i][0] << endl;
	}

	cout << "�ѤѤѤѤѤѤѤ�33 ��� x ��� �����ѤѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1}" << endl << "{2,2,2}" << endl << "{3,3,3}" << endl << "*" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "=" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << multimat.mat3[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "�ѤѤѤѤѤѤѤ�44 ��� x ��� �����ѤѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << endl <<"*" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "=" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << multimat4.mat4[i][j];
			if (j < 3) cout << " ";
		}
		cout << endl;
	}

	cout << "�ѤѤѤѤѤ�33��ġ��� x ��� ���� �ѤѤѤѤѤ�" << endl;
	cout << "{1,1,1}" << endl << "{2,2,2}" << endl << "{3,3,3}" << "<�ش� 33�迭 ��ġ�Ͽ��� ��" << endl << "*" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "=" << endl;
	mat3.transposeMatrix3();
	multimat = mat3 * mtmat3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << multimat.mat3[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "�ѤѤѤѤѤ�44��ġ��� x ��� ���� �ѤѤѤѤѤ�" << endl;
	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << "<�ش� 44�迭 ��ġ�Ͽ��� ��" << endl << "*" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" <<endl <<  "=" << endl;
	mat4.transposeMatrix4();
	multimat4 = mat4 * mtmat4;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << multimat4.mat4[i][j];
			if (j < 3) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	
	cout << "�ѤѤѤѤѤѤѤ�33��� 13���� �����ѤѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1}" << endl << "{2,2,2}" << endl << "{3,3,3}" << endl << "*" << endl << "{2,3,1}" << endl << "=" << endl;
	cout << p2.vec3[0][0] << ", ";
	cout << p2.vec3[0][1] << ", ";
	cout << p2.vec3[0][2] << endl << endl;

	cout << "�ѤѤѤѤѤѤѤ�44��� 14���� �����ѤѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << endl << "*" << endl << "{2,3,4,5}" << endl << "=" << endl;
	cout << p3.vec4[0][0] << ", ";
	cout << p3.vec4[0][1] << ", ";
	cout << p3.vec4[0][2] << ", ";
	cout << p3.vec4[0][3] << endl << endl;

	cout << "�ѤѤѤѤѤ�33��� 13��ġ���� �����ѤѤѤѤѤ�" << endl;
	cout << "{1,1,1}" << endl << "{2,2,2}" << endl << "{3,3,3}" << endl << "*" << endl << "{3,4,5}" << "�ش� ���͸� ��ġ�Ͽ��� ��" << endl << "=" << endl;
	vv.vec3[0][0] = 3;
	vv.vec3[0][1] = 4;
	vv.vec3[0][2] = 5;
	vv.transposeVec3();
	mat3.transposeMatrix3();
	vector3_2 trvec3 = vv * mat3;
	
	cout << vv.vec31[0][0] << ", ";
	cout << vv.vec31[1][0] << ", ";
	cout << vv.vec31[2][0] << endl << endl;

	cout << "�ѤѤѤѤѤ�44��� 14��ġ���� �����ѤѤѤѤѤ�" << endl;
	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << endl << "*" << endl << "{2,3,4,5}" << "�ش� ���͸� ��ġ�Ͽ��� ��" << endl << "=" << endl;
	vv4.vec4[0][0] = 2;
	vv4.vec4[0][1] = 3;
	vv4.vec4[0][2] = 4;
	vv4.vec4[0][3] = 5;
	vv4.transposeVec4_2();
	mat4.transposeMatrix4();

	vector4_2 trvec4 = vv4 * mat4;

	cout << vv4.vec41_2[0][0] << ", ";
	cout << vv4.vec41_2[1][0] << ", ";
	cout << vv4.vec41_2[2][0] << ", ";
	cout << vv4.vec41_2[3][0] << endl << endl;

	cout << "�ѤѤѤѤѤѤ�3x3 ��İ� ����, �����ѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1}" << endl << "{2,2,2}" << endl << "{3,3,3}" << endl << "+" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "=" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << plusmat3.mat3[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "{1,1,1}" << endl << "{2,2,2}" << endl << "{3,3,3}" << endl << "-" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "{1,2,3}" << endl << "=" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << minusmat3.mat3[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "�ѤѤѤѤѤѤ�4x4 ��İ� ����, �����ѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << endl << "+" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "=" << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << plusmat4.mat4[i][j];
			if (j < 3) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << endl << "-" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "{1,2,3,4}" << endl << "=" << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << minusmat4.mat4[i][j];
			if (j < 3) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "�ѤѤѤѤѤѤ�33��� ������ѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1}" << endl << "{2,2,2}" << endl << "{3,3,3}" << endl << "*" << endl << "2" << endl  << "=" << endl;
	mat3.constantmat3(2);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mat3.mat3[i][j];
			if (j < 2) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "�ѤѤѤѤѤѤ�44��� ������ѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << endl << endl << "*" << endl << "2" << endl << "=" << endl;
	mat4.constantmat4(2);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << mat4.mat4[i][j];
			if (j < 3) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "�ѤѤѤѤѤѤ�44��� ������ѤѤѤѤѤѤ�" << endl;
	cout << "{1,1,1,1}" << endl << "{2,2,2,2}" << endl << "{3,3,3,3}" << endl << "{4,4,4,4}" << endl << endl << "*" << endl << "2" << endl << "=" << endl;
	mat4.constantmat4(2);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << mat4.mat4[i][j];
			if (j < 3) cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "�ѤѤѤѤѤѤ�13���� ������ѤѤѤѤѤѤ�" << endl;
	cout << "{2,3,1}" << endl << endl << "*" << endl << "2" << endl << "=" << endl;
	v.vec3[0][0] = 2; v.vec3[0][1] = 3; v.vec3[0][2] = 1;
	v.constantvec3(2);

	cout << v.vec3[0][0] << " ";
	cout << v.vec3[0][1] << " ";
	cout << v.vec3[0][2];
	cout << endl;

	cout << "�ѤѤѤѤѤѤ�14���� ������ѤѤѤѤѤѤ�" << endl;
	cout << "{2,3,4,5}" << endl << endl << "*" << endl << "2" << endl << "=" << endl;
	v4.vec4[0][0] = 2; v4.vec4[0][1] = 3; v4.vec4[0][2] = 4; v4.vec4[0][3] = 5;
	v4.constantvec4(2);

	cout << v4.vec4[0][0] << " ";
	cout << v4.vec4[0][1] << " ";
	cout << v4.vec4[0][2] << " ";
	cout << v4.vec4[0][3];
	cout << endl;
}