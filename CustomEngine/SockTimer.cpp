#include "SockTimer.h"

using namespace std::chrono;

SockTimer::SockTimer() noexcept
{
	last = steady_clock::now();
}

float SockTimer::Mark() noexcept
{
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;
	return frameTime.count();
}

float SockTimer::Peek() const noexcept
{
	return duration<float>(steady_clock::now() - last).count();
}