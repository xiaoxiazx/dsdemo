//---------------------------------------------------------------------------

#ifndef graph_introH
#define graph_introH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Richole.h>


struct TRichEditOleCallback : public IRichEditOleCallback
{
public:
    TRichEditOleCallback()
        :pStorage(NULL),m_iNumStorages(0),m_dwRef(0)
    {
        HRESULT hResult = ::StgCreateDocfile(NULL,
            STGM_TRANSACTED | STGM_READWRITE | STGM_SHARE_EXCLUSIVE /*| STGM_DELETEONRELEASE */|STGM_CREATE ,
            0, &pStorage );

        //OleCheck( hResult );
    }

    virtual HRESULT STDMETHODCALLTYPE GetNewStorage(LPSTORAGE* lplpstg)
    {
        WCHAR tName[50];
        wsprintfW(tName, L"REOLEStorage%d", m_iNumStorages++);

        HRESULT hResult = pStorage->CreateStorage(tName,
            STGM_TRANSACTED | STGM_READWRITE | STGM_SHARE_EXCLUSIVE | STGM_CREATE ,
            0, 0, lplpstg );
        //OleCheck( hResult );

        return hResult;
    }
    virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, void ** ppvObject)
    {
        HRESULT hr = S_OK;
        *ppvObject = NULL;

        if ( iid == IID_IUnknown ||
            iid == IID_IRichEditOleCallback )
        {
            *ppvObject = this;
            AddRef();
            hr = NOERROR;
        }
        else
        {
            hr = E_NOINTERFACE;
        }

        return hr;
    }
    virtual ULONG STDMETHODCALLTYPE AddRef()
    {
        return ++m_dwRef;
    }
    virtual ULONG STDMETHODCALLTYPE Release()
    {
        if ( --m_dwRef == 0 )
        {
            delete this;
            return 0;
        }

        return m_dwRef;
    }
    virtual HRESULT STDMETHODCALLTYPE GetInPlaceContext(LPOLEINPLACEFRAME FAR *lplpFrame,
        LPOLEINPLACEUIWINDOW FAR *lplpDoc, LPOLEINPLACEFRAMEINFO lpFrameInfo)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE ShowContainerUI(BOOL fShow)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE QueryInsertObject(LPCLSID lpclsid, LPSTORAGE lpstg, LONG cp)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE DeleteObject(LPOLEOBJECT lpoleobj)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE QueryAcceptData(LPDATAOBJECT lpdataobj, CLIPFORMAT FAR *lpcfFormat,
        DWORD reco, BOOL fReally, HGLOBAL hMetaPict)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE ContextSensitiveHelp(BOOL fEnterMode)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE GetClipboardData(CHARRANGE FAR *lpchrg, DWORD reco, LPDATAOBJECT FAR *lplpdataobj)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE GetDragDropEffect(BOOL fDrag, DWORD grfKeyState, LPDWORD pdwEffect)
    {
        return S_OK;
    }
    virtual HRESULT STDMETHODCALLTYPE GetContextMenu(WORD seltyp, LPOLEOBJECT lpoleobj, CHARRANGE FAR *lpchrg,
        HMENU FAR *lphmenu)
    {
        return S_OK;
    }
private:
    int m_iNumStorages;
    IStorage* pStorage;
    DWORD m_dwRef;
};

//---------------------------------------------------------------------------
class TGraphIntroduceForm : public TForm
{
__published:	// IDE-managed Components
    TRichEdit *RichEdit1;
    TPageControl *PageControl2;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TRichEdit *RichEdit2;
    TRichEdit *RichEdit3;
    TTabSheet *TabSheet4;
    TRichEdit *RichEdit4;
    TButton *Button1;
    void __fastcall FormActivate(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TGraphIntroduceForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGraphIntroduceForm *GraphIntroduceForm;
//---------------------------------------------------------------------------
#endif
