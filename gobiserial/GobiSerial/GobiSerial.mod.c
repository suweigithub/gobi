#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2b22e0c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2ce3657e, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x8689c9d5, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xa5579cc, __VMLINUX_SYMBOL_STR(usb_serial_suspend) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x2f688d32, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
	{ 0xe39fb986, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x284a4914, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x8b41d2a3, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xb153f6c5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2b056eed, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd97dcdf2, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4ec76535, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x35cef830, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xce858ac3, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3a5b9efb, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x5721e571, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xace1a41b, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfc1512, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x4c9a31f4, __VMLINUX_SYMBOL_STR(usb_serial_generic_resume) },
	{ 0xdc0accc3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v05C6p920Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p68C0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p90B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p90B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p361Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p371Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2DEEp4D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2DEEp4D07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2020p2033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2020p2040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p9025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p9029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2020p2063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9054d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p9061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1111F753A8AD36A3E2ED60");
