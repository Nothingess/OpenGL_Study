# VSCode����OpenGL����

1.��������C++�����������õĿ�������һ����

https://github.com/hu243285237/Cpp_Study/tree/master/VSCodeConfigCpp

2.�������ǿ���OpenGL�Ĺ��ߣ�������ʹ�õ�GLFW_3.2.1�����Ե����Ĺ������أ�

https://www.glfw.org/download.html

��Windows pre-compiled binaries��ָ�Ѿ������õ�GLFW������ֱ��������ʹ�ã���������һ����Win10ϵͳ�����õ�MinGW32λ���룬����ֱ�����������������������32λ�ģ�

��SourcePackageָ����Դ�ļ���������֮����Ҫʹ��CMake֮��Ĺ���������GLFW������㲻ȷ������ԵĻ����ܷ�֧��Windows pre-compiled binaries���Ѿ������õ�GLFW����������SourcePackage��������Ҳ����Ը��ӣ����ﲻ��ϸ˵����

![ScreenShot](https://github.com/hu243285237/OpenGL_Study/blob/master/VSCodeConfigOpenGL/ScreenShot/ScreenShot01.png)

3.�����½�һ��vscode���̣�����һ���ļ��У�����.vscode�ļ��д���һ��c_cpp_properties.json��������֮ǰC++���õģ�ֱ�ӿ��������ͺá�

![ScreenShot](https://github.com/hu243285237/OpenGL_Study/blob/master/VSCodeConfigOpenGL/ScreenShot/ScreenShot02.png)

4.���ղ����ص�glfw-3.2.1.bin.WIN32��ѹ���ҵ�lib-mingw��include�������ļ��У��������.h�ļ�.a�ļ�.dll�ļ��������������

Ȼ�����ҵ�MinGW�İ�װĿ¼����lib�ļ������libopengl32.aҲ���������̡�

![ScreenShot](https://github.com/hu243285237/OpenGL_Study/blob/master/VSCodeConfigOpenGL/ScreenShot/ScreenShot03.png)

5.��Ҫ���ļ����Ƕ����ˣ���ʱ�򴴽�һ��main.cpp�ļ����Ϳ���ʹ��GLFW��GL�Ŀ��ˣ����Բο�Demo_1��

6.���ն����������������

g++ main.cpp -o test libglfw3dll.a libopengl32.a

.\test

�Ϳ��Կ������Ƴ����Ĵ�����

![ScreenShot](https://github.com/hu243285237/OpenGL_Study/blob/master/VSCodeConfigOpenGL/ScreenShot/ScreenShot04.png)

![ScreenShot](https://github.com/hu243285237/OpenGL_Study/blob/master/VSCodeConfigOpenGL/ScreenShot/ScreenShot05.png)

7.Demo_1�������ϵ�ʵ�ֹ��̣����ο���