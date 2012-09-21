/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EntityImport.h"

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface DownloadImport : EntityImport {
	NSMutableArray* _assets;
}
@property(readonly, assign) BOOL requiresDevicePluggedIn;
@property(readonly, assign, nonatomic) NSArray* assets;
+(Class)entityClass;
-(BOOL)_setThumbnailImageWithExternalAssets:(id)externalAssets error:(id*)error;
-(BOOL)_setDatabasePropertiesWithExternalMetadata:(id)externalMetadata error:(id*)error;
-(BOOL)_setAssetsWithExternalAssets:(id)externalAssets error:(id*)error;
-(void)removeAssetsWithAssetType:(id)assetType;
-(id)copyDownloadKeyCookie;
-(id)anyAssetForAssetType:(id)assetType;
-(void)dealloc;
-(id)initWithStoreDownload:(id)storeDownload;
-(id)initWithExternalManifestDictionary:(id)externalManifestDictionary;
-(id)initWithClientXPCObject:(void*)clientXPCObject;
@end

