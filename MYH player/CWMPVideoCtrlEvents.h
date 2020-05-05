// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPVideoCtrlEvents 包装器类

class CWMPVideoCtrlEvents : public COleDispatchDriver
{
public:
	CWMPVideoCtrlEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPVideoCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPVideoCtrlEvents(const CWMPVideoCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPVideoCtrlEvents 方法
public:
	STDMETHOD(onvideostart)()
	{
		HRESULT result;
		InvokeHelper(0x1658, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onvideoend)()
	{
		HRESULT result;
		InvokeHelper(0x1659, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPVideoCtrlEvents 属性
public:

};
