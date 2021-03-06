/*
 * Copyright (C) 2015 Istituto Italiano di Tecnologia (IIT)
 * Authors: Marco Randazzo <marco.randazzo@iit.it>
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 */

#include "yarp/dev/ControlBoardInterfacesImpl.h"
#include <yarp/dev/ControlBoardHelper.h>

#include <cstdio>
using namespace yarp::dev;

////////////////////////
// Encoder Interface Timed Implementation
ImplementRemoteVariables::ImplementRemoteVariables(IRemoteVariablesRaw *y)
{
    ivar=y;
    helper = nullptr;
    temp1=nullptr;
    temp2=nullptr;
}

ImplementRemoteVariables::~ImplementRemoteVariables()
{
    uninitialize();
}

bool ImplementRemoteVariables::initialize(int size, const int *amap)
{
    if (helper!=nullptr)
        return false;

    helper=(void *)(new ControlBoardHelper(size, amap, nullptr, 0, 0));
    yAssert (helper != nullptr);
    temp1=new double [size];
    yAssert (temp1 != nullptr);
    temp2=new double [size];
    yAssert (temp2 != nullptr);
    return true;
}

/**
* Clean up internal data and memory.
* @return true if uninitialization is executed, false otherwise.
*/
bool ImplementRemoteVariables::uninitialize()
{
    if (helper!=nullptr)
    {
        delete castToMapper(helper);
        helper=nullptr;
    }

    checkAndDestroy(temp1);
    checkAndDestroy(temp2);

    return true;
}

bool ImplementRemoteVariables::getRemoteVariable(yarp::os::ConstString key, yarp::os::Bottle& val)
{
    bool ret;
    ret = ivar->getRemoteVariableRaw(key, val);
    return ret;
}

bool ImplementRemoteVariables::setRemoteVariable(yarp::os::ConstString key, const yarp::os::Bottle& val)
{
    bool ret;
    ret = ivar->setRemoteVariableRaw(key, val);
    return ret;
}


bool ImplementRemoteVariables::getRemoteVariablesList(yarp::os::Bottle* listOfKeys)
{
    bool ret;
    ret = ivar->getRemoteVariablesListRaw(listOfKeys);
    return ret;
}
