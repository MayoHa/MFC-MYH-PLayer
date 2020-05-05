// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPlayerApplication 包装器类

class CWMPPlayerApplication : public COleDispatchDriver
{
public:
	CWMPPlayerApplication() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPPlayerApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlayerApplication(const CWMPPlayerApplication& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPPlayerApplication 方法
public:
	void switchToPlayerApplication()
	{
		InvokeHelper(0x44d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void switchToControl()
	{
		InvokeHelper(0x44e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_playerDocked()
	{
		BOOL result;
		InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_hasDisplay()
	{
		BOOL result;
		InvokeHelper(0x450, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}

	// IWMPPlayerApplication 属性
public:

};
