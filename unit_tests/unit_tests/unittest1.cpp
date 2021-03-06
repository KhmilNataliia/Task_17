#include "stdafx.h"
#include "CppUnitTest.h"

#include "catch.hpp"
#include "proxy.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		
	TEST_CASE("order_cl")
	{
		order_proxy *ord = new order_proxy(2000);
		ord->add_to_order("Classic pavement", 10);
		int bal = ord->getBalance();
		REQUIRE(bal == 1000);
	};
	TEST_CASE("order_cl2")
	{
		order_proxy *ord = new order_proxy(2000);
		ord->add_to_order("Classic pavement", 10);
		int sum = ord->get_sum();
		REQUIRE(sum == 1000);
	};
	TEST_CASE("ord_tr")
	{
		order_proxy *ord = new  order_proxy(2000);
		ord->add_to_order("Triangle pavement", 10);
		int bal = ord->getBalance();
		REQUIRE(bal == 600);
	};
	TEST_CASE("ord_tr2")
	{
		order_proxy *ord = new  order_proxy(2000);
		ord->add_to_order("Triangle pavement", 10);
		int sum = ord->get_sum();
		REQUIRE(sum == 1400);
	};
	TEST_CASE("ord_st")
	{
		order_proxy *ord = new order_proxy(3000);
		ord->add_to_order("Stone-imitated pavement", 10);
		int sum = ord->get_sum();
		REQUIRE(sum == 2750);
	};
	TEST_CASE("ord_st2")
	{
		order_proxy *ord = new order_proxy(3000);
		ord->add_to_order("Stone-imitated pavement", 10);
		int bal = ord->getBalance();
		REQUIRE(bal == 250);
	};
	TEST_CASE("ord_sf")
	{
		order_proxy *ord = new  order_proxy(4000);
		ord->add_to_order("Pavement made in soft technology", 10);
		int bal = ord->getBalance();
		REQUIRE(bal == 150);
	};
	TEST_CASE("ord_sf2")
	{
		order_proxy *ord = new order_proxy(4000);
		ord->add_to_order("Pavement made in soft technology", 10);
		int sum = ord->get_sum();
		REQUIRE(sum == 3850);
	};
	TEST_CASE("ord_col")
	{
		order_proxy *ord = new order_proxy(2000);
		ord->add_to_order("Colored pavement", 10);
		int sum = ord->get_sum();
		REQUIRE(sum == 1760);
	};
	TEST_CASE("ord_col2")
	{
		order_proxy *ord = new order_proxy(2000);
		ord->add_to_order("Colored pavement", 10);
		int bal = ord->getBalance();
		REQUIRE(bal == 240);
	};
	TEST_CASE("enough")
	{
		order_proxy *ord = new order_proxy(2000);
		bool res = ord->add_to_order("Colored pavement", 5);
		REQUIRE(res == true);
	};
	TEST_CASE("not_enough")
	{
		order_proxy *ord = new order_proxy(1000);
		bool res = ord->add_to_order("Colored pavement", 10);
		REQUIRE(res == false);
	};
}