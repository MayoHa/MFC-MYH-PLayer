// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPPlaylistCtrl 包装器类

class CWMPPlaylistCtrl : public COleDispatchDriver
{
public:
	CWMPPlaylistCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPPlaylistCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistCtrl(const CWMPPlaylistCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPPlaylistCtrl 方法
public:
	LPDISPATCH get_Playlist()
	{
		LPDISPATCH result;
		InvokeHelper(0x15e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_Playlist(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x15e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_columns()
	{
		CString result;
		InvokeHelper(0x15e2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_columns(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15e2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_columnCount()
	{
		long result;
		InvokeHelper(0x15e3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_columnOrder()
	{
		CString result;
		InvokeHelper(0x15e4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_columnOrder(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_columnsVisible()
	{
		BOOL result;
		InvokeHelper(0x15e5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_columnsVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15e5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_dropDownVisible()
	{
		BOOL result;
		InvokeHelper(0x15e7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_dropDownVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15e7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_playlistItemsVisible()
	{
		BOOL result;
		InvokeHelper(0x15e8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_playlistItemsVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_checkboxesVisible()
	{
		BOOL result;
		InvokeHelper(0x15e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_checkboxesVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15e9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundColor()
	{
		CString result;
		InvokeHelper(0x15ec, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_foregroundColor()
	{
		CString result;
		InvokeHelper(0x15ed, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_foregroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_disabledItemColor()
	{
		CString result;
		InvokeHelper(0x15ee, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_disabledItemColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_itemPlayingColor()
	{
		CString result;
		InvokeHelper(0x15ef, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_itemPlayingColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15ef, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_itemPlayingBackgroundColor()
	{
		CString result;
		InvokeHelper(0x15f0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_itemPlayingBackgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15f0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundImage()
	{
		CString result;
		InvokeHelper(0x15f1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15f1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_allowItemEditing()
	{
		BOOL result;
		InvokeHelper(0x15f2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_allowItemEditing(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15f2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_allowColumnSorting()
	{
		BOOL result;
		InvokeHelper(0x15f3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_allowColumnSorting(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15f3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_dropDownList()
	{
		CString result;
		InvokeHelper(0x15f4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_dropDownList(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15f4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_dropDownToolTip()
	{
		CString result;
		InvokeHelper(0x15f5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_dropDownToolTip(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15f5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_copying()
	{
		BOOL result;
		InvokeHelper(0x15f6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_copying(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15f6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void copy()
	{
		InvokeHelper(0x15f7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void abortCopy()
	{
		InvokeHelper(0x15f8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void deleteSelected()
	{
		InvokeHelper(0x15f9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void deleteSelectedFromLibrary()
	{
		InvokeHelper(0x15fa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void moveSelectedUp()
	{
		InvokeHelper(0x15fc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void moveSelectedDown()
	{
		InvokeHelper(0x15fd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void addSelectedToPlaylist(LPDISPATCH pdispPlaylist)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x15fe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pdispPlaylist);
	}
	long getNextSelectedItem(long nStartIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x15ff, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nStartIndex);
		return result;
	}
	long getNextCheckedItem(long nStartIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1600, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nStartIndex);
		return result;
	}
	void setSelectedState(long nIndex, BOOL vbSelected)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x1601, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, vbSelected);
	}
	void setCheckedState(long nIndex, BOOL vbChecked)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x1602, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, vbChecked);
	}
	void sortColumn(long nIndex)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1603, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex);
	}
	void setColumnResizeMode(long nIndex, LPCTSTR newMode)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x1604, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, newMode);
	}
	void setColumnWidth(long nIndex, long nWidth)
	{
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x1605, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, nWidth);
	}
	CString get_itemErrorColor()
	{
		CString result;
		InvokeHelper(0x160a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_itemErrorColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x160a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_itemCount()
	{
		long result;
		InvokeHelper(0x160b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_itemMedia(long nIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x160c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, nIndex);
		return result;
	}
	LPDISPATCH get_itemPlaylist(long nIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x160d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, nIndex);
		return result;
	}
	long getNextSelectedItem2(long nStartIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x160e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nStartIndex);
		return result;
	}
	long getNextCheckedItem2(long nStartIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x160f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nStartIndex);
		return result;
	}
	void setSelectedState2(long nIndex, BOOL vbSelected)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x1610, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, vbSelected);
	}
	void setCheckedState2(long nIndex, BOOL vbChecked)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x1611, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, vbChecked);
	}
	CString get_leftStatus()
	{
		CString result;
		InvokeHelper(0x1612, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_leftStatus(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1612, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_rightStatus()
	{
		CString result;
		InvokeHelper(0x1613, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_rightStatus(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1613, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_editButtonVisible()
	{
		BOOL result;
		InvokeHelper(0x1614, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_editButtonVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1614, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_dropDownImage()
	{
		CString result;
		InvokeHelper(0x1615, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_dropDownImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1615, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_dropDownBackgroundImage()
	{
		CString result;
		InvokeHelper(0x1616, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_dropDownBackgroundImage(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1616, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_hueShift()
	{
		float result;
		InvokeHelper(0x1617, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_hueShift(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x1617, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_saturation()
	{
		float result;
		InvokeHelper(0x1618, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_saturation(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x1618, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_statusColor()
	{
		CString result;
		InvokeHelper(0x161a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_statusColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x161a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_toolbarVisible()
	{
		BOOL result;
		InvokeHelper(0x161c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_toolbarVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x161c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_itemSelectedColor()
	{
		CString result;
		InvokeHelper(0x161e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_itemSelectedColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x161e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_itemSelectedFocusLostColor()
	{
		CString result;
		InvokeHelper(0x161f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_itemSelectedFocusLostColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x161f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_itemSelectedBackgroundColor()
	{
		CString result;
		InvokeHelper(0x1620, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_itemSelectedBackgroundColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1620, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_itemSelectedBackgroundFocusLostColor()
	{
		CString result;
		InvokeHelper(0x1621, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_itemSelectedBackgroundFocusLostColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1621, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_backgroundSplitColor()
	{
		CString result;
		InvokeHelper(0x1622, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_backgroundSplitColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1622, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_statusTextColor()
	{
		CString result;
		InvokeHelper(0x1623, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_statusTextColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1623, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPPlaylistCtrl 属性
public:

};
