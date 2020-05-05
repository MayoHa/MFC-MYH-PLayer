// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPDMRConnectionManagerService 包装器类

class CWMPDMRConnectionManagerService : public COleDispatchDriver
{
public:
	CWMPDMRConnectionManagerService() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPDMRConnectionManagerService(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDMRConnectionManagerService(const CWMPDMRConnectionManagerService& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPDMRConnectionManagerService 方法
public:
	CString get_SourceProtocolInfo()
	{
		CString result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_SinkProtocolInfo()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentConnectionIDs()
	{
		CString result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_ConnectionStatus()
	{
		CString result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_ConnectionManager()
	{
		CString result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_Direction()
	{
		CString result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_A_ARG_TYPE_ProtocolInfo()
	{
		CString result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_A_ARG_TYPE_ConnectionID()
	{
		long result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_A_ARG_TYPE_AVTransportID()
	{
		long result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_A_ARG_TYPE_RcsID()
	{
		long result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void GetProtocolInfo(BSTR * pbstrSource, BSTR * pbstrSink)
	{
		static BYTE parms[] = VTS_PBSTR VTS_PBSTR;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pbstrSource, pbstrSink);
	}
	void GetCurrentConnectionIDs(BSTR * pbstrConnectionIDs)
	{
		static BYTE parms[] = VTS_PBSTR;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pbstrConnectionIDs);
	}
	void GetCurrentConnectionInfo(long lConnectionID, long * plResID, long * plAVTransportID, BSTR * pbstrProtocolInfo, BSTR * pbstrPeerConnectionManager, long * plPeerConnectionID, BSTR * pbstrDirection, BSTR * pbstrStatus)
	{
		static BYTE parms[] = VTS_I4 VTS_PI4 VTS_PI4 VTS_PBSTR VTS_PBSTR VTS_PI4 VTS_PBSTR VTS_PBSTR;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lConnectionID, plResID, plAVTransportID, pbstrProtocolInfo, pbstrPeerConnectionManager, plPeerConnectionID, pbstrDirection, pbstrStatus);
	}

	// IWMPDMRConnectionManagerService 属性
public:

};
