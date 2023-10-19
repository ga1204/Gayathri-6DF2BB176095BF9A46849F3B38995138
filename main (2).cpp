#include <iostream>
#include <vector>
#include <string>

std::vector<int> linear_search_product(const std::vector<std::string>& products, const std::string& targetProduct) {
    std::vector<int> indices;

    for (int i = 0; i < products.size(); i++) {
        if (products[i] == targetProduct) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    // Example usage
    std::vector<std::string> product_list = {"Apple", "Banana", "Orange", "Apple", "Grapes", "Apple"};
    std::string target_product = "Apple";

    std::vector<int> result = linear_search_product(product_list, target_product);

    if (result.empty()) {
        std::cout << "Product not found in the list." << std::endl;
    } else {
        std::cout << "Product found at indices: ";
        for (int i : result) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

