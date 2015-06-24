# The OpenGL® Programming Guide 8th Edition

Examples of opengl-redbook building in [Visual Studio Community 2013](https://www.visualstudio.com/downloads/download-visual-studio-vs).

Install [glew](http://glew.sourceforge.net/) and [freeglut](http://freeglut.sourceforge.net/), you can compile them by yourself, or just use my [compiled version](https://github.com/pezy/opengl-redbook/releases/tag/tools).

- Copy header to `include/GL`.
- Copy lib to `lib`

## Note

1. use `glewExperimental = GL_TRUE;` before `glewInit()`.<sup>[1](http://openglbook.com/blog/glgenvertexarrays-access-violationsegfault-with-glew/)</sup>

2. when build release version by static library, maybe use `/NODEFAULTLIB:"libcmt.lib"` to avoid compile error.
