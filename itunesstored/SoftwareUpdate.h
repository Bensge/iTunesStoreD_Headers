/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSArray, ISSoftwareApplication, NSDictionary;

__attribute__((visibility("hidden")))
@interface SoftwareUpdate : NSObject {
	NSDictionary* _dictionary;
	int _state;
}
@property(readonly, assign, nonatomic) NSArray* _versionOrdering;
@property(readonly, assign, nonatomic) NSNumber* _versionIdentifier;
@property(readonly, assign, nonatomic) ISSoftwareApplication* _installedApplication;
@property(readonly, assign, nonatomic, getter=isNewerThanInstalled) BOOL newerThanInstalled;
@property(assign, nonatomic) int softwareUpdateState;
@property(readonly, assign, nonatomic) NSNumber* itemIdentifier;
@property(readonly, assign, nonatomic) NSDictionary* dictionary;
-(id)_copyStoreOffer;
-(BOOL)_checkVersionOrdering;
-(id)copyCacheRepresentation;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithCacheRepresentation:(id)cacheRepresentation;
@end

