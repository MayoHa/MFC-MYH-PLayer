// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPListBoxItem ��װ����

class CWMPListBoxItem : public COleDispatchDriver
{
public:
	CWMPListBoxItem() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWMPListBoxItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPListBoxItem(const CWMPListBoxItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWMPListBoxItem ����
public:
	void put_value(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x17e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPListBoxItem ����
public:

};
