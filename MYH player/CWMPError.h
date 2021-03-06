// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPError 包装器类

class CWMPError : public COleDispatchDriver
{
public:
	CWMPError() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPError(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPError(const CWMPError& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPError 方法
public:
	void clearErrorQueue()
	{
		InvokeHelper(0x353, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_errorCount()
	{
		long result;
		InvokeHelper(0x354, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Item(long dwIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x355, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, dwIndex);
		return result;
	}
	void webHelp()
	{
		InvokeHelper(0x356, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPError 属性
public:

};
