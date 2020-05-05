// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPEditCtrl ��װ����

class CWMPEditCtrl : public COleDispatchDriver
{
public:
	CWMPEditCtrl() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPEditCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPEditCtrl(const CWMPEditCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPEditCtrl ����
public:
	CString get_value()
	{
		CString result;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_value(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_border()
	{
		BOOL result;
		InvokeHelper(0x1770, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_border(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1770, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_justification()
	{
		CString result;
		InvokeHelper(0x1771, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_justification(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1771, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_editStyle()
	{
		CString result;
		InvokeHelper(0x1772, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_editStyle(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1772, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_wordWrap()
	{
		BOOL result;
		InvokeHelper(0x1773, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_wordWrap(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1773, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_readOnly()
	{
		BOOL result;
		InvokeHelper(0x1774, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_readOnly(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1774, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_foregroundColor()
	{
		CString result;
		InvokeHelper(0x1775, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_foregroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1775, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0x1776, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1776, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_fontSize()
	{
		long result;
		InvokeHelper(0x1777, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_fontSize(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1777, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_fontStyle()
	{
		CString result;
		InvokeHelper(0x1778, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_fontStyle(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1778, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_fontFace()
	{
		CString result;
		InvokeHelper(0x1779, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_fontFace(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1779, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_textLimit()
	{
		long result;
		InvokeHelper(0x177a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_textLimit(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x177a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_lineCount()
	{
		long result;
		InvokeHelper(0x177b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString getLine(long nIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x177c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, nIndex);
		return result;
	}
	long getSelectionStart()
	{
		long result;
		InvokeHelper(0x177d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long getSelectionEnd()
	{
		long result;
		InvokeHelper(0x177e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void setSelection(long nStart, long nEnd)
	{
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x177f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nStart, nEnd);
	}
	void replaceSelection(LPCTSTR newVal)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1780, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newVal);
	}
	long getLineIndex(long nIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1781, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nIndex);
		return result;
	}
	long getLineFromChar(long nPosition)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1782, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nPosition);
		return result;
	}

	// IWMPEditCtrl ����
public:

};
