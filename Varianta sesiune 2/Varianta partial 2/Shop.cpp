#include "Shop.h"
Shop& Shop::Add(Article* item) {
	items.push_back(item);
	return *this;
}
int Shop::GetTotalPrice() const {
	int total = 0;
	for (const Article* item : items) {
		total += item->GetPrice() * item->GetQuantity();
	}
	return total;
}
int Shop::GetQuantity(const std::string& type) const {
	int quantity = 0;
	for (const Article* item : items) {
		if (item->GetType() == type) {
			quantity += item->GetQuantity();
		}
	}
	return quantity;
}
void Shop::List() const {
	for (const Article* item : items) {
		item->Print();
	}
}