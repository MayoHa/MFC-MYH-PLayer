// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPButtonCtrlEvents 包装器类

class CWMPButtonCtrlEvents : public COleDispatchDriver
{
public:
	CWMPButtonCtrlEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPButtonCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPButtonCtrlEvents(const CWMPButtonCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPButtonCtrlEvents 方法
public:
	STDMETHOD(onclick)()
	{
		HRESULT result;
		InvokeHelper(0x1400, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPButtonCtrlEvents 属性
public:

};
