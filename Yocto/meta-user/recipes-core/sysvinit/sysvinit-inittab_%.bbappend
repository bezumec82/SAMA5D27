FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI +=  "file://inittab \
            "

do_install_append() {
        install -d ${D}${sysconfdir}         
        install -m 0755 ${WORKDIR}/inittab      ${D}${sysconfdir}/inittab
}
 

