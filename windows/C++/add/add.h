#ifdef BUILD_ADD_DLL
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif

extern "C"
{
  EXPORT int Add(int, int);
}