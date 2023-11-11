#pragma once

namespace PriceCal {

enum DiscountType { CASS_NORMAL, CASS_DISCOUNT, CASS_DIMINISH };

class PriceCalculator final {
public:
  double acceptCash(const DiscountType type, const double money) const noexcept;
};

} // namespace PriceCal
