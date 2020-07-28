/*****************************************
 *                                       *
 * This file is automatically generated. *
 * To create new hardfork, please modify *
 * the .hf files in hardfork.d instead   *
 * of modifying this file.               *
 *                                       *
 *****************************************/

#pragma once
// CHECK_REVIEW_PERIOD_TIME
#ifndef CHECK_REVIEW_PERIOD_TIME
#define CHECK_REVIEW_PERIOD_TIME (fc::time_point_sec( 1518162390 ))
#endif
// Increase the contract object 尝试添加合约对象
#ifndef INCREASE_CONTRACT
#define INCREASE_CONTRACT (fc::time_point_sec( 1523156702 ))
#endif
/* 落选收益分配点，原因：回放数据时，在此区块之前，aaabp初始注册理事会，没有投票的时候，落选均分，所以转账30万能成功。但是按权重分配之后，由于无投票权重导致没分配钱，这样转账30万那笔交易就不会成功。
   所以需要做个兼容，在此区块之前按照落选均分，之后新的逻辑分配。*/
#ifndef UNSUCCESSFUL_CANDIDATE_DIFFPOINT
#define UNSUCCESSFUL_CANDIDATE_DIFFPOINT 1765771
#endif
/* 于2020-05-14 14:39:22自动回收gas，在此区块之前的按需手动回收；在此之后的，自动回收gas*/
#ifndef AUTO_GAS_TIMEPOINT
#define AUTO_GAS_TIMEPOINT (fc::time_point_sec( 1589438362 ))
#endif
