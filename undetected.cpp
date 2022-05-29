ulong_t __stdcall hook( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam ) {
	if( g_input.handle( hwnd, msg, wparam, lparam ) )
		return true;

	return CallWindowProcA( g_input.get_original_wndproc(), hwnd, msg, wparam, lparam );
}

input_mngr::input_mngr( )
	: m_window_handle{ }, m_original_wndproc{ }, m_key_pressed{ }, m_instance{ nullptr } {
	
}
