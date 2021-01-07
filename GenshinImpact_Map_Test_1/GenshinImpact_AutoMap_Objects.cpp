#include "GenshinImpact_AutoMap_Objects.h"

inline Location2d::Location2d() :Location2d(0, 0) {}

inline Location2d::Location2d(int _x, int _y) : x(_x), y(_y) {}

GenshinImpact_AutoMap_Object::GenshinImpact_AutoMap_Object()
{
	throw"No Klass Funcation.";
}

GenshinImpact_AutoMap_Object::~GenshinImpact_AutoMap_Object()
{
	delete p;
}

GenshinImpact_AutoMap_Object::GenshinImpact_AutoMap_Object(std::string str, int k,int max)
{
	if (k == 0)throw "Object Klass cannot be Zero.";
	if (max <= 0)throw "Object Number must not be less than or equal to Zero.";

	name = str;
	klass = k;
	number = max;
	p = new Location2d[max];
}

void GenshinImpact_AutoMap_Object::add(Location2d p0)
{
	p[order] = p0;
	order++;
}

void GenshinImpact_AutoMap_Object::add(int x, int y)
{
	p[order] = Location2d(x, y);
	order++;
}

//void GenshinImpact_AutoMap_Object::del(int n){}

Location2d GenshinImpact_AutoMap_Object::at(int n)
{
	if (n < 0)throw "The serial number shall not be less than Zero.";
	if (n >= number||n>=order)
	{
		throw"Out of range.";
	}
	else
	{
		return p[n];
	}
}

GenshinImpact_AutoMap_Objects::GenshinImpact_AutoMap_Objects()
{
	
}

GenshinImpact_AutoMap_Objects::~GenshinImpact_AutoMap_Objects()
{
}

void GenshinImpact_AutoMap_Objects::initCSD()
{
	if (isLock)throw"Cann't Change!";
	object = new GenshinImpact_AutoMap_Object("���͵�", 1, 3);
	

	(*object).add(1869,2046);
	(*object).add(1833, 1887);
	(*object).add(1506, 3300);
	isLock = true;
}

void GenshinImpact_AutoMap_Objects::initFHYS()
{
	if (isLock)throw"Cann't Change!";
	object = new GenshinImpact_AutoMap_Object("糺�����", 2, 80);//66+14

	std::vector<Location2d> pList;
	pList.push_back(Location2d(10,20));

	//��*object).add();
}

Location2d GenshinImpact_AutoMap_Objects::at(int n)
{
	return (*object).at(n);
}
