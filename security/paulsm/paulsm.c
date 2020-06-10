// SPDX-License-Identifier: GPL-2.0-only
#include <linux/module.h>
#include <linux/lsm_hooks.h>

static int paul_inode_unlink(struct inode *dir, struct dentry *dentry)
{
	if (strncmp("paul", dentry->d_iname, 4) == 0) {
		printk(KERN_ALERT "Paul's unlinking node alert: %s\n", 
			dentry->d_iname);
		return 1;
	}
	return 0;
}

static struct security_hook_list paulsm_hooks[] __lsm_ro_after_init = {
	LSM_HOOK_INIT(inode_unlink, paul_inode_unlink),
};

static int __init paulsm_init(void)
{
	printk(KERN_ALERT "paulsm init");
	security_add_hooks(paulsm_hooks, ARRAY_SIZE(paulsm_hooks), "paulsm");
	return 0;
}

DEFINE_LSM(paulsm) = {
	.name = "paulsm",
	.init = paulsm_init,
};

