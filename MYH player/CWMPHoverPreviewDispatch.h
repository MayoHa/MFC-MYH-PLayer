// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPHoverPreviewDispatch ��װ����

class CWMPHoverPreviewDispatch : public COleDispatchDriver
{
public:
	CWMPHoverPreviewDispatch() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPHoverPreviewDispatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPHoverPreviewDispatch(const CWMPHoverPreviewDispatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPHoverPreviewDispatch ����
public:
	CString get_title()
	{
		CString result;
		InvokeHelper(0xc4e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_album()
	{
		CString result;
		InvokeHelper(0xc4f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_URL()
	{
		CString result;
		InvokeHelper(0xc51, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_image(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xc50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_autoClick(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xc53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_previewClick(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xc52, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void dismiss()
	{
		InvokeHelper(0xc54, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPHoverPreviewDispatch ����
public:

};
