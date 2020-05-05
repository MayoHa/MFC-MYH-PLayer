// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPEventObject 包装器类

class CWMPEventObject : public COleDispatchDriver
{
public:
	CWMPEventObject() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPEventObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPEventObject(const CWMPEventObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPEventObject 方法
public:
	LPDISPATCH get_srcElement()
	{
		LPDISPATCH result;
		InvokeHelper(0x898, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_altKey()
	{
		BOOL result;
		InvokeHelper(0x899, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ctrlKey()
	{
		BOOL result;
		InvokeHelper(0x89a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_shiftKey()
	{
		BOOL result;
		InvokeHelper(0x89b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_fromElement()
	{
		LPDISPATCH result;
		InvokeHelper(0x89c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_toElement()
	{
		LPDISPATCH result;
		InvokeHelper(0x89d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_keyCode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x89e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_keyCode()
	{
		long result;
		InvokeHelper(0x89e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_button()
	{
		long result;
		InvokeHelper(0x89f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_x()
	{
		long result;
		InvokeHelper(0x8a0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_y()
	{
		long result;
		InvokeHelper(0x8a1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_clientX()
	{
		long result;
		InvokeHelper(0x8a2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_clientY()
	{
		long result;
		InvokeHelper(0x8a3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_offsetX()
	{
		long result;
		InvokeHelper(0x8a4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_offsetY()
	{
		long result;
		InvokeHelper(0x8a5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_screenX()
	{
		long result;
		InvokeHelper(0x8a6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_screenY()
	{
		long result;
		InvokeHelper(0x8a7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_screenWidth()
	{
		long result;
		InvokeHelper(0x8a8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_screenHeight()
	{
		long result;
		InvokeHelper(0x8a9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_penOrTouch()
	{
		BOOL result;
		InvokeHelper(0x8aa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}

	// IWMPEventObject 属性
public:

};
