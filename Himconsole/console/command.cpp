// Copyright 2019 SMS
// License(Apache-2.0)
// 

#include "command.h"
#include "console.h"
#include "../localization.h"



Command::Command(
		const string& desc,
		const string& author,
		Platform      platform,
		License       license)
	: desc(desc),
	  author(author),
	  platform(platform),
	  license(license)
{
}


Command::~Command()
{
}


const string& Command::getDescription()
{
	return desc;
}

const string& Command::getAuthor()
{
	return author;
}

const map<string, Syntax>& Command::getSyntax()
{
	return syntax;
}

Platform Command::getPlatform()
{
	return platform;
}

License Command::getLicense()
{
	return license;
}

