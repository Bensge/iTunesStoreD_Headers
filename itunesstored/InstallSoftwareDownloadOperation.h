/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "InstallDownloadOperation.h"


__attribute__((visibility("hidden")))
@interface InstallSoftwareDownloadOperation : InstallDownloadOperation {
}
-(id)_newSoftwarePropertiesWithDownload:(id)download installProperties:(id)properties;
-(void)_monitorForTerminationOfBundleID:(id)bundleID downloadID:(long long)anId;
-(void)run;
-(long long)downloadIdentifier;
-(id)initWithDownloadIdentifier:(long long)downloadIdentifier;
@end

