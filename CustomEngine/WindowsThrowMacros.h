#pragma once

#define SHWND_EXCEPT( hr ) Window::HrException( __LINE__,__FILE__,(hr) )
#define SHWND_LAST_EXCEPT() Window::HrException( __LINE__,__FILE__,GetLastError() )
#define SHWND_NOGFX_EXCEPT() Window::NoGfxException( __LINE__,__FILE__ )
