#pragma once
#include <map>
#include <list>
#include "Matrix.h"

class FrizeStep
{
public:
	bool active; // �������� ��� ���������� ����: ��������, ����� ����� ��������, �� ���� waylength = min;
	std::map<int, int> stepWayPair; // ����, �������� ������������� ��� �����, ��� ������� 
	//int waylenght; // ����� ������� ��������
	Matrix matrixStepCity; // ������� ������� ���� 
	std::list<std::pair<int, int>> stepfiltrWayPair;// ������ ��� ����������� (��� ������������ ��������� ���������).

public:
	/*void AddNextCity( ... );
	void CloneFrizeNegateCity();*/
	
	void SwapActive(FrizeStep& newActive);
};

