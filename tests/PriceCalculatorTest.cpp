#include <gtest/gtest.h>

#include "PriceCalculator.h"

using namespace PriceCal;


TEST(PriceCalculator, normal_return_100_when_given_100) {
  // given
  PriceCalculator priceCalculator;

  // when
  double cash = priceCalculator.acceptCash(DiscountType::CASS_NORMAL, 100.0);

  // then
  EXPECT_DOUBLE_EQ(100, cash);
}


TEST(PriceCalculator, discount_return_90_when_given_100) {
  // given
  PriceCalculator priceCalculator;

  // when
  double cash = priceCalculator.acceptCash(DiscountType::CASS_DISCOUNT, 100.0);

  // then
  EXPECT_DOUBLE_EQ(90, cash);
}


TEST(PriceCalculator, diminish_return_80_when_given_100) {
  // given
  PriceCalculator priceCalculator;

  // when
  double cash = priceCalculator.acceptCash(DiscountType::CASS_DIMINISH, 100.0);

  // then
  EXPECT_DOUBLE_EQ(80, cash);
}


TEST(PriceCalculator, diminish_return_90_when_given_90) {
  // given
  PriceCalculator priceCalculator;

  // when
  double cash = priceCalculator.acceptCash(DiscountType::CASS_DIMINISH, 90.0);
  
  // then
  EXPECT_DOUBLE_EQ(90, cash);
}


TEST(PriceCalculator, diminish_return_210_when_given_250) {
  // given
  PriceCalculator priceCalculator;

  // when
  double cash = priceCalculator.acceptCash(DiscountType::CASS_DIMINISH, 250.0);

  // then
  EXPECT_DOUBLE_EQ(210, cash);
}