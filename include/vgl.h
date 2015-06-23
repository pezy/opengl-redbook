#ifndef __VGL_H__
#define __VGL_H__

#define GLEW_STATIC

#include "GL/glew.h"

#ifdef _MSC_VER
#   ifdef _DEBUG
#       pragma comment(lib, "glew32sd.lib")
#   else
#       pragma comment(lib, "glew32s.lib")
#   endif
#endif

#define FREEGLUT_STATIC

#include "GL/freeglut.h"

#define BUFFER_OFFSET(x)  ((const void*) (x))

#endif /* __VGL_H__ */
