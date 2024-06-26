/*
* Descent 3 
* Copyright (C) 2024 Parallax Software
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.

--- HISTORICAL COMMENTS FOLLOW ---

* $Logfile: /DescentIII/Main/editor/QuickCompile.h $
* $Revision: 1.1.1.1 $
* $Date: 2003-08-26 03:57:38 $
* $Author: kevinb $
*
* Does a quick compile of a script
*
* $Log: not supported by cvs2svn $
 * 
 * 2     12/30/98 4:38p Jeff
 * initial creation
*
* $NoKeywords: $
*/

#if !defined(AFX_QUICKCOMPILE_H__625479C0_9FEB_11D2_AB2B_006008BF0B09__INCLUDED_)
#define AFX_QUICKCOMPILE_H__625479C0_9FEB_11D2_AB2B_006008BF0B09__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// QuickCompile.h : header file
//
#include "pstypes.h"
#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////
// CQuickCompile dialog

class CQuickCompile : public CDialog
{
// Construction
public:
	CQuickCompile(char *scriptname,CWnd* pParent = NULL);   // standard constructor

	char m_scriptname[_MAX_PATH];
	int8_t ret_value;

// Dialog Data
	//{{AFX_DATA(CQuickCompile)
	enum { IDD = IDD_QUICKCOMPILE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQuickCompile)
	public:
	virtual int DoModal();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CQuickCompile)
	virtual BOOL OnInitDialog();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QUICKCOMPILE_H__625479C0_9FEB_11D2_AB2B_006008BF0B09__INCLUDED_)
