// Copyright 2019 SMS
// License(Apache-2.0)

#include "../command.h"
#include "../print.h"



class ExecCommand : public Command
{
public:
	ExecCommand()
		: Command("ִ���ⲿϵͳ����", "Herobrine")
	{
		syntax.insert({"command", Syntax(Syntax::Type::STRING, "Ҫִ�е�����", false)});
	}

	void excute(Console& console) override
	{
		char	buf[1024];
		FILE* pipe;
			
		pipe = _popen(console.getStringArg("command").c_str(), "r");

		if(pipe == NULL)
			throw "�޷��򿪹ܵ�";

		while(!feof(pipe))
			if(fgets(buf, 1024, pipe))
				printf("%s", buf);

		if(_pclose(pipe) == -1)
			throw "�޷��رչܵ�";
	}
};

