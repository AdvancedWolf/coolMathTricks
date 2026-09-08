#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <cmath>

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
	std::cout << "Enter the number of points:" << std::endl;
	std::cin >> count;
	int x = 0, y = 0;
	std::cout << "Enter the coordinates counter-clockwise:" << std::endl;
	for (size_t i = 0; i < count; ++i)
	{
		std::cin >> x >> y;
		points.push_back({x, y});
	}
	points.push_back(points.front());
	double S1 = 0, S2 = 0;
	for (size_t i = 0; i < points.size() - 1; ++i)
	{
		S1 += points[i].first * points[i + 1].second;
		S2 += points[i].second * points[i + 1].first;
	}
	return 0.5 * std::abs(S1 - S2);
}

bool includeRoot(const std::vector<std::pair<double, double>>& points)
{
	return false;
}
