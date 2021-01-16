//-------- <<< Use Configuration Wizard in Context Menu >>> -----------------
//
// <e>  BIG_ENDIAN
#define BYTE_ORDER_BIG_ENDIAN                       0
// </e>
// <e>  BORDER_AGENT
#define OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE       0
// </e>
// <e>  BORDER_ROUTER
#define OPENTHREAD_CONFIG_BORDER_ROUTER_ENABLE      1
// </e>
// <e>  COAP
#define OPENTHREAD_CONFIG_COAP_API_ENABLE           1
// </e>
// <e>  COAP_OBSERVE
#define OPENTHREAD_CONFIG_COAP_OBSERVE_API_ENABLE   0
// </e>
// <e>  COAPS
#define OPENTHREAD_CONFIG_COAP_SECURE_API_ENABLE    1
// </e>
// <e>  COMMISSIONER
#define OPENTHREAD_CONFIG_COMMISSIONER_ENABLE       1
// </e>
// <e>  CHANNEL_MANAGER
#define OPENTHREAD_CONFIG_CHANNEL_MANAGER_ENABLE    0
// </e>
// <e>  CHANNEL_MONITOR
#define OPENTHREAD_CONFIG_CHANNEL_MONITOR_ENABLE    0
// </e>
// <e>  CHILD_SUPERVISION
#define OPENTHREAD_CONFIG_CHILD_SUPERVISION_ENABLE  0
// </e>
// <e>  DHCP6_CLIENT
#define OPENTHREAD_CONFIG_DHCP6_CLIENT_ENABLE       1
// </e>
// <e>  DHCP6_SERVER
#define OPENTHREAD_CONFIG_DHCP6_SERVER_ENABLE       1
// </e>
// <e>  DIAGNOSTIC
#define OPENTHREAD_CONFIG_DIAG_ENABLE               0
// </e>
// <e>  DNS_CLIENT
#define OPENTHREAD_CONFIG_DNS_CLIENT_ENABLE         1
// </e>
// <e>  ECDSA
#define OPENTHREAD_CONFIG_ECDSA_ENABLE              0
// </e>
// <e>  EXTERNAL_HEAP
#define OPENTHREAD_CONFIG_HEAP_EXTERNAL_ENABLE      1
// </e>
// <e>  IP6_FRAGM
#define OPENTHREAD_CONFIG_IP6_FRAGMENTATION_ENABLE  0
// </e>
// <e>  JAM_DETECTION
#define OPENTHREAD_CONFIG_JAM_DETECTION_ENABLE      0
// </e>
// <e>  JOINER
#define OPENTHREAD_CONFIG_JOINER_ENABLE             1
// </e>
// <e>  LEGACY
#define OPENTHREAD_CONFIG_LEGACY_ENABLE             0
// </e>
// <e>  LINK_RAW
#define OPENTHREAD_CONFIG_LINK_RAW_ENABLE           0
// </e>
// <e>  MAC_FILTER
#define OPENTHREAD_CONFIG_MAC_FILTER_ENABLE         0
// </e>
// <e>  MTD_NETDIAG
#define OPENTHREAD_CONFIG_TMF_NETWORK_DIAG_MTD_ENABLE   0
// </e>
// <e>  PLATFORM_UDP
#define OPENTHREAD_CONFIG_PLATFORM_UDP_ENABLE       0
// </e>
// <e>  REFERENCE_DEVICE
#define OPENTHREAD_CONFIG_REFERENCE_DEVICE_ENABLE   1

// </e>
// <e>  SERVICE
#define OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_ENABLE    0
// </e>
// <e>  SETTINGS_RAM
#define OPENTHREAD_SETTINGS_RAM                     0
// </e>
// <e>  SLAAC
#define OPENTHREAD_CONFIG_IP6_SLAAC_ENABLE          1
// </e>
// <e>  SNTP_CLIENT
#define OPENTHREAD_CONFIG_SNTP_CLIENT_ENABLE        0
// </e>
// <h>  Thread Version
// <o   OPENTHREAD_CONFIG_THREAD_VERSION> THREAD_VERSION
//      <2=> Thread 1.1
//      <3=> Thread 1.2
// <i>  Thread 1.2 is currently not supported.
// <i>  Default: 2
#define OPENTHREAD_CONFIG_THREAD_VERSION 2
// </h>
// <e>  TIME_SYNC
#define OPENTHREAD_CONFIG_TIME_SYNC_ENABLE          0
// </e>
#if     OPENTHREAD_CONFIG_TIME_SYNC_ENABLE
#define OPENTHREAD_CONFIG_MAC_HEADER_IE_SUPPORT     1
#endif

