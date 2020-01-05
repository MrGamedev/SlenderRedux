// HammUEr
// Copyright 2015-2019 Turfster / NT Entertainment
// All Rights Reserved.


// This code is held together with kitten whiskers and toothpicks.
// There's nothing to see or learn here.
// Seriously.
// Turn back.

#pragma once
#include "MAPNode.h"
#include "MAPSide.h"
#include "VMFTri.h"


class BaseSolid
{
public:
	int id;

	int groupId;
	
	int entityId;

	std::vector<MAPSide*> sides;
	std::vector<VMFTri*> triangles;
	std::vector<int> materialIds;
	
	MAPVector finalPosition;

	bool containsDisplacements = false;
	bool containsNoDraw = false;

	MAPVector newOrigin;

	bool dontRoundUVs = false;

	virtual void AddNewSide(MAPNode* data, int materialIndex, bool nodraw)
	{}
	virtual void BuildMesh(float convertUE, std::vector<int>& textWidths, std::vector<int>& textHeights, std::vector<bool>& textNDs)
	{}
	
	BaseSolid()
	{}

	virtual ~BaseSolid()
	{
	}

	BaseSolid(int numb);
};