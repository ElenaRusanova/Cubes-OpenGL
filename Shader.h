#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Shader
{
public:
	Shader(const char* vertexPath, const char* fragmentPath);
	~Shader();
	void use();
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void setFloatVec(const std::string& name, float* vec, int vec_size) const;
	void setVec3(const std::string& name, glm::vec3 vec) const;
	void setVec4(const std::string& name, glm::vec4 vec) const;
	void setMatrix4F(const std::string& name, glm::mat4 &m);
	unsigned int ID();

private:
	unsigned int programID;
	void checkCompileErrors(unsigned int shader, std::string  type);
};

