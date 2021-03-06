//**********************************************************************
//
// Copyright (c) 2006
// PathEngine
// Lyon, France
//
// All Rights Reserved
//
//**********************************************************************

#include "iContentChunkInstance_Wrapper.h"
#include "Logger.h"
#include "WrapperManagement.h"
#include "AllWrappers.h"
void
iContentChunkInstance_Wrapper::destroy()
{
    unsigned long queryCount = gLogger.methodEntry(11, 0, (void*)this);
    gLogger.methodEntry_Completed();
    _target->destroy();
    gLogger.methodExit(11, 0, queryCount, (void*)this);
    gLogger.methodExit_Completed();
}

iContentChunk*
iContentChunkInstance_Wrapper::getContentChunk() const
{
    unsigned long queryCount = gLogger.methodEntry(11, 1, (void*)this);
    gLogger.methodEntry_Completed();
    iContentChunk* result = _target->getContentChunk();
    ExtractWrapper<iContentChunk_Wrapper>(result);
    gLogger.methodExit(11, 1, queryCount, (void*)this);
    gLogger.log((void*)result);
    gLogger.methodExit_Completed();
    return result;
}

const iFaceVertexMesh*
iContentChunkInstance_Wrapper::getGroundPointer() const
{
    unsigned long queryCount = gLogger.methodEntry(11, 2, (void*)this);
    gLogger.methodEntry_Completed();
    const iFaceVertexMesh* result = _target->getGroundPointer();
    gLogger.methodExit(11, 2, queryCount, (void*)this);
    gLogger.methodExit_Completed();
    return result;
}

const iAnchorsAndPinnedShapes*
iContentChunkInstance_Wrapper::getAnchorsAndShapesPointer() const
{
    unsigned long queryCount = gLogger.methodEntry(11, 3, (void*)this);
    gLogger.methodEntry_Completed();
    const iAnchorsAndPinnedShapes* result = _target->getAnchorsAndShapesPointer();
    gLogger.methodExit(11, 3, queryCount, (void*)this);
    gLogger.methodExit_Completed();
    return result;
}

void
iContentChunkInstance_Wrapper::addAnchorsAndShapes(iMesh* mesh, const char* idPrefix, long numberOfTerrainLayers) const
{
    unsigned long queryCount = gLogger.methodEntry(11, 4, (void*)this);
    gLogger.log((void*)mesh);
    gLogger.log(idPrefix);
    gLogger.log(numberOfTerrainLayers);
    gLogger.methodEntry_Completed();
    _target->addAnchorsAndShapes(ExtractWrapped<iMesh_Wrapper>(mesh), idPrefix, numberOfTerrainLayers);
    gLogger.methodExit(11, 4, queryCount, (void*)this);
    gLogger.methodExit_Completed();
}

void
iContentChunkInstance_Wrapper::getHorizontalRange(cHorizontalRange& result) const
{
    unsigned long queryCount = gLogger.methodEntry(11, 5, (void*)this);
    gLogger.methodEntry_Completed();
    _target->getHorizontalRange(result);
    gLogger.methodExit(11, 5, queryCount, (void*)this);
    gLogger.log(result);
    gLogger.methodExit_Completed();
}

long
iContentChunkInstance_Wrapper::numberOfConnectingEdges() const
{
    unsigned long queryCount = gLogger.methodEntry(11, 6, (void*)this);
    gLogger.methodEntry_Completed();
    long result = _target->numberOfConnectingEdges();
    gLogger.methodExit(11, 6, queryCount, (void*)this);
    gLogger.log(result);
    gLogger.methodExit_Completed();
    return result;
}

void
iContentChunkInstance_Wrapper::getConnectingEdgeGeometry(long connectingEdgeIndex, long& startX, long& startY, float& startZ, long& endX, long& endY, float& endZ) const
{
    unsigned long queryCount = gLogger.methodEntry(11, 7, (void*)this);
    gLogger.log(connectingEdgeIndex);
    gLogger.methodEntry_Completed();
    _target->getConnectingEdgeGeometry(connectingEdgeIndex, startX, startY, startZ, endX, endY, endZ);
    gLogger.methodExit(11, 7, queryCount, (void*)this);
    gLogger.log(startX);
    gLogger.log(startY);
    gLogger.log(startZ);
    gLogger.log(endX);
    gLogger.log(endY);
    gLogger.log(endZ);
    gLogger.methodExit_Completed();
}

bool
iContentChunkInstance_Wrapper::edgesCanConnect(long connectingEdgeOnThis, iContentChunkInstance* targetInstance, long connectingEdgeOnTarget) const
{
    unsigned long queryCount = gLogger.methodEntry(11, 8, (void*)this);
    gLogger.log(connectingEdgeOnThis);
    gLogger.log((void*)targetInstance);
    gLogger.log(connectingEdgeOnTarget);
    gLogger.methodEntry_Completed();
    bool result = _target->edgesCanConnect(connectingEdgeOnThis, ExtractWrapped<iContentChunkInstance_Wrapper>(targetInstance), connectingEdgeOnTarget);
    gLogger.methodExit(11, 8, queryCount, (void*)this);
    gLogger.log(result);
    gLogger.methodExit_Completed();
    return result;
}

void
iContentChunkInstance_Wrapper::makeEdgeConnection(long connectingEdgeOnThis, iContentChunkInstance* targetInstance, long connectingEdgeOnTarget) const
{
    unsigned long queryCount = gLogger.methodEntry(11, 9, (void*)this);
    gLogger.log(connectingEdgeOnThis);
    gLogger.log((void*)targetInstance);
    gLogger.log(connectingEdgeOnTarget);
    gLogger.methodEntry_Completed();
    _target->makeEdgeConnection(connectingEdgeOnThis, ExtractWrapped<iContentChunkInstance_Wrapper>(targetInstance), connectingEdgeOnTarget);
    gLogger.methodExit(11, 9, queryCount, (void*)this);
    gLogger.methodExit_Completed();
}
void iContentChunkInstance_Wrapper::destroy_APIObjectWrapper()
{
    delete this;
}
