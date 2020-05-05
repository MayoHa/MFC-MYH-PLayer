// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPSliderCtrlEvents 包装器类

class CWMPSliderCtrlEvents : public COleDispatchDriver
{
public:
	CWMPSliderCtrlEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPSliderCtrlEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSliderCtrlEvents(const CWMPSliderCtrlEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPSliderCtrlEvents 方法
public:
	STDMETHOD(ondragbegin)()
	{
		HRESULT result;
		InvokeHelper(0x1536, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ondragend)()
	{
		HRESULT result;
		InvokeHelper(0x1537, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(onpositionchange)()
	{
		HRESULT result;
		InvokeHelper(0x1538, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IWMPSliderCtrlEvents 属性
public:

};
