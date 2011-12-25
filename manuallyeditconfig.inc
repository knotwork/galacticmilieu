############################################################
#
# manuallyeditconfig.inc
#
# We want the admin to create CONFIGURATION.inc
# based on CONFIGURATION.distrib
#
#
############################################################

echo
echo '--> Oops, human intervention is needed!'
echo
echo '!! Has the admin created CONFIGURATION.inc yet?!?!'
echo '!! CONFIGURATION.distrib is provided as a template'
echo '!! or example, the admin is supposed to go through'
echo '!! it carefully setting all the GM_CONFIG_* variables'
echo '!! to whatever values they wish their installation of'
echo '!! this GitHub repo portion of the Galactic Milieu'
echo '!! to use on this machine it is trying to run on now.'
echo
echo "--> Please bring the !! parts above to admin's eyes!"
echo
echo 'This file, manuallyeditconfig.inc, cannot really do'
echo 'anything about this state of affairs other than try'
echo 'to get it brought to the attention of an admin.'
echo
echo "It doesn't even know whether the admin would mind"
echo 'having git pull called at this point, nor even'
echo 'whether git itself is currently installed or'
echo 'intended by the admin to be installed.'
echo
echo 'Though trying git pull here could maybe discover'
echo 'newer more in depth strategies or tactics to try'
echo 'at this point.'
echo

#
# Admin: its up to you, wanna try that here?
# 
# If so set GM_CONFIG_MANUALLYEDIT_TRIES_PULL
# in CONFIGURATION.inc
#

if [ "GM_CONFIG_MANUALLYEDIT_TRIES_PULL"x == 'yes'x ]; then
  git pull
fi

#
# If crontab has been set up we can hope the whole try
# to run idea will get tried again sometime by cron
# so we are done for now, its now down to either admin
# does something or admin already told crontab to do
# something...
#

exit 1


