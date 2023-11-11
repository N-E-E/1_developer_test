#include "PriceCalculator.h"

using namespace PriceCal;

double PriceCalculator::acceptCash(const DiscountType type,
                                   const double money) const noexcept {

  double ans = 0.f;
  switch (type) {
    case DiscountType::CASS_NORMAL:
      ans = money;
      break;
    default:
      break;
  }
  return ans;
}
