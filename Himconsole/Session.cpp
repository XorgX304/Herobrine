// Copyright 2019 SMS
// License(Apache-2.0)
// ���ض�

#include "Session.h"

using namespace boost;



Session::Session(asio::ip::tcp::socket& sock)
		: sock(sock)
{
}


// ��������
void Session::send(const string& buf)
{
}

// ��������
void Session::recv(string& buf)
{
}


// ��ȡ IP��ַ
const std::string& Session::getIpAddress()
{
	return sock.remote_endpoint().address().to_string();
}


// ���»�����Ϣ
void Session::update()
{
}

/*
// װ��ģ��
bool Slave::Load(const string& path)
{
	// ���ģ���Ƿ���װ��
	if(any_of(module.begin(), module.end(), [path](module_info* mod){return mod->path == path;}))
	{
		print::error("ģ����װ��");
		return false;
	}

	// ���ģ���Ƿ����

	return true;
}

// ж��ģ��
bool Slave::Unload(const string& path)
{
	// ���ģ���Ƿ���װ��
	if(none_of(module.begin(), module.end(), [path](module_info* mod){return mod->path == path;}))
	{
		print::error("ģ��δװ��");
		return false;
	}

	return true;
}


void Slave::OnAccept()
{
	print::info("�����ӽ���");

	// ����Ŀ�������Ϣ
	char* pBuf = new char[sizeof(osInfo)+sizeof(userInfo)];

	memset(pBuf, '\0', sizeof(*pBuf));
	memcpy(pBuf, &osInfo, sizeof(osInfo));
	pBuf += sizeof(osInfo);
	memcpy(pBuf, &userInfo, sizeof(userInfo));

	delete[] pBuf;
}
*/