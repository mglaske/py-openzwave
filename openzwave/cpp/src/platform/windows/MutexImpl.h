//-----------------------------------------------------------------------------
//
//	MutexImpl.h
//
//	Windows Implementation of the cross-platform mutex
//
//	Copyright (c) 2010 Mal Lansell <openzwave@lansell.org>
//
//	SOFTWARE NOTICE AND LICENSE
//
//	This file is part of OpenZWave.
//
//	OpenZWave is free software: you can redistribute it and/or modify
//	it under the terms of the GNU Lesser General Public License as published
//	by the Free Software Foundation, either version 3 of the License,
//	or (at your option) any later version.
//
//	OpenZWave is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU Lesser General Public License for more details.
//
//	You should have received a copy of the GNU Lesser General Public License
//	along with OpenZWave.  If not, see <http://www.gnu.org/licenses/>.
//
//-----------------------------------------------------------------------------

#ifndef _MutexImpl_H
#define _MutexImpl_H

#include <windows.h>


namespace OpenZWave
{
	/** \brief Windows-specific implementation of the Mutex class.
	 */
	class MutexImpl
	{
	private:
		friend class Mutex;

		MutexImpl();
		~MutexImpl();

		bool Lock( bool const _bWait = true );
		void Release();

		CRITICAL_SECTION m_criticalSection;
	};

} // namespace OpenZWave

#endif //_MutexIF_H

