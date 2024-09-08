#include "WBSetting.h"

#include <QtWidgets>

#include "WBSettings.h"

#include "core/memcheck.h"

WBSetting::WBSetting(WBSettings* parent) :
    QObject(parent)
{
    //NOOP
}

WBSetting::WBSetting(WBSettings* owner, const QString& pDomain, const QString& pKey,
    const QVariant& pDefaultValue) :
	QObject(owner), 
    mOwner(owner), 
    mDomain(pDomain), 
    mKey(pKey), 
    mPath(pDomain + "/" + pKey), 
    mDefaultValue(pDefaultValue)
{
    get(); // force caching of the setting
}

WBSetting::~WBSetting()
{
    // NOOP
}

void WBSetting::set(const QVariant& pValue)
{
    if (pValue != get())
    {
        mOwner->setValue(mPath, pValue);
        emit changed(pValue);
    }
}

QVariant WBSetting::get()
{
    return mOwner->value(mPath, mDefaultValue);
}

QVariant WBSetting::reset()
{
    set(mDefaultValue);
    return mDefaultValue;
}


void WBSetting::setBool(bool pValue)
{
    set(pValue);
}

void WBSetting::setString(const QString& pValue)
{
    set(pValue);
}
void WBSetting::setInt(int pValue)
{
    set(pValue);
}


WBColorListSetting::WBColorListSetting(WBSettings* parent)
    : WBSetting(parent)
{
    //NOOP
}

WBColorListSetting::WBColorListSetting(WBSettings* owner, const QString& pDomain,
        const QString& pKey, const QVariant& pDefaultValue, qreal pAlpha)
    : WBSetting(owner, pDomain, pKey, pDefaultValue)
    , mAlpha(pAlpha)
{

    foreach(QString s, get().toStringList())
    {
        QColor color;
        color.setNamedColor(s);
        if (mAlpha>=0)
            color.setAlphaF(mAlpha);
        mColors.append(color);
    }

}

WBColorListSetting::~WBColorListSetting()
{
    // NOOP
}

QVariant WBColorListSetting::reset()
{
    QVariant result = WBSetting::reset();

    mColors.clear();

    foreach(QString s, get().toStringList())
    {
        QColor color;
        color.setNamedColor(s);
        if (mAlpha>=0)
            color.setAlphaF(mAlpha);

        mColors.append(color);
    }

    mOwner->colorChanged();

    return result;
}

QList<QColor> WBColorListSetting::colors() const
{
    return mColors;
}

void WBColorListSetting::setColor(int pIndex, const QColor& color)
{
    QStringList list = get().toStringList();
    list.replace(pIndex, color.name(QColor::HexArgb));
    if (mAlpha>=0)
    {
        QColor c = color;
        c.setAlphaF(mAlpha);
        mColors.replace(pIndex, c);
    }
    else
        mColors.replace(pIndex, color);
    set(list);
}

void WBColorListSetting::setAlpha(qreal pAlpha)
{
    mAlpha = pAlpha;

    for(int i = 0 ; i < mColors.size() ; i ++)
    {
        QColor c = mColors.at(i);
        c.setAlphaF(mAlpha);
        mColors.replace(i, c);
    }

    mOwner->colorChanged();
}

/*

这段代码定义了两个类：`WBSetting` 和 `WBColorListSetting`，用于处理设置和颜色列表设置。下面是对每个函数的详细分析：

### `WBSetting` 类

1. **构造函数 `WBSetting(WBSettings* parent)`**
   - 初始化 `WBSetting` 对象，设置其父对象为 `parent`。无实际操作（`NOOP`）。

2. **构造函数 `WBSetting(WBSettings* owner, const QString& pDomain, const QString& pKey, const QVariant& pDefaultValue)`**
   - 初始化 `WBSetting` 对象，设置其拥有者 `mOwner`、域名 `mDomain`、键 `mKey` 和默认值 `mDefaultValue`。生成设置的路径 `mPath`，并调用 `get()` 方法来强制缓存设置值。

3. **析构函数 `~WBSetting()`**
   - 析构函数，不执行任何操作（`NOOP`）。

4. **`set(const QVariant& pValue)`**
   - 如果设置的值与当前值不同，将其更新为新值，并发射 `changed(pValue)` 信号。

5. **`get()`**
   - 返回当前设置的值，如果没有设置则返回默认值。

6. **`reset()`**
   - 将设置值重置为默认值，并返回该默认值。

7. **`setBool(bool pValue)`**
   - 将布尔值设置为当前值，调用 `set()` 方法。

8. **`setString(const QString& pValue)`**
   - 将字符串值设置为当前值，调用 `set()` 方法。

9. **`setInt(int pValue)`**
   - 将整型值设置为当前值，调用 `set()` 方法。

### `WBColorListSetting` 类

1. **构造函数 `WBColorListSetting(WBSettings* parent)`**
   - 初始化 `WBColorListSetting` 对象，设置其父对象为 `parent`。无实际操作（`NOOP`）。

2. **构造函数 `WBColorListSetting(WBSettings* owner, const QString& pDomain, const QString& pKey, const QVariant& pDefaultValue, qreal pAlpha)`**
   - 初始化 `WBColorListSetting` 对象，继承自 `WBSetting` 并设置其颜色透明度 `mAlpha`。将默认值转换为颜色列表并应用透明度。

3. **析构函数 `~WBColorListSetting()`**
   - 析构函数，不执行任何操作（`NOOP`）。

4. **`reset()`**
   - 重置颜色列表为默认值，并清空和重新填充颜色列表。调用父类 `WBSetting` 的 `reset()` 方法，并通知 `mOwner` 颜色发生变化。

5. **`colors() const`**
   - 返回当前存储的颜色列表。

6. **`setColor(int pIndex, const QColor& color)`**
   - 在颜色列表中指定位置 `pIndex` 处设置新的颜色，并更新存储的颜色列表。如果 `mAlpha` 大于或等于0，则应用透明度。

7. **`setAlpha(qreal pAlpha)`**
   - 设置透明度 `mAlpha` 并更新所有颜色对象的透明度。通知 `mOwner` 颜色发生变化。

这些函数通过 `WBSetting` 和 `WBColorListSetting` 管理设置和颜色列表的存储、获取、更新和重置，并确保在变化时发出相应的信号。

*/