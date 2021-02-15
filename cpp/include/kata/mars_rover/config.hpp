#ifndef MARS_ROVER_CONFIG
#define MARS_ROVER_CONFIG

#ifdef _MSC_VER
#ifdef MARS_ROVER_EXPORTS
#define MARS_ROVER_API __declspec(dllexport)
#else
#define MARS_ROVER_API __declspec(dllimport)
#endif
#else
#define MARS_ROVER_API
#endif

#endif // MARS_ROVER_CONFIG
