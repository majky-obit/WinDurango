#pragma once

namespace WinDurango::impl
{
	class ConnectedStorage
	{
	public:
		void InitializeStorage( );
		void CreateContainer(const wchar_t* name);

		
	private:
		static PWSTR ObtainPackageName( );
		void CreateDirectories(const wchar_t* storageType);

		const wchar_t* storagePath;
	};

	inline ConnectedStorage* s_userStorage;
}