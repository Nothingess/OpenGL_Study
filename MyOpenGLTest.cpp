#include <GLFW\glfw3.h>

int main(void)
{
	GLFWwindow * window;

	//��ʼ��glfw��
	if (!glfwInit())
	{
		return -1;
	}

	//����һ�����ں�����OpenGL������
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

	if (!window)
	{
		//û�д�����᷵��NULL
		glfwTerminate();
		return -1;
	}

	//���õ�ǰ�Ĵ���������
	glfwMakeContextCurrent(window);

	//ѭ��,ֱ���û��رմ���
	while (!glfwWindowShouldClose(window))
	{
		//����������Ⱦ
		glClear(GL_COLOR_BUFFER_BIT);

		//����������������window�ϸ�������
		glfwSwapBuffers(window);

		//��ѯ�¼�
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}