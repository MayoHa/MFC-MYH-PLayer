// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCdrom ��װ����

class CWMPCdrom : public COleDispatchDriver
{
public:
	CWMPCdrom() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPCdrom(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCdrom(const CWMPCdrom& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPCdrom ����
public:
	CString get_driveSpecifier()
	{
		CString result;
		InvokeHelper(0xfb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Playlist()
	{
		LPDISPATCH result;
		InvokeHelper(0xfc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void eject()
	{
		InvokeHelper(0xfd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPCdrom ����
public:

};
