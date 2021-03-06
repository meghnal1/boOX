/*============================================================================*/
/*                                                                            */
/*                                                                            */
/*                              boOX 0_iskra-161                              */
/*                                                                            */
/*                      (C) Copyright 2018 Pavel Surynek                      */
/*                                                                            */
/*          pavel.surynek@fit.cvut.cz | <pavel.surynek@fit.cvut.cz>           */
/*        http://users.fit.cvut.cz/surynek | <http://www.surynek.com>         */
/*                                                                            */
/*============================================================================*/
/* result.h / 0_iskra-161                                                     */
/*----------------------------------------------------------------------------*/

#ifndef __RESULT_H__
#define __RESULT_H__

#include <limits.h>

#include "config.h"
#include "compile.h"


/*----------------------------------------------------------------------------*/

namespace boOX
{

typedef int sResult;


/*----------------------------------------------------------------------------*/
// Common results

enum sStandard_Result
{
    sRESULT_SUCCESS    =  0,
    sRESULT_INFO       =  1,
    sRESULT_ERROR      = -1,
    sRESULT_UNDEFINED  = INT_MAX
};


enum sType_Result
{
    sRESULT_TYPE__INFO               =  10000,
    sRESULT_TYPE__ERROR              = -10000,
    sRESULT_TYPE__INT_8_FPRN_ERROR   = (sRESULT_TYPE__ERROR -  1),
    sRESULT_TYPE__UINT_8_FPRN_ERROR  = (sRESULT_TYPE__ERROR -  2),
    sRESULT_TYPE__INT_16_FPRN_ERROR  = (sRESULT_TYPE__ERROR -  3),
    sRESULT_TYPE__UINT_16_FPRN_ERROR = (sRESULT_TYPE__ERROR -  4),
    sRESULT_TYPE__INT_32_FPRN_ERROR  = (sRESULT_TYPE__ERROR -  5),
    sRESULT_TYPE__UINT_32_FPRN_ERROR = (sRESULT_TYPE__ERROR -  6),
    sRESULT_TYPE__INT_64_FPRN_ERROR  = (sRESULT_TYPE__ERROR -  7),
    sRESULT_TYPE__UINT_64_FPRN_ERROR = (sRESULT_TYPE__ERROR -  8),
    sRESULT_TYPE__BOOL_FPRN_ERROR    = (sRESULT_TYPE__ERROR -  9),
    sRESULT_TYPE__CHAR_FPRN_ERROR    = (sRESULT_TYPE__ERROR - 10),
    sRESULT_TYPE__WCHAR_FPRN_ERROR   = (sRESULT_TYPE__ERROR - 11),
    sRESULT_TYPE__STRING_FPRN_ERROR  = (sRESULT_TYPE__ERROR - 12),
    sRESULT_TYPE__PHRASE_FPRN_ERROR  = (sRESULT_TYPE__ERROR - 13),
    sRESULT_TYPE__FLOAT_FPRN_ERROR   = (sRESULT_TYPE__ERROR - 14),
    sRESULT_TYPE__DOUBLE_FPRN_ERROR  = (sRESULT_TYPE__ERROR - 15),
    sRESULT_TYPE__POINTER_FPRN_ERROR = (sRESULT_TYPE__ERROR - 16),
    sRESULT_TYPE__BYTES_FPRN_ERROR   = (sRESULT_TYPE__ERROR - 17),
    sRESULT_TYPE__INT_8_SCAN_ERROR   = (sRESULT_TYPE__ERROR - 18),
    sRESULT_TYPE__UINT_8_SCAN_ERROR  = (sRESULT_TYPE__ERROR - 19),
    sRESULT_TYPE__INT_16_SCAN_ERROR  = (sRESULT_TYPE__ERROR - 20),
    sRESULT_TYPE__UINT_16_SCAN_ERROR = (sRESULT_TYPE__ERROR - 21),
    sRESULT_TYPE__INT_32_SCAN_ERROR  = (sRESULT_TYPE__ERROR - 22),
    sRESULT_TYPE__UINT_32_SCAN_ERROR = (sRESULT_TYPE__ERROR - 23),
    sRESULT_TYPE__INT_64_SCAN_ERROR  = (sRESULT_TYPE__ERROR - 24),
    sRESULT_TYPE__UINT_64_SCAN_ERROR = (sRESULT_TYPE__ERROR - 25),
    sRESULT_TYPE__BOOL_SCAN_ERROR    = (sRESULT_TYPE__ERROR - 26),
    sRESULT_TYPE__CHAR_SCAN_ERROR    = (sRESULT_TYPE__ERROR - 27),
    sRESULT_TYPE__WCHAR_SCAN_ERROR   = (sRESULT_TYPE__ERROR - 28),
    sRESULT_TYPE__STRING_SCAN_ERROR  = (sRESULT_TYPE__ERROR - 29),
    sRESULT_TYPE__PHRASE_SCAN_ERROR  = (sRESULT_TYPE__ERROR - 30),
    sRESULT_TYPE__FLOAT_SCAN_ERROR   = (sRESULT_TYPE__ERROR - 31),
    sRESULT_TYPE__DOUBLE_SCAN_ERROR  = (sRESULT_TYPE__ERROR - 32)
};


enum sUndirectedGraph_Result
{
    sUNDIRECTED_GRAPH_INFO       =  11000,
    sUNDIRECTED_GRAPH_ERROR      = -11000,
    sUNDIRECTED_GRAPH_OPEN_ERROR = (sUNDIRECTED_GRAPH_ERROR - 1)
};


enum sAgentConfiguration_Result
{
    sAGENT_CONFIGURATION_INFO       =  12000,
    sAGENT_CONFIGURATION_ERROR      = -12000,
    sAGENT_CONFIGURATION_OPEN_ERROR = (sAGENT_CONFIGURATION_ERROR - 1),
    sAGENT_CONFIGURATION_SEEK_ERROR = (sAGENT_CONFIGURATION_ERROR - 2)
};


enum sAgentSolution_Result
{
    sAGENT_SOLUTION_INFO       =  13000,
    sAGENT_SOLUTION_ERROR      = -13000,
    sAGENT_SOLUTION_OPEN_ERROR = (sAGENT_SOLUTION_ERROR - 1)
};


enum sAgentInstance_Result
{
    sAGENT_INSTANCE_INFO                =  14000,
    sAGENT_INSTANCE_ERROR               = -14000,
    sAGENT_INSTANCE_OPEN_ERROR          = (sAGENT_INSTANCE_ERROR - 1),
    sAGENT_INSTANCE_PDDL_OPEN_ERROR     = (sAGENT_INSTANCE_ERROR - 2),
    sAGENT_INSTANCE_CPF_OPEN_ERROR      = (sAGENT_INSTANCE_ERROR - 3),
    sAGENT_INSTANCE_BGU_OPEN_ERROR      = (sAGENT_INSTANCE_ERROR - 4),
    sAGENT_INSTANCE_USC_MAP_OPEN_ERROR  = (sAGENT_INSTANCE_ERROR - 5),
    sAGENT_INSTANCE_USC_AGNT_OPEN_ERROR = (sAGENT_INSTANCE_ERROR - 6),    
    sAGENT_INSTANCE_DIBOX_OPEN_ERROR    = (sAGENT_INSTANCE_ERROR - 7),    
    sAGENT_INSTANCE_CNF_OPEN_ERROR      = (sAGENT_INSTANCE_ERROR - 8),
    sAGENT_INSTANCE_SEEK_ERROR          = (sAGENT_INSTANCE_ERROR - 9)
};


enum sGridgenProgram_Result
{
    sGRIDGEN_PROGRAM_INFO                         =  100000,
    sGRIDGEN_PROGRAM_ERROR                        = -100000,
    sGRIDGEN_PROGRAM_UNRECOGNIZED_PARAMETER_ERROR = (sGRIDGEN_PROGRAM_ERROR - 1)
};


enum sRandgenProgram_Result
{
    sRANDGEN_PROGRAM_INFO                         =  110000,
    sRANDGEN_PROGRAM_ERROR                        = -110000,
    sRANDGEN_PROGRAM_UNRECOGNIZED_PARAMETER_ERROR = (sRANDGEN_PROGRAM_ERROR - 1)
};


enum sStargenProgram_Result
{
    sSTARGEN_PROGRAM_INFO                         =  120000,
    sSTARGEN_PROGRAM_ERROR                        = -120000,
    sSTARGEN_PROGRAM_UNRECOGNIZED_PARAMETER_ERROR = (sSTARGEN_PROGRAM_ERROR - 1)
};


enum sCliquegenProgram_Result
{
    sCLIQUEGEN_PROGRAM_INFO                         =  130000,
    sCLIQUEGEN_PROGRAM_ERROR                        = -130000,
    sCLIQUEGEN_PROGRAM_UNRECOGNIZED_PARAMETER_ERROR = (sCLIQUEGEN_PROGRAM_ERROR - 1)
};


enum sPathgenProgram_Result
{
    sPATHGEN_PROGRAM_INFO                         =  140000,
    sPATHGEN_PROGRAM_ERROR                        = -140000,
    sPATHGEN_PROGRAM_UNRECOGNIZED_PARAMETER_ERROR = (sPATHGEN_PROGRAM_ERROR - 1)
};


enum sTokenSwappingSolverProgram_Result
{
    sTSWAP_SOLVER_PROGRAM_INFO                         =  150000,
    sTSWAP_SOLVER_PROGRAM_ERROR                        = -150000,
    sTSWAP_SOLVER_PROGRAM_UNRECOGNIZED_PARAMETER_ERROR = (sTSWAP_SOLVER_PROGRAM_ERROR - 1)
};


enum sMultiAgentPathfindingSolverProgram_Result
{
    sMAPF_SOLVER_PROGRAM_INFO                         =  160000,
    sMAPF_SOLVER_PROGRAM_ERROR                        = -160000,
    sMAPF_SOLVER_PROGRAM_UNRECOGNIZED_PARAMETER_ERROR = (sMAPF_SOLVER_PROGRAM_ERROR - 1)
};



/*----------------------------------------------------------------------------*/

#define sFAILED(result)    ((result) < sRESULT_SUCCESS)
#define sSUCCEEDED(result) ((result) >= sRESULT_SUCCESS)
#define sINFORMED(result)  ((result) > sRESULT_SUCCESS) 

#define sCHECK_RESULT(command)                                                           \
    {                                                                                    \
        sResult result;                                                                  \
        if (sFAILED(result = (command)))				                 \
        {                                                                                \
            return result;                                                               \
        }                                                                                \
    }


#define sCHECK_INT(command, result)                                                      \
    {                                                                                    \
	if ((command) < 0)                                                               \
	{                                                                                \
	    return result;                                                               \
	}                                                                                \
    }


/*----------------------------------------------------------------------------*/

#ifdef sDEBUG
  #define sASSERT(condition)                                                             \
    {                                                                                    \
      if (!(condition))							                 \
      {                                                                                  \
        printf("sASSERT: assertion failed (file: %s, line:%d).\n", __FILE__, __LINE__);  \
	fflush(NULL);                                                                    \
	exit(-1);						   	                 \
      }                                                                                  \
    }
#else
  #define sASSERT(condition)
#endif /* DEBUG */


#ifdef sDEBUG
  #define sASSERT_MESSAGE(condition, message)					         \
    {                                                                                    \
      if (!(condition))							                 \
      {                                                                                  \
        printf("sASSERT: assertion failed (file: %s, line:%d).\n", __FILE__, __LINE__);  \
	printf("Assertion message: %s\n", (message));			                 \
	fflush(NULL);                                                                    \
	exit(-1);						   	                 \
      }                                                                                  \
    }
#else
  #define sASSERT_MESSAGE(condition, message)
#endif /* DEBUG */


/*----------------------------------------------------------------------------*/

#ifdef sCONSISTENCY
  #define sTEST(condition)				                                                          \
    {                                                                                                             \
      sResult result;							                                          \
      if ((result = (condition)) != sRESULT_SUCCESS)			                                          \
      {                                                                                                           \
	printf("sTEST: consistency test failed (file: %s, line:%d, result: %d).\n", __FILE__, __LINE__, result);  \
	fflush(NULL);                                                                                             \
	exit(-1);						   	                                          \
      }                                                                                                           \
    }
#else
  #define sTEST_MESSAGE(condition, message)
#endif /* CONSISTENCY */


#ifdef sCONSISTENCY
  #define sTEST_MESSAGE(condition, message)				                                          \
    {                                                                                                             \
      sResult result;							                                          \
      if ((result = (condition)) != sRESULT_SUCCESS)		       	                                          \
      {                                                                                                           \
	printf("sTEST: consistency test failed (file: %s, line:%d, result: %d).\n", __FILE__, __LINE__, result);  \
	printf("Test message: %s\n", (message));			                                          \
	fflush(NULL);                                                                                             \
	exit(-1);						   	                                          \
      }                                                                                                           \
    }
#else
  #define sTEST_MESSAGE(condition, message)
#endif /* CONSISTENCY */


/*----------------------------------------------------------------------------*/

#ifdef sTHOROUGH_CONSISTENCY
  #define sTHOROUGH_TEST(condition)				                                                                    \
    {                                                                                                                               \
      sResult result;							                                                            \
      if ((result = (condition)) != sRESULT_SUCCESS)			                                                            \
      {                                                                                                                             \
	printf("sTHOROUGH_TEST: thorough consistency test failed (file: %s, line:%d, result: %d).\n", __FILE__, __LINE__, result);  \
	fflush(NULL);                                                                                                               \
	exit(-1);						   	                                                            \
      }                                                                                                                             \
    }
#else
  #define sTHOROUGH_TEST_MESSAGE(condition, message)
#endif /* THOROUGH_CONSISTENCY */


#ifdef sTHOROUGH_CONSISTENCY
  #define sTHOROUGH_TEST_MESSAGE(condition, message)				                                                    \
    {                                                                                                                               \
      sResult result;							                                                            \
      if ((result = (condition)) != sRESULT_SUCCESS)		       	                                                            \
      {                                                                                                                             \
	printf("sTHOROUGH_TEST: thorough consistency test failed (file: %s, line:%d, result: %d).\n", __FILE__, __LINE__, result);  \
	printf("Test message: %s\n", (message));			                                                            \
	fflush(NULL);                                                                                                               \
	exit(-1);						   	                                                            \
      }                                                                                                                             \
    }
#else
  #define sTHOROUGH_TEST_MESSAGE(condition, message)
#endif /* THOROUGH_CONSISTENCY */


/*----------------------------------------------------------------------------*/

#ifdef sDEEP_CONSISTENCY
  #define sDEEP_TEST(condition)				                                                                    \
    {                                                                                                                       \
      sResult result;							                                                    \
      if ((result = (condition)) != sRESULT_SUCCESS)			                                                    \
      {                                                                                                                     \
	printf("sDEEP_TEST: deep consistency test failed (file: %s, line:%d, result: %d).\n", __FILE__, __LINE__, result);  \
	fflush(NULL);                                                                                                       \
	exit(-1);						   	                                                    \
      }                                                                                                                     \
    }
#else
  #define sDEEP_TEST_MESSAGE(condition, message)
#endif /* DEEP_CONSISTENCY */


#ifdef sDEEP_CONSISTENCY
  #define sDEEP_TEST_MESSAGE(condition, message)				                                            \
    {                                                                                                                       \
      sResult result;							                                                    \
      if ((result = (condition)) != sRESULT_SUCCESS)		       	                                                    \
      {                                                                                                                     \
	printf("sDEEP_TEST: deep consistency test failed (file: %s, line:%d, result: %d).\n", __FILE__, __LINE__, result);  \
	printf("Test message: %s\n", (message));			                                                    \
	fflush(NULL);                                                                                                       \
	exit(-1);						   	                                                    \
      }                                                                                                                     \
    }
#else
  #define sDEEP_TEST_MESSAGE(condition, message)
#endif /* DEEP_CONSISTENCY */


/*----------------------------------------------------------------------------*/

} // namespace boOX

#endif /* __RESULT_H__ */

