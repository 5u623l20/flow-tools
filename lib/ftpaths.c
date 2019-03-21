#include <ftlib.h>

static const char* ftpaths[] = {
  [_FT_PATH_CFG_MAP] = SYSCONFDIR "/flow-tools/map.cfg",
  [_FT_PATH_CFG_TAG] = SYSCONFDIR "/flow-tools/tag.cfg",
  [_FT_PATH_CFG_FILTER] = SYSCONFDIR "/flow-tools/filter.cfg",
  [_FT_PATH_CFG_STAT] = SYSCONFDIR "/flow-tools/stat.cfg",
  [_FT_PATH_CFG_MASK] = SYSCONFDIR "/flow-tools/mask.cfg",
  [_FT_PATH_CFG_XLATE] = SYSCONFDIR "/flow-tools/xlate.cfg",

  [_FT_PATH_SYM_IP_PROT] = SYSCONFDIR "/flow-tools/ip-prot.sym",
  [_FT_PATH_SYM_IP_TYPE] = SYSCONFDIR "/flow-tools/ip-type.sym",
  [_FT_PATH_SYM_TCP_PORT] = SYSCONFDIR "/flow-tools/tcp-port.sym",
  [_FT_PATH_SYM_ASN] = SYSCONFDIR "/flow-tools/asn.sym",
  [_FT_PATH_SYM_TAG] = SYSCONFDIR "/flow-tools/tag.sym"
};

const char *ft_get_path(enum ft_config_path pathid) {
  return ftpaths[pathid];
}
