/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PipelineDownloadStep : NSObject {
	long long _assetID;
	NSString* _assetType;
	NSString* _downloadPhase;
	BOOL _handlerDidRelease;
	BOOL _pluggedInConstrained;
	BOOL _networkConstrained;
	double _progressWeight;
	BOOL _requiresHandler;
	BOOL _skippable;
}
@property(assign, nonatomic, getter=isSkippable) BOOL skippable;
@property(assign, nonatomic) BOOL requiresHandler;
@property(assign, nonatomic) double progressWeight;
@property(assign, nonatomic, getter=isPluggedInConstrained) BOOL pluggedInConstrained;
@property(assign, nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property(assign, nonatomic) BOOL handlerDidRelease;
@property(copy, nonatomic) NSString* downloadPhase;
@property(copy, nonatomic) NSString* assetType;
@property(assign, nonatomic) long long assetIdentifier;
-(id)description;
-(void)dealloc;
-(id)initWithDownloadPhase:(id)downloadPhase progressWeight:(double)weight;
@end
