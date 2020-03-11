/****************************************************************************
 *
 * File			: DboTableInfo.h
 * Author		: Hong SungBock
 * Copyright	: (��)NTL
 * Date			: 2005. 11. 3
 * Abstract		: DBO Table Info for Client
 *****************************************************************************
 * Desc         : Ŭ���̾�Ʈ������ ���Ǵ� ���̺��� ������ �����Ѵ�
 *
 *****************************************************************************/

#pragma once

#include "NtlBitFlag.h"


///< ������� ������ ���� ȭ�鿡 ǥ�õ�
enum eLandMark_WorldMapType
{
	LT_NONE,
	LT_SECTION,
	LT_ZONE,
	LT_ZONESEC,
	LT_WORLD,
	LT_WORLDSEC,
	LT_WORLDZONE,
	LT_WORLDZONESEC,

	NUM_LT
};

enum eLandMark_WorldMapType_BitFlag
{
	LB_NONE				= MAKE_BIT_FLAG(LT_NONE),
	LB_SECTION			= MAKE_BIT_FLAG(LT_SECTION),
	LB_ZONE				= MAKE_BIT_FLAG(LT_ZONE),
	LB_ZONESEC			= MAKE_BIT_FLAG(LT_ZONESEC),
	LB_WORLD			= MAKE_BIT_FLAG(LT_WORLD),
	LB_WORLDSEC			= MAKE_BIT_FLAG(LT_WORLDSEC),
	LB_WORLDZONE		= MAKE_BIT_FLAG(LT_WORLDZONE),
	LB_WORLDZONESEC		= MAKE_BIT_FLAG(LT_WORLDZONESEC),

	NUM_LB
};

///< ����ʿ� ǥ�õǴ� ���
enum eLandMark_Display_Part
{
	LDT_NONE,
	LDT_NAME,
	LDT_ICON,
	LDT_NAMEICON,

	NUM_LDT
};

enum eLandMark_Display_Part_BitFlag
{
	LDBF_NONE			= MAKE_BIT_FLAG(LDT_NONE),
	LDBF_NAME			= MAKE_BIT_FLAG(LDT_NAME),
	LDBF_ICON			= MAKE_BIT_FLAG(LDT_ICON),
	LDBF_NAMEICON		= MAKE_BIT_FLAG(LDT_NAMEICON),

	NUM_LDBF
};


///< Ư���� ������� ǥ�õ� ���帶ũ �з�
enum eLandMark_SpecialType
{
	LANDMARK_SPECIAL_NORMAL,
	LANDMARK_SPECIAL_DUNGEON,

	NUM_LANDMARK_SPECIAL
};


enum eWorldMap_Type
{
	WORLDMAP_TYPE_WORLD,
	WORLDMAP_TYPE_ZONE,
	WORLDMAP_TYPE_CITY,
	WORLDMAP_TYPE_INSTANCE_MAP,

	NUM_WORLDMAP_TYPE,

	INVALID_WORLDMAP_TYPE = 0xff
};