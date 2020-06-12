// Copyright 2020 xensik. All Rights Reserved.

#ifndef XSK_GSC_DECOMPILER_H_
#define XSK_GSC_DECOMPILER_H_

#include <stack>

namespace gsc
{

struct statement
{
	std::uint32_t index_;
	std::string data_;

	statement() : index_(0) { }
};

class decompiler_function
{
public:
	std::string name_;
	std::size_t params_ = 0;
	std::size_t end_ = 0;
	bool is_void = true;
	std::vector<std::string> local_vars_;
	std::stack<std::shared_ptr<statement>> stack_;
	std::vector<std::shared_ptr<statement>> statements_;

	std::unordered_map<std::uint32_t, std::string> labels_;
	std::vector<std::shared_ptr<instruction>> instructions_;
};

	
class decompiler
{
	std::unique_ptr<xsk::byte_buffer> output_;
	std::vector<std::shared_ptr<decompiler_function>> functions_;
	bool in_waittill_;

public:
	decompiler();
	void decompile(std::vector<std::shared_ptr<function>>& functions);
	auto output() -> std::vector<std::uint8_t>;

private:
	void decompile_function(std::shared_ptr<decompiler_function> func);
	void decompile_statements(std::shared_ptr<decompiler_function> func);
	void decompile_blocks(std::shared_ptr<decompiler_function> func);

	void print_function(std::shared_ptr<decompiler_function> func);
	void print_statement(std::shared_ptr<statement> stmt);
	void print_label(const std::string& label);
};

} // namespace gsc

#endif // XSK_GSC_DECOMPILER_H_