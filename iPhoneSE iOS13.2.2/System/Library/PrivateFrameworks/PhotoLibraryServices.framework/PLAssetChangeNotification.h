/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification {

	NSSet* _updatedAssets;

}

@property (nonatomic,copy) NSSet * updatedAssets;              //@synthesize updatedAssets=_updatedAssets - In the implementation block
+(id)notificationWithChangedAssets:(id)arg1 ;
-(id)description;
-(id)name;
-(id)object;
-(id)userInfo;
-(id)_init;
-(id)_initWithChangedObjects:(id)arg1 ;
-(NSSet *)updatedAssets;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
@end

