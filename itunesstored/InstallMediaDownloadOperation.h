/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "InstallDownloadOperation.h"


__attribute__((visibility("hidden")))
@interface InstallMediaDownloadOperation : InstallDownloadOperation {
}
-(void)_updateRentalsPlistWithInstallProperties:(id)installProperties;
-(id)_newIPodLibraryItemWithInstallProperties:(id)installProperties;
-(BOOL)_installExternalDownload:(id)download withInstallProperties:(id)installProperties error:(id*)error;
-(BOOL)_installDownload:(id)download withInstallProperties:(id)installProperties error:(id*)error;
-(void)run;
@end

