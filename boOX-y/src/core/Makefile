all: debug

debug:	libCore_boOX_dbg.a 

optimized:	libCore_boOX_opt.a 

libCore_boOX_dbg.a:	types.o_dbg graph.o_dbg agent.o_dbg smtcbs.o_dbg cbs.o_dbg icts.o_dbg cnf.o_dbg cbsR.o_dbg smtcbsR.o_dbg 
	ar r libCore_boOX_dbg.a types.o_dbg graph.o_dbg agent.o_dbg smtcbs.o_dbg cbs.o_dbg icts.o_dbg cnf.o_dbg cbsR.o_dbg smtcbsR.o_dbg

types.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h types.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -otypes.o_dbg types.cpp

graph.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h graph.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -ograph.o_dbg graph.cpp

agent.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h agent.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -oagent.o_dbg agent.cpp

smtcbs.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h smtcbs.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -osmtcbs.o_dbg smtcbs.cpp

cbs.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h cbs.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -ocbs.o_dbg cbs.cpp

icts.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h icts.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -oicts.o_dbg icts.cpp

cnf.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h cnf.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -ocnf.o_dbg cnf.cpp

cbsR.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h cbsR.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -ocbsR.o_dbg cbsR.cpp

smtcbsR.o_dbg:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h smtcbsR.cpp
	g++ -Wall -Wextra -pedantic -Wno-long-long -Wno-unused-result -Wno-sign-compare -Wno-delete-non-virtual-dtor -g -std=c++0x -c -I../../src -I../../src/core -osmtcbsR.o_dbg smtcbsR.cpp


libCore_boOX_opt.a:	types.o_opt graph.o_opt agent.o_opt smtcbs.o_opt cbs.o_opt icts.o_opt cnf.o_opt cbsR.o_opt smtcbsR.o_opt 
	ar r libCore_boOX_opt.a types.o_opt graph.o_opt agent.o_opt smtcbs.o_opt cbs.o_opt icts.o_opt cnf.o_opt cbsR.o_opt smtcbsR.o_opt

types.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h types.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -otypes.o_opt types.cpp

graph.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h graph.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -ograph.o_opt graph.cpp

agent.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h agent.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -oagent.o_opt agent.cpp

smtcbs.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h smtcbs.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -osmtcbs.o_opt smtcbs.cpp

cbs.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h cbs.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -ocbs.o_opt cbs.cpp

icts.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h icts.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -oicts.o_opt icts.cpp

cnf.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h cnf.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -ocnf.o_opt cnf.cpp

cbsR.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h cbsR.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -ocbsR.o_opt cbsR.cpp

smtcbsR.o_opt:	../../src/version.h ../../src/defs.h ../../src/config.h ../../src/compile.h ../../src/result.h types.h graph.h agent.h smtcbs.h cbs.h icts.h cnf.h cbsR.h smtcbsR.h smtcbsR.cpp
	g++ -std=c++0x -c -w -O9 -mtune=native -I../../src -I../../src/core -osmtcbsR.o_opt smtcbsR.cpp


clean:
	rm -f -r *~ *.o_dbg *.o_opt *.a *.bak output*.txt
