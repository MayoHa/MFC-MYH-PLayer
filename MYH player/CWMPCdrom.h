// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCdrom 包装器类

class CWMPCdrom : public COleDispatchDriver
{
public:
	CWMPCdrom() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPCdrom(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCdrom(const CWMPCdrom& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPCdrom 方法
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

	// IWMPCdrom 属性
public:

};
