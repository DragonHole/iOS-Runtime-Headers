/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@class NSArray, NSMutableArray, NSString;

@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache <NTKFaceCollectionObserver> {

	id _activeDeviceNotificationBlock;
	NSArray* _libraryCollections;
	NSMutableArray* _loadedCollections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyForAsset:(id)arg1 style:(id)arg2 resourceDirectory:(id)arg3 ;
+(id)sharedCache;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)_cleanCache;
-(void)_pruneUnusedKeys;
-(void)_removeImagesForKeysMatching:(/*^block*/id)arg1 ;
-(id)_init;
@end
