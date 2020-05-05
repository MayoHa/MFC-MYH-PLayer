// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPMetadataPicture 包装器类

class CWMPMetadataPicture : public COleDispatchDriver
{
public:
	CWMPMetadataPicture() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPMetadataPicture(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPMetadataPicture(const CWMPMetadataPicture& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPMetadataPicture 方法
public:
	CString get_mimeType()
	{
		CString result;
		InvokeHelper(0x41b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_pictureType()
	{
		CString result;
		InvokeHelper(0x41c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_Description()
	{
		CString result;
		InvokeHelper(0x41d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_URL()
	{
		CString result;
		InvokeHelper(0x41e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// IWMPMetadataPicture 属性
public:

};
