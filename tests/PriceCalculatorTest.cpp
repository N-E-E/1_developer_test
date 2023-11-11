#include <gtest/gtest.h>

#include "PriceCalculator.h"

using namespace PriceCal;

TEST(PriceCalculator, return_100_when_given_100) {
  // given
  PriceCalculator priceCalculator;

  // when
  double cash = priceCalculator.acceptCash(DiscountType::CASS_NORMAL, 100.0);

  // then
  EXPECT_DOUBLE_EQ(100, cash);
}