#ifndef LOG_H
#define LOG_H
#include <string>
class Log{
	private:
		Log();
	
	public:
		virtual ~Log();
		static Log& getInstance();
		
		void print(const std::string& message);
		
};
#endif