/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OpenURLTarget : NSObject {
	unsigned _applicationState;
	struct {
		NSString* clientIdentifier;
		NSString* normalScheme;
		NSString* secureScheme;
	} _targetData;
	int _targetIndex;
}
-(id)description;
-(id)init;
-(id)copyURLForURL:(id)url;
-(id)initWithTargetIdentifier:(id)targetIdentifier;
-(int)compare:(id)compare;
@end

