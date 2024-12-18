#pragma once

#include <GL\glew.h>

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

#define ASSERT(x) if(!(x)) __debugbreak();
#define GLCall(x) GLClearError();\
	x;\
	ASSERT(GLLogCall(#x, __FILE__, __LINE__))
void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);

class Buffer {
private:
public:
	void Draw(const VertexArray& VA, const int count, const Shader& shader) const;

	void Draw(const VertexArray& VA, const IndexBuffer& IB, const Shader& shader)const;
	
	void Clear();
};