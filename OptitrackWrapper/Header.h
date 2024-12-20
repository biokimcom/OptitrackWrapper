#pragma once

#ifdef OPTITRACK_EXPORTS
#define OPTITRACK_API __declspec(dllexport)
#else
#define OPTITRACK_API __declspec(dllimport)
#endif

// Initialize the motor
extern "C" OPTITRACK_API bool initNatNetClient();

extern "C" OPTITRACK_API int ConnetToMotive();

extern "C" OPTITRACK_API bool closeConnect();

extern "C" OPTITRACK_API int OutputFrameQueueToConsole(float* arr, int32_t nRBs, int32_t nMar, size_t arrSize);

extern "C" OPTITRACK_API void thread_sleep(int ms);

extern "C" OPTITRACK_API void updateArray(float* arr, int size);

extern "C" OPTITRACK_API void updateArray2D(float* arr, int rows, int clos);
