/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedObject;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {

	BOOL _titleDidChange;
	BOOL _keyAssetDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLManagedObject * container; 
@property (nonatomic,readonly) id<PLAssetContainer> assetContainer; 
@property (nonatomic,readonly) NSObject*<PLAlbumProtocol> album; 
@property (nonatomic,readonly) BOOL titleDidChange; 
@property (nonatomic,readonly) BOOL keyAssetDidChange; 
+(id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(PLManagedObject *)container;
-(id)userInfo;
-(NSObject*<PLAlbumProtocol>)album;
-(BOOL)hasDeletes;
-(void)_calculateDiffs;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(id<PLAssetContainer>)assetContainer;
-(id)_contentRelationshipName;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
@end
