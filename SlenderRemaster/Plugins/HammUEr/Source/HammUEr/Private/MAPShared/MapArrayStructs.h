// HammUEr
// Copyright 2015-2019 Turfster / NT Entertainment
// All Rights Reserved.


// This code is held together with kitten whiskers and toothpicks.
// There's nothing to see or learn here.
// Seriously.
// Turn back.

#pragma once
#include <vector>
#include <algorithm>
#include "MAPVector.h"

struct MAPVectorArray
{
public:
	std::vector<MAPVector> data;
	void Add(MAPVector input);
	void AddUnique(MAPVector input);
	int Num();
	void Initialize(int numitems);
	MAPVector Get(int index);
	void ReplaceAt(int index, MAPVector newVector);
	void RemoveAt(int index);
	int FindApproximate(MAPVector input, float maxDistance);
	int Find(MAPVector input);
	void Empty();
};


struct MAPVector2DArray
{
public:
	std::vector<MAPVector2D> data;
	void Add(MAPVector2D input);
	int Num();
	void Initialize(int numitems);
	MAPVector2D Get(int index);
	void ReplaceAt(int index, MAPVector2D newVector);
	void RemoveAt(int index);
	int Find(MAPVector2D input);
	void Empty();
};


struct MAPFloatArray
{
public:
	std::vector<float> data;
	void Add(float input);
	int Num();
	float Get(int index);
	void ReplaceAt(int index, float newVector);
	void RemoveAt(int index);
	int Find(float input);
	void Empty();
};


struct MAPInt32Array
{
public:
	std::vector<int> data;
	void Add(int input);
	void AddUnique(int input);
	int Num();
	int Get(int index);
	void Append(MAPInt32Array input);
	void ReplaceAt(int index, int newVector);
	void RemoveAt(int index);
	int Find(int input);
	void Empty();
};