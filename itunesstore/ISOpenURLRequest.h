/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSURL, NSString;

@interface ISOpenURLRequest : NSObject <NSCopying> {
@private
	BOOL _isITunesStoreURL;
	NSString* _targetIdentifier;
	NSString* _urlBagKey;
	NSURL* _url;
}
@property(copy, nonatomic) NSString* targetIdentifier;
@property(assign, nonatomic, getter=isITunesStoreURL) BOOL ITunesStoreURL;
@property(copy, nonatomic) NSString* URLBagKey;
@property(retain, nonatomic) NSURL* URL;
+(id)openURLRequestWithURL:(id)url;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(void)dealloc;
-(id)initWithURLBagKey:(id)urlbagKey;
-(id)initWithURL:(id)url;
@end

