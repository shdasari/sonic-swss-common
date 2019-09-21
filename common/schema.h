#ifndef __SCHEMA__
#define __SCHEMA__

namespace swss {

/***** DATABASE *****/

#define APPL_DB         0
#define ASIC_DB         1
#define COUNTERS_DB     2
#define LOGLEVEL_DB     3
#define CONFIG_DB       4
#define PFC_WD_DB       5
#define FLEX_COUNTER_DB 5
#define STATE_DB        6
#define SNMP_OVERLAY_DB 7

/***** APPLICATION DATABASE *****/

#define APP_PORT_TABLE_NAME               "PORT_TABLE"
#define APP_VLAN_TABLE_NAME               "VLAN_TABLE"
#define APP_VLAN_MEMBER_TABLE_NAME        "VLAN_MEMBER_TABLE"
#define APP_LAG_TABLE_NAME                "LAG_TABLE"
#define APP_LAG_MEMBER_TABLE_NAME         "LAG_MEMBER_TABLE"
#define APP_INTF_TABLE_NAME               "INTF_TABLE"
#define APP_NEIGH_TABLE_NAME              "NEIGH_TABLE"
#define APP_ROUTE_TABLE_NAME              "ROUTE_TABLE"
#define APP_TUNNEL_DECAP_TABLE_NAME       "TUNNEL_DECAP_TABLE"
#define APP_FDB_TABLE_NAME                "FDB_TABLE"
#define APP_PFC_WD_TABLE_NAME             "PFC_WD_TABLE"
#define APP_SWITCH_TABLE_NAME             "SWITCH_TABLE"
  
#define APP_COPP_TABLE_NAME               "COPP_TABLE"
#define APP_VRF_TABLE_NAME                "VRF_TABLE"
#define APP_VNET_TABLE_NAME               "VNET_TABLE"
#define APP_VNET_RT_TABLE_NAME            "VNET_ROUTE_TABLE"
#define APP_VNET_RT_TUNNEL_TABLE_NAME     "VNET_ROUTE_TUNNEL_TABLE"
#define APP_VXLAN_VRF_TABLE_NAME          "VXLAN_VRF_TABLE"
#define APP_VXLAN_TUNNEL_MAP_TABLE_NAME   "VXLAN_TUNNEL_MAP_TABLE"
#define APP_VXLAN_TUNNEL_TABLE_NAME       "VXLAN_TUNNEL_TABLE"
#define APP_PASS_THROUGH_ROUTE_TABLE_NAME "PASS_THROUGH_ROUTE_TABLE"
#define APP_ACL_TABLE_TABLE_NAME          "ACL_TABLE_TABLE"
#define APP_ACL_RULE_TABLE_NAME           "ACL_RULE_TABLE"
#define APP_SFLOW_TABLE_NAME              "SFLOW_TABLE"
#define APP_SFLOW_SESSION_TABLE_NAME      "SFLOW_SESSION_TABLE"
#define APP_SFLOW_SAMPLE_RATE_TABLE_NAME  "SFLOW_SAMPLE_RATE_TABLE"

/***** TO BE REMOVED *****/

#define APP_TC_TO_QUEUE_MAP_TABLE_NAME  "TC_TO_QUEUE_MAP_TABLE"
#define APP_SCHEDULER_TABLE_NAME        "SCHEDULER_TABLE"
#define APP_DSCP_TO_TC_MAP_TABLE_NAME   "DSCP_TO_TC_MAP_TABLE"
#define APP_QUEUE_TABLE_NAME            "QUEUE_TABLE"
#define APP_PORT_QOS_MAP_TABLE_NAME     "PORT_QOS_MAP_TABLE"
#define APP_WRED_PROFILE_TABLE_NAME     "WRED_PROFILE_TABLE"
#define APP_TC_TO_PRIORITY_GROUP_MAP_NAME           "TC_TO_PRIORITY_GROUP_MAP_TABLE"
#define APP_PFC_PRIORITY_TO_PRIORITY_GROUP_MAP_NAME "PFC_PRIORITY_TO_PRIORITY_GROUP_MAP_TABLE"
#define APP_PFC_PRIORITY_TO_QUEUE_MAP_NAME          "MAP_PFC_PRIORITY_TO_QUEUE"

#define APP_BUFFER_POOL_TABLE_NAME      "BUFFER_POOL_TABLE"
#define APP_BUFFER_PROFILE_TABLE_NAME   "BUFFER_PROFILE_TABLE"
#define APP_BUFFER_QUEUE_TABLE_NAME     "BUFFER_QUEUE_TABLE"
#define APP_BUFFER_PG_TABLE_NAME        "BUFFER_PG_TABLE"
#define APP_BUFFER_PORT_INGRESS_PROFILE_LIST_NAME   "BUFFER_PORT_INGRESS_PROFILE_LIST"
#define APP_BUFFER_PORT_EGRESS_PROFILE_LIST_NAME    "BUFFER_PORT_EGRESS_PROFILE_LIST"

/***** COUNTER DATABASE *****/

#define COUNTERS_PORT_NAME_MAP          "COUNTERS_PORT_NAME_MAP"
#define COUNTERS_TABLE                  "COUNTERS"
#define COUNTERS_QUEUE_NAME_MAP         "COUNTERS_QUEUE_NAME_MAP"
#define COUNTERS_QUEUE_PORT_MAP         "COUNTERS_QUEUE_PORT_MAP"
#define COUNTERS_QUEUE_INDEX_MAP        "COUNTERS_QUEUE_INDEX_MAP"
#define COUNTERS_QUEUE_TYPE_MAP         "COUNTERS_QUEUE_TYPE_MAP"
#define COUNTERS_PG_NAME_MAP            "COUNTERS_PG_NAME_MAP"
#define COUNTERS_PG_PORT_MAP            "COUNTERS_PG_PORT_MAP"
#define COUNTERS_PG_INDEX_MAP           "COUNTERS_PG_INDEX_MAP"
#define COUNTERS_RIF_TYPE_MAP           "COUNTERS_RIF_TYPE_MAP"
#define COUNTERS_RIF_NAME_MAP           "COUNTERS_RIF_NAME_MAP"
#define COUNTERS_CRM_TABLE              "CRM"
#define COUNTERS_BUFFER_POOL_NAME_MAP   "COUNTERS_BUFFER_POOL_NAME_MAP"
#define COUNTERS_THRESHOLD_BREACH_TABLE "THRESHOLD_BREACH"

#define PERIODIC_WATERMARKS_TABLE      "PERIODIC_WATERMARKS"
#define PERSISTENT_WATERMARKS_TABLE    "PERSISTENT_WATERMARKS"
#define USER_WATERMARKS_TABLE          "USER_WATERMARKS"

/***** LOGLEVEL DATABASE *****/

#define DAEMON_TABLE_NAME "DAEMON_TABLE"
#define DAEMON_LOGLEVEL "LOGLEVEL"
#define DAEMON_LOGOUTPUT "LOGOUTPUT"

/***** FLEX COUNTER DATABASE *****/

#define PFC_WD_POLL_MSECS               100
#define FLEX_COUNTER_TABLE              "FLEX_COUNTER_TABLE"
#define PORT_COUNTER_ID_LIST            "PORT_COUNTER_ID_LIST"
#define QUEUE_COUNTER_ID_LIST           "QUEUE_COUNTER_ID_LIST"
#define QUEUE_ATTR_ID_LIST              "QUEUE_ATTR_ID_LIST"
#define BUFFER_POOL_COUNTER_ID_LIST     "BUFFER_POOL_COUNTER_ID_LIST"
#define PFC_WD_STATE_TABLE              "PFC_WD_STATE_TABLE"
#define PFC_WD_PORT_COUNTER_ID_LIST     "PORT_COUNTER_ID_LIST"
#define PFC_WD_QUEUE_COUNTER_ID_LIST    "QUEUE_COUNTER_ID_LIST"
#define PFC_WD_QUEUE_ATTR_ID_LIST       "QUEUE_ATTR_ID_LIST"
#define PG_COUNTER_ID_LIST              "PG_COUNTER_ID_LIST"
#define PG_ATTR_ID_LIST                 "PG_ATTR_ID_LIST"
#define RIF_COUNTER_ID_LIST             "RIF_COUNTER_ID_LIST"
#define PLUGIN_TABLE                    "PLUGIN_TABLE"
#define LUA_PLUGIN_TYPE                 "LUA_PLUGIN_TYPE"
#define SAI_OBJECT_TYPE                 "SAI_OBJECT_TYPE"

#define POLL_INTERVAL_FIELD           "POLL_INTERVAL"
#define STATS_MODE_FIELD              "STATS_MODE"
#define STATS_MODE_READ               "STATS_MODE_READ"
#define STATS_MODE_READ_AND_CLEAR     "STATS_MODE_READ_AND_CLEAR"
#define QUEUE_PLUGIN_FIELD            "QUEUE_PLUGIN_LIST"
#define PORT_PLUGIN_FIELD             "PORT_PLUGIN_LIST"
#define PG_PLUGIN_FIELD               "PG_PLUGIN_LIST"
#define BUFFER_POOL_PLUGIN_FIELD      "BUFFER_POOL_PLUGIN_LIST"
#define FLEX_COUNTER_STATUS_FIELD     "FLEX_COUNTER_STATUS"
#define FLEX_COUNTER_GROUP_TABLE      "FLEX_COUNTER_GROUP_TABLE"

/***** CONFIGUATION DATABASE *****/

#define CFG_PORT_TABLE_NAME           "PORT"
#define CFG_PORT_CABLE_LEN_TABLE_NAME "CABLE_LENGTH"

#define CFG_INTF_TABLE_NAME               "INTERFACE"
#define CFG_LOOPBACK_INTERFACE_TABLE_NAME "LOOPBACK_INTERFACE"
#define CFG_MGMT_INTERFACE_TABLE_NAME     "MGMT_INTERFACE"
#define CFG_LAG_INTF_TABLE_NAME           "PORTCHANNEL_INTERFACE"
#define CFG_VLAN_INTF_TABLE_NAME          "VLAN_INTERFACE"
#define CFG_VLAN_SUB_INTF_TABLE_NAME      "VLAN_SUB_INTERFACE"

#define CFG_LAG_TABLE_NAME         "PORTCHANNEL"
#define CFG_LAG_MEMBER_TABLE_NAME  "PORTCHANNEL_MEMBER"
#define CFG_VLAN_TABLE_NAME        "VLAN"
#define CFG_VLAN_MEMBER_TABLE_NAME "VLAN_MEMBER"
#define CFG_SWITCH_TABLE_NAME      "SWITCH"
#define CFG_VRF_TABLE_NAME         "VRF"
#define CFG_CRM_TABLE_NAME         "CRM"

#define CFG_DHCP_SERVER_TABLE_NAME   "DHCP_SERVER"
#define CFG_NTP_SERVER_TABLE_NAME    "NTP_SERVER"
#define CFG_SYSLOG_SERVER_TABLE_NAME "SYSLOG_SERVER"

#define CFG_BGP_NEIGHBOR_TABLE_NAME "BGP_NEIGHBOR"

#define CFG_DEVICE_METADATA_TABLE_NAME "DEVICE_METADATA"

#define CFG_DEVICE_NEIGHBOR_TABLE_NAME          "DEVICE_NEIGHBOR"
#define CFG_DEVICE_NEIGHBOR_METADATA_TABLE_NAME "DEVICE_NEIGHBOR_METADATA"

#define CFG_MIRROR_SESSION_TABLE_NAME "MIRROR_SESSION"
#define CFG_ACL_TABLE_TABLE_NAME      "ACL_TABLE"
#define CFG_ACL_RULE_TABLE_NAME       "ACL_RULE"
#define CFG_PFC_WD_TABLE_NAME         "PFC_WD"
#define CFG_FLEX_COUNTER_TABLE_NAME "FLEX_COUNTER_TABLE"
#define CFG_WATERMARK_TABLE_NAME "WATERMARK_TABLE"
#define CFG_THRESHOLD_TABLE_NAME      "THRESHOLD"

#define CFG_PFC_PRIORITY_TO_PRIORITY_GROUP_MAP_TABLE_NAME "PFC_PRIORITY_TO_PRIORITY_GROUP_MAP"
#define CFG_TC_TO_PRIORITY_GROUP_MAP_TABLE_NAME     "TC_TO_PRIORITY_GROUP_MAP"
#define CFG_PFC_PRIORITY_TO_QUEUE_MAP_TABLE_NAME    "MAP_PFC_PRIORITY_TO_QUEUE"
#define CFG_TC_TO_QUEUE_MAP_TABLE_NAME              "TC_TO_QUEUE_MAP"
#define CFG_DSCP_TO_TC_MAP_TABLE_NAME               "DSCP_TO_TC_MAP"
#define CFG_SCHEDULER_TABLE_NAME                    "SCHEDULER"
#define CFG_PORT_QOS_MAP_TABLE_NAME                 "PORT_QOS_MAP"
#define CFG_WRED_PROFILE_TABLE_NAME                 "WRED_PROFILE"
#define CFG_QUEUE_TABLE_NAME                        "QUEUE"
#define CFG_DOT1P_TO_TC_MAP_TABLE_NAME              "DOT1P_TO_TC_MAP"

#define CFG_BUFFER_POOL_TABLE_NAME                  "BUFFER_POOL"
#define CFG_BUFFER_PROFILE_TABLE_NAME               "BUFFER_PROFILE"
#define CFG_BUFFER_QUEUE_TABLE_NAME                 "BUFFER_QUEUE"
#define CFG_BUFFER_PG_TABLE_NAME                    "BUFFER_PG"
#define CFG_BUFFER_PORT_INGRESS_PROFILE_LIST_NAME   "BUFFER_PORT_INGRESS_PROFILE_LIST"
#define CFG_BUFFER_PORT_EGRESS_PROFILE_LIST_NAME    "BUFFER_PORT_EGRESS_PROFILE_LIST"

#define CFG_POLICER_TABLE_NAME                      "POLICER"

#define CFG_WARM_RESTART_TABLE_NAME                 "WARM_RESTART"

#define CFG_VXLAN_TUNNEL_TABLE_NAME                 "VXLAN_TUNNEL"
#define CFG_VXLAN_TUNNEL_MAP_TABLE_NAME             "VXLAN_TUNNEL_MAP"
#define CFG_VNET_TABLE_NAME                         "VNET"
#define CFG_NEIGH_TABLE_NAME                        "NEIGH"

#define CFG_VNET_RT_TABLE_NAME                      "VNET_ROUTE"
#define CFG_VNET_RT_TUNNEL_TABLE_NAME               "VNET_ROUTE_TUNNEL"

#define CFG_PASS_THROUGH_ROUTE_TABLE_NAME           "PASS_THROUGH_ROUTE_TABLE"
#define CFG_SFLOW_TABLE_NAME                        "SFLOW"
#define CFG_SFLOW_SESSION_TABLE_NAME                "SFLOW_SESSION"

/***** STATE DATABASE *****/

#define STATE_SWITCH_CAPABILITY_TABLE_NAME          "SWITCH_CAPABILITY_TABLE"
#define STATE_PORT_TABLE_NAME                       "PORT_TABLE"
#define STATE_LAG_TABLE_NAME                        "LAG_TABLE"
#define STATE_VLAN_TABLE_NAME                       "VLAN_TABLE"
#define STATE_VLAN_MEMBER_TABLE_NAME                "VLAN_MEMBER_TABLE"
#define STATE_INTERFACE_TABLE_NAME                  "INTERFACE_TABLE"
#define STATE_FDB_TABLE_NAME                        "FDB_TABLE"
#define STATE_WARM_RESTART_TABLE_NAME               "WARM_RESTART_TABLE"
#define STATE_WARM_RESTART_ENABLE_TABLE_NAME        "WARM_RESTART_ENABLE_TABLE"
#define STATE_VRF_TABLE_NAME                        "VRF_TABLE"
#define STATE_MGMT_PORT_TABLE_NAME                  "MGMT_PORT_TABLE"
#define STATE_NEIGH_RESTORE_TABLE_NAME              "NEIGH_RESTORE_TABLE"
#define STATE_MIRROR_SESSION_TABLE_NAME             "MIRROR_SESSION_TABLE"
#define STATE_VXLAN_TABLE_NAME                      "VXLAN_TABLE"
#define STATE_BGP_TABLE_NAME                        "BGP_STATE_TABLE"

/***** MISC *****/

#define IPV4_NAME "IPv4"
#define IPV6_NAME "IPv6"

#define FRONT_PANEL_PORT_PREFIX "Ethernet"
#define PORTCHANNEL_PREFIX      "PortChannel"
#define VLAN_PREFIX             "Vlan"

#define SET_COMMAND "SET"
#define DEL_COMMAND "DEL"
#define EMPTY_PREFIX ""

#define CFG_DTEL_TABLE_NAME					"DTEL"
#define CFG_DTEL_REPORT_SESSION_TABLE_NAME	"DTEL_REPORT_SESSION"
#define CFG_DTEL_INT_SESSION_TABLE_NAME		"DTEL_INT_SESSION"
#define CFG_DTEL_QUEUE_REPORT_TABLE_NAME	"DTEL_QUEUE_REPORT"
#define CFG_DTEL_EVENT_TABLE_NAME			"DTEL_EVENT"

}

#endif
