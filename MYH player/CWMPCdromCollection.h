// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCdromCollection 包装器类

class CWMPCdromCollection : public COleDispatchDriver
{
public:
	CWMPCdromCollection() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPCdromCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCdromCollection(const CWMPCdromCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPCdromCollection 方法
public:
	long get_count()
	{
		long result;
		InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Item(long lIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x12e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, lIndex);
		return result;
	}
	LPDISPATCH getByDriveSpecifier(LPCTSTR bstrDriveSpecifier)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x12f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, bstrDriveSpecifier);
		return result;
	}

	// IWMPCdromCollection 属性
public:

};
