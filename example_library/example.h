
#ifdef example_library_EXPORTS
#define EXAMPLE_LIBRARY_API __declspec(dllexport)
#else
#define EXAMPLE_LIBRARY_API __declspec(dllimport)
#endif

EXAMPLE_LIBRARY_API int example_cpp();
EXAMPLE_LIBRARY_API int example_cu();