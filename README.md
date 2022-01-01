# M5StickCPLUS.fakeWinXP

Heavily inspired by https://github.com/VolosR/fAKEWINESP

Have to get the images of exact size, resizing existing images to new dimensions will not work.<br>
M5StickC Plus is 135*240.<br>
Downloaded the respective images from the internet, and resized keeping aspect ratio for width 135px.<br>
Manually, created the top and bottom "bands" on the welcome image.<br>
Same for the desktop image. Got the start menu bar strip first, then resized the rest of the desktop (minus the height required for the menu bar strip).<br>
Finally, got the My Computer icon with transparent background and laid it over the desktop image. <br>
Did this in horizontal orientation so that more screen space can be used.<br>
All image processing done in paint.net.<br>
<br>
For the loading screen, downloaded the gif and resized it online keeping aspect ratio for width 135px.<br>
Then downloaded individual images of the gif.<br>
Used the tool https://github.com/cirquit/UTFTConverter to convert all the images to C array using terminal.<br>
After manually creating the header file for the loading gif from the C arrays, the space constraint of M5StickC Plus was getting breached.<br>
Had to minify all the files using this tool: https://github.com/Scylardor/cminify<br>
Also had to change settings in board for Partition Scheme.<br>