#include "SockException.h"
#include <sstream>


SockException::SockException(int line, const char* file) noexcept
	:
	line(line),
	file(file)
{}

const char* SockException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl
		<< GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* SockException::GetType() const noexcept
{
	return "Sock Exception";
}

int SockException::GetLine() const noexcept
{
	return line;
}

const std::string& SockException::GetFile() const noexcept
{
	return file;
}

std::string SockException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File] " << file << std::endl
		<< "[Line] " << line;
	return oss.str();
}