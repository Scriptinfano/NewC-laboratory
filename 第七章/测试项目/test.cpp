#include<iostream>
using namespace std;
struct glitz
{
	int n;
	double x;
};
struct result
{
	int al;
};
result function(const glitz*p);
int main()
{
	glitz apple = { 12,53.2 };
	function(&apple);
	return 0;
}
result function(const glitz *p)
{
	double al = p->n + p->x;
	result banana;
	banana.al = al;
	return banana;
}