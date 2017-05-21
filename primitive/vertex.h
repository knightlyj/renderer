#pragma once

#include "math3d.h"
#include "transform.h"

struct Vertex {
	HomoPoint3 homoCoord;
	MyColor color;
	Vertex(){}
};