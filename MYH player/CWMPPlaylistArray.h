// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPlaylistArray ��װ����

class CWMPPlaylistArray : public COleDispatchDriver
{
public:
	CWMPPlaylistArray() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPPlaylistArray(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistArray(const CWMPPlaylistArray& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPPlaylistArray ����
public:
	long get_count()
	{
		long result;
		InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Item(long lIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, lIndex);
		return result;
	}

	// IWMPPlaylistArray ����
public:

};
