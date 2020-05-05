// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPHoverPreviewDispatch 包装器类

class CWMPHoverPreviewDispatch : public COleDispatchDriver
{
public:
	CWMPHoverPreviewDispatch() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPHoverPreviewDispatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPHoverPreviewDispatch(const CWMPHoverPreviewDispatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPHoverPreviewDispatch 方法
public:
	CString get_title()
	{
		CString result;
		InvokeHelper(0xc4e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_album()
	{
		CString result;
		InvokeHelper(0xc4f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_URL()
	{
		CString result;
		InvokeHelper(0xc51, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_image(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xc50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_autoClick(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xc53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_previewClick(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xc52, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void dismiss()
	{
		InvokeHelper(0xc54, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IWMPHoverPreviewDispatch 属性
public:

};
