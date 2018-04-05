#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x61d603fd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x461467fb, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xe0e464f, __VMLINUX_SYMBOL_STR(debugfs_create_x64) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1594e9b, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x3a38b71f, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x3380322d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xbb4f4766, __VMLINUX_SYMBOL_STR(simple_write_to_buffer) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "71F57471B5CB887512419D1");
