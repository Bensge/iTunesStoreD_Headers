/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISOperationDelegate.h"
#import <iTunesStore/ISOperation.h>


__attribute__((visibility("hidden")))
@interface RestoreDownloadDataOperation : ISOperation <ISOperationDelegate> {
	long long _downloadID;
}
@property(readonly, assign) long long downloadIdentifier;
-(BOOL)_restoreDataForBundleID:(id)bundleID restoreState:(id)state error:(id*)error;
-(BOOL)_isFatalRestoreError:(id)error;
-(void)operationFinished:(id)finished;
-(void)operation:(id)operation updatedProgress:(id)progress;
-(void)run;
-(id)initWithDownloadIdentifier:(long long)downloadIdentifier;
@end

