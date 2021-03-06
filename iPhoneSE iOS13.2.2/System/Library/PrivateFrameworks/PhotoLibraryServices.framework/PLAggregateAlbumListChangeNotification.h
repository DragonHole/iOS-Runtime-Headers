/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLAggregateAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _note;
	unsigned long long _indexOffet;

}
+(id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)object;
-(id)insertedObjects;
-(id)insertedIndexes;
-(id)deletedIndexes;
-(id)deletedObjects;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(BOOL)shouldReload;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(id)changedIndexes;
-(id)changedIndexesRelativeToSnapshot;
-(id)changedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(NSObject*)albumList;
-(id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
@end

