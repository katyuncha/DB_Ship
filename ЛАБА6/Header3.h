#pragma once
#include "cargo.h"
#include "ship.h"
#include "military.h"

using namespace std;

//����������� ����� ��� ��������� �������
class cargoMil :public cargo, public military {
	string name;
	int id_num;
public:
	void add() override;
	void show() override;
};