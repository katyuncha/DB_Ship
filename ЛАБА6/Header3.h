#pragma once
#include "Header.h"
#include "Header1.h"
#include "Header2.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//порожденный класс для грузового корабля
class cargoMil :public cargo, public military {
	string name;
	int id_num;
public:
	void add() override;
	void show() override;
};