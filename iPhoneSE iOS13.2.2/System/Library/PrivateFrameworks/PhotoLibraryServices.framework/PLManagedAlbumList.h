/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAlbumList.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLDerivedAlbumListOrigin.h>
#import <libobjc.A.dylib/PLIndexMappersDataOrigin.h>

@protocol PLIndexMappingCache;
@class NSString, NSObject, NSNumber, NSMutableOrderedSet;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin> {

	NSObject*<PLIndexMappingCache> _derivedAlbumLists[5];
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,copy) NSNumber * identifier; 
@property (nonatomic,copy) NSNumber * needsReorderingNumber; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (assign,nonatomic) short albumListType; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,readonly) NSMutableOrderedSet * albums; 
@property (nonatomic,readonly) BOOL hasAtLeastOneAlbum; 
@property (nonatomic,readonly) BOOL canEditAlbums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
+(void)initialize;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(void)persistAlbumListUUIDs:(id)arg1 type:(short)arg2 pathManager:(id)arg3 allowsOverwrite:(BOOL)arg4 ;
+(BOOL)isValidTypeForPersistence:(short)arg1 ;
+(void)pushChangesFromAlbumContainer:(id)arg1 toAlbumContainer:(id)arg2 ;
+(unsigned long long)priorityForAlbumKind:(int)arg1 ;
+(BOOL)albumKindHasFixedOrder:(int)arg1 ;
+(id)_typeDescriptionForAlbumListType:(short)arg1 ;
+(id)_singletonListWithType:(short)arg1 library:(id)arg2 ;
+(id)albumListInPhotoLibrary:(id)arg1 ;
+(id)importListInPhotoLibrary:(id)arg1 ;
+(id)eventListInPhotoLibrary:(id)arg1 ;
+(id)facesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)placesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)scenesAlbumListInPhotoLibrary:(id)arg1 ;
+(id)allStreamedAlbumsListInPhotoLibrary:(id)arg1 ;
+(id)_albumListWithType:(short)arg1 inManagedObjectContext:(id)arg2 ;
+(id)albumListInManagedObjectContext:(id)arg1 ;
+(id)importListInManagedObjectContext:(id)arg1 ;
+(id)eventListInManagedObjectContext:(id)arg1 ;
+(id)facesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)placesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)scenesAlbumListInManagedObjectContext:(id)arg1 ;
+(id)allStreamedAlbumsListInManagedObjectContext:(id)arg1 ;
+(BOOL)_albumOrderMatchesFrom:(id)arg1 inDestination:(id)arg2 ;
+(id)_validAlbumsFromSource:(id)arg1 destination:(id)arg2 ;
+(BOOL)isValidPathForPersistence:(id)arg1 ;
+(BOOL)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(int)filter;
-(NSString *)_typeDescription;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)awakeFromInsert;
-(void)willSave;
-(void)didSave;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)isFolder;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(NSString *)_prettyDescription;
-(BOOL)isRegisteredForChanges;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)enumerateDerivedIndexMappers:(/*^block*/id)arg1 ;
-(BOOL)hasDerivedIndexMappers;
-(void)unregisterAllDerivedAlbums;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(void)registerDerivedAlbumList:(NSObject*)arg1 ;
-(void)enumerateDerivedAlbumLists:(/*^block*/id)arg1 ;
-(NSMutableOrderedSet *)albums;
-(BOOL)hasAtLeastOneAlbum;
-(short)albumListType;
-(BOOL)canEditAlbums;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(unsigned long long)albumsCount;
-(id)albumsSortingComparator;
-(unsigned long long)unreadAlbumsCount;
-(void)setAlbumListType:(short)arg1 ;
-(id)_albumsCountFetchRequest;
-(void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1 ;
@end
