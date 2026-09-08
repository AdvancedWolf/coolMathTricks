#include <iostream>
#include <string>
#include <vector>
#include <utility>

double getGaussArea();
bool includeRoot(const std::vector<std::pair<double, double>>& points);

int main()
{
	std::cout << getGaussArea();
	return 0;
}

double getGaussArea()
{
	std::vector<std::pair<double, double>> points;
	int count = 0;
	std::cin >> count;
	int x = 0, y = 0;
	for (size_t i = 0; i < count; ++i)
	{
		std::cout << "Enter the coordinates counter-clockwise:" << std::endl;
		std::cin >> x >> y;
		points.push_back({x, y});
	}
	points.push_back(points.front());
	double res = 0;
	for (size_t i = 0; i < points.size() - 1; ++i)
	{
		res += points[i].first * points[i+1].second - points[i].second * points[i + 1].first;
	}
	return 0.5 * res;
}

bool includeRoot(const std::vector<std::pair<double, double>>& points)
{
	return false;
}