// <e>  UDP_FORWARD
#define OPENTHREAD_CONFIG_UDP_FORWARD_ENABLE        0
// </e>
// <h>  Logging
// <o   OPENTHREAD_CONFIG_LOG_OUTPUT> LOG_OUTPUT
//      <OPENTHREAD_CONFIG_LOG_OUTPUT_NONE             => NONE
//      <OPENTHREAD_CONFIG_LOG_OUTPUT_APP              => APP
//      <OPENTHREAD_CONFIG_LOG_OUTPUT_PLATFORM_DEFINED => PLATFORM_DEFINED
//      <OPENTHREAD_CONFIG_LOG_OUTPUT_NCP_SPINEL       => NCP_SPINEL
// <i>  Default: OPENTHREAD_CONFIG_LOG_OUTPUT_PLATFORM_DEFINED
#define OPENTHREAD_CONFIG_LOG_OUTPUT OPENTHREAD_CONFIG_LOG_OUTPUT_APP

// <q   OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE> DYNAMIC_LOG_LEVEL
#define OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE  0

// <e>  Enable Logging
#define OPENTHREAD_FULL_LOGS_ENABLE                 0
#if     OPENTHREAD_FULL_LOGS_ENABLE

// <o   OPENTHREAD_CONFIG_LOG_LEVEL> LOG_LEVEL
//      <OT_LOG_LEVEL_NONE       => NONE
//      <OT_LOG_LEVEL_CRIT       => CRIT
//      <OT_LOG_LEVEL_WARN       => WARN
//      <OT_LOG_LEVEL_NOTE       => NOTE
//      <OT_LOG_LEVEL_INFO       => INFO
//      <OT_LOG_LEVEL_DEBG       => DEBG
// <i>  Default: OT_LOG_LEVEL_DEBG
#define OPENTHREAD_CONFIG_LOG_LEVEL OT_LOG_LEVEL_DEBG

// <q   OPENTHREAD_CONFIG_LOG_API>                  API
#define OPENTHREAD_CONFIG_LOG_API                   1
// <q   OPENTHREAD_CONFIG_LOG_ARP>                  ARP
#define OPENTHREAD_CONFIG_LOG_ARP                   1
// <q   OPENTHREAD_CONFIG_LOG_CLI>                  CLI
#define OPENTHREAD_CONFIG_LOG_CLI                   1
// <q   OPENTHREAD_CONFIG_LOG_COAP>                 COAP
#define OPENTHREAD_CONFIG_LOG_COAP                  1
// <q   OPENTHREAD_CONFIG_LOG_ICMP>                 ICMP
#define OPENTHREAD_CONFIG_LOG_ICMP                  1
// <q   OPENTHREAD_CONFIG_LOG_IP6>                  IP6
#define OPENTHREAD_CONFIG_LOG_IP6                   1
// <q   OPENTHREAD_CONFIG_LOG_MAC>                  MAC
#define OPENTHREAD_CONFIG_LOG_MAC                   1
// <q   OPENTHREAD_CONFIG_LOG_MEM>                  MEM
#define OPENTHREAD_CONFIG_LOG_MEM                   1
// <q   OPENTHREAD_CONFIG_LOG_MLE>                  MLE
#define OPENTHREAD_CONFIG_LOG_MLE                   1
// <q   OPENTHREAD_CONFIG_LOG_NETDATA>              NETDATA
#define OPENTHREAD_CONFIG_LOG_NETDATA               1
// <q   OPENTHREAD_CONFIG_LOG_NETDIAG>              NETDIAG
#define OPENTHREAD_CONFIG_LOG_NETDIAG               1
// <q   OPENTHREAD_CONFIG_LOG_PKT_DUMP>             PKT_DUMP
#define OPENTHREAD_CONFIG_LOG_PKT_DUMP              1
// <q   OPENTHREAD_CONFIG_LOG_PLATFORM>             PLATFORM
#define OPENTHREAD_CONFIG_LOG_PLATFORM              1
// <q   OPENTHREAD_CONFIG_LOG_PREPEND_LEVEL>        PREPEND_LEVEL
#define OPENTHREAD_CONFIG_LOG_PREPEND_LEVEL         1
// <q   OPENTHREAD_CONFIG_LOG_PREPEND_REGION>       PREPEND_REGION
#define OPENTHREAD_CONFIG_LOG_PREPEND_REGION        1
#endif
// </e>
// </h>
// <<< end of configuration section >>>
