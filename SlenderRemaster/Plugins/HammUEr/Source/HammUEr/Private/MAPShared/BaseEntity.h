// HammUEr
// (c) 2015-2019 Turfster / NT Entertainment

#pragma once
#include "VMFTri.h"
#include <string>
#include <vector>
#include <algorithm>
#include <map>

class MapBrush
{
public:
	int id = -1;
	bool containsNoDraw = false;
	bool containsDisplacements = false;
	std::string brushName = "none";
	std::vector<VMFTri*> triangles;
};

class BaseEntity
{
public:
	int id;

	MAPVector origin;
	std::string classname;
	std::string name;

	MAPVector angles;

	BaseEntity();
	~BaseEntity();

		std::map<std::string, std::string> GetOriginalData();
		void SetOriginalData(std::map<std::string, std::string> data);

	protected:
		std::map<std::string, std::string> originalData;
};


enum MapEntityType :int
{
	Unknown,
	FuncBox,
	Instance,
	FuncBrush,
	FuncStatic,
	LogicRelay,
	LogicAuto,
	PropStatic,
	PropDynamic,
	Path,
	Light,
	Spotlight,
	EnvironmentLight,
	Overlay
};

