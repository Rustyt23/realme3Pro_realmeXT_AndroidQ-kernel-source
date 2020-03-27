/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _SOC_QCOM_LLCC_PERFMON_H_
#define _SOC_QCOM_LLCC_PERFMON_H_

#define LLCC_COMMON_STATUS0		(0x3000C)
/* FEAC */
#define FEAC_PROF_FILTER_0_CFG5		(0x037014)
#define FEAC_PROF_FILTER_0_CFG6		(0x037018)
#define FEAC_PROF_EVENT_n_CFG(n)	(0x037060 + 4 * n)
#define FEAC_PROF_CFG			(0x0370A0)

/* FERC */
#define FERC_PROF_FILTER_0_CFG0		(0x03B000)
#define FERC_PROF_EVENT_n_CFG(n)	(0x03B020 + 4 * n)
#define FERC_PROF_CFG			(0x03B060)

/* FEWC */
#define FEWC_PROF_FILTER_0_CFG0		(0x033000)
#define FEWC_PROF_EVENT_n_CFG(n)	(0x033020 + 4 * n)

/* BEAC */
#define BEAC_PROF_FILTER_0_CFG5		(0x049014)
#define BEAC_PROF_EVENT_n_CFG(n)	(0x049040 + 4 * n)
#define BEAC_PROF_CFG			(0x049080)

/* BERC */
#define BERC_PROF_FILTER_0_CFG0		(0x039000)
#define BERC_PROF_EVENT_n_CFG(n)	(0x039020 + 4 * n)
#define BERC_PROF_CFG			(0x039060)

/* TRP */
#define TRP_PROF_FILTER_0_CFG1		(0x024004)
#define TRP_PROF_EVENT_n_CFG(n)		(0x024020 + 4 * n)
#define TRP_SCID_n_STATUS(n)		(0x000004 + 0x1000 * n)

/* DRP */
#define DRP_PROF_EVENT_n_CFG(n)		(0x044010 + 4 * n)
#define DRP_PROF_CFG			(0x044050)

/* PMGR */
#define PMGR_PROF_EVENT_n_CFG(n)	(0x03F000 + 4 * n)

#define PERFMON_COUNTER_n_CONFIG(n)	(0x031020 + 4 * n)
#define PERFMON_MODE			(0x03100C)
#define PERFMON_DUMP			(0x031010)
#define BROADCAST_COUNTER_n_VALUE(n)	(0x031060 + 4 * n)

#define LLCC_COUNTER_n_VALUE(n)		(0x031060 + 4 * n)

#define EVENT_NUM_MAX			(64)
#define SCID_MAX			(32)

/* Perfmon */
#define CLEAR_ON_ENABLE			BIT(31)
#define CLEAR_ON_DUMP			BIT(30)
#define FREEZE_ON_SATURATE		BIT(29)
#define CHAINING_EN			BIT(28)
#define COUNT_CLOCK_EVENT		BIT(24)

#define EVENT_SELECT_SHIFT		(16)
#define PERFMON_EVENT_SELECT_MASK	GENMASK(EVENT_SELECT_SHIFT + 4,\
						EVENT_SELECT_SHIFT)
#define PORT_SELECT_SHIFT		(0)
#define PERFMON_PORT_SELECT_MASK	GENMASK(PORT_SELECT_SHIFT + 3,\
						PORT_SELECT_SHIFT)

#define MANUAL_MODE			(0)
#define TIMED_MODE			(1)
#define TRIGGER_MODE			(2)
#define MONITOR_EN_SHIFT		(15)
#define MONITOR_EN			BIT(MONITOR_EN_SHIFT)
#define PERFMON_MODE_MONITOR_EN_MASK	GENMASK(MONITOR_EN_SHIFT + 0,\
						MONITOR_EN_SHIFT)
#define MONITOR_MODE_SHIFT		(0)
#define PERFMON_MODE_MONITOR_MODE_MASK	GENMASK(MONITOR_MODE_SHIFT + 0,\
						MONITOR_MODE_SHIFT)

#define MONITOR_DUMP			BIT(0)

/* COMMON */
#define BYTE_SCALING			(1024)
#define BEAT_SCALING			(32)
#define LB_CNT_SHIFT			(28)
#define LB_CNT_MASK			GENMASK(LB_CNT_SHIFT + 3, \
						LB_CNT_SHIFT)

#define BYTE_SCALING_SHIFT		(16)
#define PROF_CFG_BYTE_SCALING_MASK	GENMASK(BYTE_SCALING_SHIFT + 11,\
						BYTE_SCALING_SHIFT)
#define BEAT_SCALING_SHIFT		(8)
#define PROF_CFG_BEAT_SCALING_MASK	GENMASK(BEAT_SCALING_SHIFT + 7,\
						BEAT_SCALING_SHIFT)
#define PROF_EN_SHIFT			(0)
#define PROF_EN				BIT(PROF_EN_SHIFT)
#define PROF_CFG_EN_MASK		GENMASK(PROF_EN_SHIFT + 0,\
						PROF_EN_SHIFT)

#define FILTER_EN_SHIFT			(31)
#define FILTER_EN			BIT(FILTER_EN_SHIFT)
#define FILTER_EN_MASK			GENMASK(FILTER_EN_SHIFT + 0,\
						FILTER_EN_SHIFT)
#define FILTER_0			(0)
#define FILTER_0_MASK			GENMASK(FILTER_0 + 0, \
						FILTER_0)
#define FILTER_1			(1)
#define FILTER_1_MASK			GENMASK(FILTER_1 + 0, \
						FILTER_1)

