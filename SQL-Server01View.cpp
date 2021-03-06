
// SQL-Server01View.cpp : implementation of the CSQLServer01View class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "SQL-Server01.h"
#endif

#include "SQL-Server01Doc.h"
#include "SQL-Server01View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSQLServer01View

IMPLEMENT_DYNCREATE(CSQLServer01View, CView)

BEGIN_MESSAGE_MAP(CSQLServer01View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CSQLServer01View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CSQLServer01View construction/destruction

CSQLServer01View::CSQLServer01View()
{
	// TODO: add construction code here

}

CSQLServer01View::~CSQLServer01View()
{
}

BOOL CSQLServer01View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CSQLServer01View drawing

void CSQLServer01View::OnDraw(CDC* /*pDC*/)
{
	CSQLServer01Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CSQLServer01View printing


void CSQLServer01View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CSQLServer01View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSQLServer01View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSQLServer01View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CSQLServer01View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CSQLServer01View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CSQLServer01View diagnostics

#ifdef _DEBUG
void CSQLServer01View::AssertValid() const
{
	CView::AssertValid();
}

void CSQLServer01View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSQLServer01Doc* CSQLServer01View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSQLServer01Doc)));
	return (CSQLServer01Doc*)m_pDocument;
}
#endif //_DEBUG


// CSQLServer01View message handlers
