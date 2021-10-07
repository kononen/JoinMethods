#pragma once

#include <vector>

class Matrix
{
	public:
		std::vector<std::vector<int>> matrix; // �������� �������
		//std::vector<std::vector<int>> baseDataMatrix; // ������� � ��������� �������, ������� �� ��������. ����� ��� ����������� ����� � ������ ������ �������� ����������
		std::vector<int> horzHeading; // ������ � ����������� � ������ ��������� �����, ������� ������ � ���� ������� ���� �����
		std::vector<int> vertHeading; // --\\-- ��������� �������� --\\--
		int allbound = 0;// ����� ����� ����

		Matrix();// ����������� �� ���������

		Matrix( int min, int max, int dim ); // ����������� �������������

		Matrix(const Matrix& otherM);// ����������� �����������

		void operator=(const Matrix& otherM); // �������� ���������

		//void equalityFirstData(); // � baseDataMatrix ����������� �������� matrix �

		void printM(); // ������� �������

		int minInRow(const int& rowNum);// ������� ������� �� ������
		int minInCol(const int& colNum);// ������� ������� �� �������
		
		int fsummaVertMin(); // ���������� ����� ������������ ���������
		int fsummaHorzMin(); // ���������� ����� �������������� ��������� 
		int lowerBound(); // ����� ��������� �� ������� � �� ��������

		void rowReduction(const int& rowNum, const int& reductionNumber); // �������� �� ���� ��������� ������ ����� rowNum 
		void colReduction(const int& colNum, const int& reductionNumber); // �������� �� ���� ��������� ������� ����� colNum

		void globalRowReduction(); // �������� �� ���� ����� �������� �� ��� ������� 
		void globalColReduction(); // �������� �� ���� �������� �������� �� ��� ��������

		void deleteRow(const int& rowNum); // ������� ������
		void deleteCol(const int& colNum); // ������� �������

	private:

		int chVertMin = 0; // ����� ��������� �� �������
		int chHorzMin = 0; // ����� ��������� �� ��������
		void catchBlock_(int& errorCode); // ����� ����������
};

