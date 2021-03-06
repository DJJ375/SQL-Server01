
// SQL-Server01View.h : interface of the CSQLServer01View class
//

#pragma once


class CSQLServer01View : public CView
{
protected: // create from serialization only
	CSQLServer01View();
	DECLARE_DYNCREATE(CSQLServer01View)

// Attributes
public:
	CSQLServer01Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CSQLServer01View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SQL-Server01View.cpp
inline CSQLServer01Doc* CSQLServer01View::GetDocument() const
   { return reinterpret_cast<CSQLServer01Doc*>(m_pDocument); }
#endif

