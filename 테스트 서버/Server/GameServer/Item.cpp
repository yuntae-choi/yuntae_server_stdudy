#include "pch.h"
#include "Item.h"

CItem::CItem()
{
}


CItem::CItem(INFO& _rInfo)
	: CObj(_rInfo)
{

}

CItem::~CItem()
{
}

void CItem::Initialize()
{
	m_eState = STATE_UNEQUIP;
}

void CItem::Render()
{
	if (STATE_EQUIP == m_eState)
		cout << "<<< ���� �� >>>" << endl;
	cout << "�̸�: " << m_tInfo.szName << endl;
	cout << "���ݷ�: +" << m_tInfo.iAtt << endl;
	cout << "ü��: +" << m_tInfo.iHp << endl;
	cout << "���: " << m_tInfo.iGold << endl;
	cout << "=================================================" << endl;
}

void CItem::Release()
{
}
