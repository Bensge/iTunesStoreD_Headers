/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DownloadError.h"
#import "itunesstored-Structs.h"
#import "NSCopying.h"

@class SSNetworkConstraints;

__attribute__((visibility("hidden")))
@interface DownloadNetworkConstraintError : DownloadError <NSCopying> {
	BOOL _canDownloadInITunes;
	SSNetworkConstraints* _networkConstraints;
	long long _sizeLimit;
}
@property(copy, nonatomic) SSNetworkConstraints* networkConstraints;
@property(assign, nonatomic) long long constrainedSizeLimit;
@property(assign, nonatomic) BOOL canDownloadInITunes;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isValidError;
-(id)copyUserNotification;
-(id)_specificStringWithLocalizedKeyBase:(id)localizedKeyBase;
-(id)_genericStringWithLocalizedKeyBase:(id)localizedKeyBase;
-(BOOL)canCoalesceWithError:(id)error;
-(void)dealloc;
@end
