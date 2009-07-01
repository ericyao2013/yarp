// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2007-2009 RobotCub Consortium
 * CopyPolicy: Released under the terms of the GNU GPL v2.0.
 * author Alessandro Scalzo alessandro@liralab.it
 */

/**
 * @class Run
 *
 * @brief Run
 *
 * yarp run provides a server able to run/kill commands on a remote machine.
 * 
 * To run a server on a machine:             $ yarp run --server SERVERPORT
 *
 * To run a command by the remote server:    $ yarp run --on SERVERPORT --as TAG [--stdio SERVERPORT] --cmd COMMAND [ARGLIST] [--workdir WORKDIR]
 * 
 * To kill a command:						 $ yarp run --on SERVERPORT --kill TAG
 *
 * To terminate a command:				     $ yarp run --on SERVERPORT --sigterm TAG
 *
 * To kill all commands on a server:         $ yarp run --on SERVERPORT --killall
 * 
 * To clean shutdown a server:				 $ yarp run --on SERVERPORT --exit
 *
 * To get a report from a server             $ yarp run --on SERVERPORT --ps
 */

#ifndef _YARP2_RUN_
#define _YARP2_RUN_

#ifndef DOXYGEN_SHOULD_SKIP_THIS

//#include <ace/config.h>
//#include <ace/OS.h>
//#include <ace/Process.h>
//#include <ace/Vector_T.h>
#include <stdio.h>
#include <list>
#include <string>
#include <yarp/os/impl/Companion.h>
#include <yarp/os/impl/String.h>
#include <yarp/os/all.h>

namespace yarp {
  namespace os {
    class Run;
  }
}

using namespace yarp::os::impl;
using namespace yarp::os;

// watch out for ACE randomly redefining main, depending on configuration
#ifdef main
#undef main
#endif

class YarpRunInfoVector;

/**
 * Starting and stopping processes.
 */
class yarp::os::Run 
{
public:
	// API
	static int start(const String &node, Property &command, String &keyv);
	static int sigterm(const String &node, const String &keyv);
	static int sigterm(const String &node);
	static int kill(const String &node, const String &keyv,int s);
	static int ps(const String &node,std::list<std::string> &processes);
	static bool isRunning(const String &node, String &keyv);

	////////////////////////////////////////
    static int main(int argc, char *argv[]);
	static Port *pServerPort;
	static YarpRunInfoVector m_ProcessVector;

	#if defined(WIN32) || defined(WIN64)
	static void GetHandles(HANDLE* &lpHandles,DWORD &nCount);
	static HANDLE hZombieHunter;
	static HANDLE *aHandlesVector;
	#else
	static void CleanZombies(int *pZombies,int nZombies);
	#endif

protected:
	static void Help(const char* msg="");
	static int Server();
	static int SendToServer(Property& config);
	static Bottle SendMsg(Bottle& msg,ConstString target);
	static int ExecuteCmdAndStdio(Bottle& msg);
	static int ExecuteCmd(Bottle& msg);
	static int UserStdio(Bottle& msg);

	static inline bool IS_PARENT_OF(int pid){ return pid>0; }
	static inline bool IS_NEW_PROCESS(int pid){ return !pid; }
	static inline bool IS_INVALID(int pid){ return pid<0; }

	static String m_PortName;
	static YarpRunInfoVector m_StdioVector;
};

#endif /*DOXYGEN_SHOULD_SKIP_THIS*/

#endif
