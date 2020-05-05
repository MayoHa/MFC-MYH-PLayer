// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPAutoMenuCtrl 包装器类

class CWMPAutoMenuCtrl : public COleDispatchDriver
{
public:
	CWMPAutoMenuCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPAutoMenuCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPAutoMenuCtrl(const CWMPAutoMenuCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPAutoMenuCtrl 方法
public:
	void show(LPCTSTR newVal)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1965, DISPATCH_METHOD, VT_EMPTY, NULL, parms, newVal);
	}

	// IWMPAutoMenuCtrl 属性
public:

};
