// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDownloadManager ��װ����

class CWMPDownloadManager : public COleDispatchDriver
{
public:
	CWMPDownloadManager() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPDownloadManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDownloadManager(const CWMPDownloadManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPDownloadManager ����
public:
	LPDISPATCH getDownloadCollection(long lCollectionId)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x47f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, lCollectionId);
		return result;
	}
	LPDISPATCH createDownloadCollection()
	{
		LPDISPATCH result;
		InvokeHelper(0x480, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// IWMPDownloadManager ����
public:

};
