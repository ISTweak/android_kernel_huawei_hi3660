

#ifndef __DMAC_TXOPPS_H__
#define __DMAC_TXOPPS_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#ifdef _PRE_WLAN_FEATURE_TXOPPS


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "mac_vap.h"
#include "dmac_vap.h"




#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_DMAC_TXOPPS_H
/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
/* 软件配置mac txopps使能寄存器需要的三个参数 */
typedef mac_txopps_machw_param_stru dmac_txopps_machw_param_stru;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern oal_uint32  dmac_txopps_set_en(mac_vap_stru *pst_mac_vap, oal_switch_enum_uint8 en_switch);
extern oal_uint32  dmac_txopps_set_machw_en_sta(
                                    mac_vap_stru *pst_mac_vap,
                                    dmac_txopps_machw_param_stru *pst_txopps_machw_param);
extern oal_uint32 dmac_config_set_txop_ps_machw(mac_vap_stru *pst_mac_vap, oal_uint8 uc_len, oal_uint8 *puc_param);

extern oal_uint32  dmac_txopps_set_machw_partialaid_sta(mac_vap_stru *pst_mac_vap, oal_uint8 uc_len, oal_uint8 *puc_param);
extern oal_uint32  dmac_txopps_init_machw_sta(dmac_vap_stru *pst_dmac_vap);
extern oal_uint32 dmac_txopps_set_en(mac_vap_stru *pst_mac_vap, oal_switch_enum_uint8 en_switch);

#endif



#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of dmac_txopps.h */
