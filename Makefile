# ---------------------------------------------------------------------------------------
# FILE NAME:	Makefile
# 
# DESCRIPTION: 	Makefile for a C++ Program
#
# PURPOSE:		Build a program executable on Linux
# 
# MODIFICATION HISTORY: 
#
# Author		 		   Date				Modifications(s)
# ---------		 		----------			------------------
# Conner Fissell		09-18-2019			Version 1
# Conner Fissell		09-23-2019			Version 2 - Modified for .h files
# Conner Fissell		02-08-2020			Version 3 - Modified for CS302 HW 1
# ________________________________________________________________________________________

#	This is our original generic makefile command that will build
#	any stand alone ".cpp" source file
#	Usage: e.g. make hello
#.cpp:
#	g++ -o $* $*.cpp -std=c++11

#	Next, these will build the executables that have dependencies on .h files
#	Usage: e.g. make -f Makefile2 sales_struct_v14 

#	cust_ports_v1: cust_ports_v1.h


#	This will build the object files required for "LinkList_driver"
#	and link them into a single executable.
#	Usage:	make linked_list_demo

LinkList_driver: LinkList.o LinkList_driver.o
	g++ -o $@ $@.o LinkList.o -std=c++11

#	This will build the object file required for "LinkList_driver"
#	which is dependent on link_list.h

%.o: %.cpp link_list.cpp
	g++ -c $< -std=c++11
