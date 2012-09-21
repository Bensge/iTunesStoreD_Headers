/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MBManagerDelegate.h"
#import "itunesstored-Structs.h"
#import <iTunesStore/ISOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RestoreBackupOperation : ISOperation <MBManagerDelegate> {
	NSString* _bundleID;
	BOOL _isFailed;
	dispatch_semaphore_s* _semaphore;
}
@property(readonly, assign, getter=isFailed) BOOL failed;
@property(readonly, assign) NSString* bundleIdentifier;
+(BOOL)restoreDataExistsForApplicationWithBundleID:(id)bundleID size:(unsigned long long*)size;
+(BOOL)cancelApplicationRestoreWithBundleID:(id)bundleID error:(id*)error;
-(void)managerDidLoseConnectionToService:(id)manager;
-(void)managerDidFinishRestore:(id)manager;
-(void)managerDidFinishBackup:(id)manager;
-(void)manager:(id)manager didUpdateProgress:(float)progress estimatedTimeRemaining:(unsigned)remaining;
-(void)manager:(id)manager didFailRestoreWithError:(id)error;
-(void)manager:(id)manager didFailBackupWithError:(id)error;
-(void)run;
-(void)cancel;
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)bundleIdentifier isFailed:(BOOL)failed;
@end
