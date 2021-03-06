# Copyright: (C) 2009 RobotCub Consortium
# Authors: Paul Fitzpatrick, Giacomo Spigler
# CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT

cmake_minimum_required(VERSION 3.0)

find_package(YARP REQUIRED)

add_executable(grabber_client grabber_client.cpp)
target_link_libraries(grabber_client ${YARP_LIBRARIES})

add_executable(grabber_client_alternate grabber_client_alternate.cpp)
target_link_libraries(grabber_client_alternate ${YARP_LIBRARIES})

add_executable(fake_grabber fake_grabber.cpp FakeFrameGrabber.h)
target_link_libraries(fake_grabber ${YARP_LIBRARIES})

add_executable(fake_grabber_net fake_grabber_net.cpp FakeFrameGrabber.h)
target_link_libraries(fake_grabber_net ${YARP_LIBRARIES})

add_executable(fake_grabber_net2 fake_grabber_net2.cpp FakeFrameGrabber2.h)
target_link_libraries(fake_grabber_net2 ${YARP_LIBRARIES})

add_executable(file_grabber file_grabber.cpp FileFrameGrabber.h)
target_link_libraries(file_grabber ${YARP_LIBRARIES})

add_executable(file_grabber_net file_grabber_net.cpp FileFrameGrabber.h)
target_link_libraries(file_grabber_net ${YARP_LIBRARIES})

add_executable(audio_test audio_test.cpp)
target_link_libraries(audio_test ${YARP_LIBRARIES})

add_executable(double_server double_server.cpp)
target_link_libraries(double_server ${YARP_LIBRARIES})

add_executable(fake_motor fake_motor.cpp)
target_link_libraries(fake_motor ${YARP_LIBRARIES})

add_executable(simple_motor_client simple_motor_client.cpp)
target_link_libraries(simple_motor_client ${YARP_LIBRARIES})

add_executable(motortest motortest.cpp)
target_link_libraries(motortest ${YARP_LIBRARIES})

add_subdirectory(RGBD)