#define FILTER_SEL_SHIFT		(16)
#define FILTER_SEL_MASK			GENMASK(FILTER_SEL_SHIFT + 0,\
						FILTER_SEL_SHIFT)
#define EVENT_SEL_SHIFT			(0)
#define EVENT_SEL_MASK			GENMASK(EVENT_SEL_SHIFT + 5,\
						EVENT_SEL_SHIFT)

#define MID_MASK_SHIFT			(16)
#define MID_MASK_MASK			GENMASK(MID_MASK_SHIFT + 15, \
						MID_MASK_SHIFT)
#define MID_MATCH_SHIFT			(0)
#define MID_MATCH_MASK			GENMASK(MID_MATCH_SHIFT + 15, \
						MID_MATCH_SHIFT)
#define SCID_MASK_SHIFT			(16)
#define SCID_MASK_MASK			GENMASK(SCID_MASK_SHIFT + 15, \
						SCID_MASK_SHIFT)
#define SCID_MATCH_SHIFT		(0)
#define SCID_MATCH_MASK			GENMASK(SCID_MATCH_SHIFT + 15, \
						SCID_MATCH_SHIFT)
#define PROFTAG_MASK_SHIFT		(2)
#define PROFTAG_MASK_MASK		GENMASK(PROFTAG_MASK_SHIFT + 1,\
						PROFTAG_MASK_SHIFT)
#define PROFTAG_MATCH_SHIFT		(0)
#define PROFTAG_MATCH_MASK		GENMASK(PROFTAG_MATCH_SHIFT + 1,\
						PROFTAG_MATCH_SHIFT)
/* FEAC */
#define FEAC_SCALING_FILTER_SEL_SHIFT	(2)
#define FEAC_SCALING_FILTER_SEL_MASK	GENMASK(FEAC_SCALING_FILTER_SEL_SHIFT \
					+ 0, \
					FEAC_SCALING_FILTER_SEL_SHIFT)
#define FEAC_SCALING_FILTER_EN_SHIFT	(1)
#define FEAC_SCALING_FILTER_EN		BIT(FEAC_SCALING_FILTER_EN_SHIFT)
#define FEAC_SCALING_FILTER_EN_MASK	GENMASK(FEAC_SCALING_FILTER_EN_SHIFT \
					+ 0, \
					FEAC_SCALING_FILTER_EN_SHIFT)
/* BEAC */
#define BEAC_PROFTAG_MASK_SHIFT		(14)
#define BEAC_PROFTAG_MASK_MASK		GENMASK(BEAC_PROFTAG_MASK_SHIFT + 1,\
						BEAC_PROFTAG_MASK_SHIFT)
#define BEAC_PROFTAG_MATCH_SHIFT	(12)
#define BEAC_PROFTAG_MATCH_MASK		GENMASK(BEAC_PROFTAG_MATCH_SHIFT + 1,\
						BEAC_PROFTAG_MATCH_SHIFT)
#define BEAC_MC_PROFTAG_SHIFT		(1)
#define BEAC_MC_PROFTAG_MASK		GENMASK(BEAC_MC_PROFTAG_SHIFT + 1,\
					BEAC_MC_PROFTAG_SHIFT)
/* TRP */
#define TRP_SCID_MATCH_SHIFT		(0)
#define TRP_SCID_MATCH_MASK		GENMASK(TRP_SCID_MATCH_SHIFT + 4,\
						TRP_SCID_MATCH_SHIFT)
#define TRP_SCID_MASK_SHIFT		(8)
#define TRP_SCID_MASK_MASK		GENMASK(TRP_SCID_MASK_SHIFT + 4,\
						TRP_SCID_MASK_SHIFT)
#define TRP_WAY_ID_MATCH_SHIFT		(16)
#define TRP_WAY_ID_MATCH_MASK		GENMASK(TRP_WAY_ID_MATCH_SHIFT + 3,\
						TRP_WAY_ID_MATCH_SHIFT)
#define TRP_WAY_ID_MASK_SHIFT		(20)
#define TRP_WAY_ID_MASK_MASK		GENMASK(TRP_WAY_ID_MASK_SHIFT + 3,\
						TRP_WAY_ID_MASK_SHIFT)
#define TRP_PROFTAG_MATCH_SHIFT		(24)
#define TRP_PROFTAG_MATCH_MASK		GENMASK(TRP_PROFTAG_MATCH_SHIFT + 1,\
						TRP_PROFTAG_MATCH_SHIFT)
#define TRP_PROFTAG_MASK_SHIFT		(28)
#define TRP_PROFTAG_MASK_MASK		GENMASK(TRP_PROFTAG_MASK_SHIFT + 1,\
						TRP_PROFTAG_MASK_SHIFT)

#define TRP_SCID_STATUS_ACTIVE_SHIFT		(0)
#define TRP_SCID_STATUS_ACTIVE_MASK		GENMASK( \
						TRP_SCID_STATUS_ACTIVE_SHIFT \
						+ 0, \
						TRP_SCID_STATUS_ACTIVE_SHIFT)
#define TRP_SCID_STATUS_DEACTIVE_SHIFT		(1)
#define TRP_SCID_STATUS_CURRENT_CAP_SHIFT	(16)
#define TRP_SCID_STATUS_CURRENT_CAP_MASK	GENMASK( \
					TRP_SCID_STATUS_CURRENT_CAP_SHIFT \
					+ 13, \
					TRP_SCID_STATUS_CURRENT_CAP_SHIFT)

#endif /* _SOC_QCOM_LLCC_PERFMON_H_ */