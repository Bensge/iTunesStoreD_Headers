/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSData, NSInputStream, NSURL, NSString, SSMutableURLRequestProperties, NSLock;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
	NSLock* _lock;
	SSMutableURLRequestProperties* _properties;
}
@property(assign) long long expectedContentLength;
@property(assign) int URLBagType;
@property(retain) NSDictionary* customHeaders;
@property(assign) unsigned cachePolicy;
@property(assign) double timeoutInterval;
@property(assign) int allowedRetryCount;
@property(retain) NSArray* URLs;
@property(readonly, assign) NSURL* primaryURL;
@property(retain) NSDictionary* queryStringDictionary;
@property(retain) NSString* HTTPMethod;
@property(retain) NSInputStream* HTTPBodyStream;
@property(retain) NSData* HTTPBody;
@property(retain) NSString* appleClientApplication;
+(id)requestWithURL:(id)url;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(void)dealloc;
-(id)_initCommon;
-(id)initWithRequestProperties:(id)requestProperties;
-(id)requestProperties;
-(void)setValue:(id)value forHeaderField:(id)headerField;
-(void)setValue:(id)value forQueryStringParameter:(id)queryStringParameter;
-(id)initWithURL:(id)url;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithURLRequest:(id)urlrequest;
@end
